// python wrapper for vtkFixedPointVolumeRayCastCompositeGOShadeHelper
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
#include "vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeGOShadeHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeGOShadeHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFixedPointVolumeRayCastCompositeGOShadeHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastCompositeGOShadeHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFixedPointVolumeRayCastHelperNew
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(const char *); }
#define DECLARED_PyVTKClass_vtkFixedPointVolumeRayCastHelperNew
#endif

static const char **PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Doc();


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOShadeHelper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastCompositeGOShadeHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOShadeHelper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastCompositeGOShadeHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOShadeHelper *>(vp);

  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastCompositeGOShadeHelper::NewInstance();
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
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFixedPointVolumeRayCastCompositeGOShadeHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_GenerateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOShadeHelper *>(vp);

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
      op->vtkFixedPointVolumeRayCastCompositeGOShadeHelper::GenerateImage(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_NewInstance, 1,
   (char*)"V.NewInstance()\n    -> vtkFixedPointVolumeRayCastCompositeGOShadeHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOShadeHelper *NewInstance(\n    )\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkFixedPointVolumeRayCastCompositeGOShadeHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOShadeHelper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GenerateImage", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_GenerateImage, 1,
   (char*)"V.GenerateImage(int, int, vtkVolume,\n    vtkFixedPointVolumeRayCastMapper)\nC++: virtual void GenerateImage(int threadID, int threadCount,\n    vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_StaticNew()
{
  return vtkFixedPointVolumeRayCastCompositeGOShadeHelper::New();
}

PyObject *PyVTKClass_vtkFixedPointVolumeRayCastCompositeGOShadeHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_StaticNew,
    PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Methods,
    "vtkFixedPointVolumeRayCastCompositeGOShadeHelper", modulename,
    NULL, NULL,
    PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Doc(),
    PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(modulename));
  return cls;
}

const char **PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Doc()
{
  static const char *docstring[] = {
    "vtkFixedPointVolumeRayCastCompositeGOShadeHelper - A helper that\ngenerates composite images for the volume ray cast mapper\n\n",
    "Superclass: vtkFixedPointVolumeRayCastHelper\n\n",
    "This is one of the helper classes for the\nvtkFixedPointVolumeRayCastMapper. It will generate composite images\nusing an alpha blending operation. This class should not be used\ndirectly, it is a helper class for the mapper and has no user-level\nAPI.\n\nSee Also:\n\nvtkFixedPointVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeGOShadeHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedPointVolumeRayCastCompositeGOShadeHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedPointVolumeRayCastCompositeGOShadeHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

