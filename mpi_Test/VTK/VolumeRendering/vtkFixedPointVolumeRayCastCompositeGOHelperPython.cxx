// python wrapper for vtkFixedPointVolumeRayCastCompositeGOHelper
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
#include "vtkFixedPointVolumeRayCastCompositeGOHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeGOHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeGOHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFixedPointVolumeRayCastCompositeGOHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastCompositeGOHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFixedPointVolumeRayCastHelperNew
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(const char *); }
#define DECLARED_PyVTKClass_vtkFixedPointVolumeRayCastHelperNew
#endif

static const char **PyvtkFixedPointVolumeRayCastCompositeGOHelper_Doc();


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOHelper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastCompositeGOHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOHelper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastCompositeGOHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOHelper *>(vp);

  vtkFixedPointVolumeRayCastCompositeGOHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastCompositeGOHelper::NewInstance();
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
PyvtkFixedPointVolumeRayCastCompositeGOHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFixedPointVolumeRayCastCompositeGOHelper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFixedPointVolumeRayCastCompositeGOHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOHelper_GenerateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOHelper *>(vp);

  int temp0;
  int temp1;
  vtkVolume *temp2 = NULL;
  vtkFixedPointVolumeRayCastMapper *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVolume") &&
      ap.GetVTKObject(temp3, "vtkFixedPointVolumeRayCastMapper"))
    {
    if (ap.IsBound())
      {
      op->GenerateImage(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastCompositeGOHelper::GenerateImage(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastCompositeGOHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedPointVolumeRayCastCompositeGOHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedPointVolumeRayCastCompositeGOHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedPointVolumeRayCastCompositeGOHelper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFixedPointVolumeRayCastCompositeGOHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedPointVolumeRayCastCompositeGOHelper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkFixedPointVolumeRayCastCompositeGOHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOHelper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GenerateImage", PyvtkFixedPointVolumeRayCastCompositeGOHelper_GenerateImage, 1,
   (char*)"V.GenerateImage(int, int, vtkVolume,\n    vtkFixedPointVolumeRayCastMapper)\nC++: virtual void GenerateImage(int threadID, int threadCount,\n    vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedPointVolumeRayCastCompositeGOHelper_StaticNew()
{
  return vtkFixedPointVolumeRayCastCompositeGOHelper::New();
}

PyObject *PyVTKClass_vtkFixedPointVolumeRayCastCompositeGOHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedPointVolumeRayCastCompositeGOHelper_StaticNew,
    PyvtkFixedPointVolumeRayCastCompositeGOHelper_Methods,
    "vtkFixedPointVolumeRayCastCompositeGOHelper", modulename,
    NULL, NULL,
    PyvtkFixedPointVolumeRayCastCompositeGOHelper_Doc(),
    PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(modulename));
  return cls;
}

const char **PyvtkFixedPointVolumeRayCastCompositeGOHelper_Doc()
{
  static const char *docstring[] = {
    "vtkFixedPointVolumeRayCastCompositeGOHelper - A helper that generates\ncomposite images for the volume ray cast mapper\n\n",
    "Superclass: vtkFixedPointVolumeRayCastHelper\n\n",
    "This is one of the helper classes for the\nvtkFixedPointVolumeRayCastMapper. It will generate composite images\nusing an alpha blending operation. This class should not be used\ndirectly, it is a helper class for the mapper and has no user-level\nAPI.\n\nSee Also:\n\nvtkFixedPointVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeGOHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedPointVolumeRayCastCompositeGOHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedPointVolumeRayCastCompositeGOHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

