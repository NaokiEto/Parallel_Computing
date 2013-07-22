// python wrapper for vtkFixedPointVolumeRayCastMIPHelper
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
#include "vtkFixedPointVolumeRayCastMIPHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFixedPointVolumeRayCastMIPHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFixedPointVolumeRayCastMIPHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFixedPointVolumeRayCastMIPHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastMIPHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkFixedPointVolumeRayCastHelperNew
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(const char *); }
#define DECLARED_PyVTKClass_vtkFixedPointVolumeRayCastHelperNew
#endif

static const char **PyvtkFixedPointVolumeRayCastMIPHelper_Doc();


static PyObject *
PyvtkFixedPointVolumeRayCastMIPHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMIPHelper *op = static_cast<vtkFixedPointVolumeRayCastMIPHelper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastMIPHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMIPHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMIPHelper *op = static_cast<vtkFixedPointVolumeRayCastMIPHelper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastMIPHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMIPHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMIPHelper *op = static_cast<vtkFixedPointVolumeRayCastMIPHelper *>(vp);

  vtkFixedPointVolumeRayCastMIPHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMIPHelper::NewInstance();
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
PyvtkFixedPointVolumeRayCastMIPHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFixedPointVolumeRayCastMIPHelper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFixedPointVolumeRayCastMIPHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMIPHelper_GenerateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMIPHelper *op = static_cast<vtkFixedPointVolumeRayCastMIPHelper *>(vp);

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
      op->vtkFixedPointVolumeRayCastMIPHelper::GenerateImage(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastMIPHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedPointVolumeRayCastMIPHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedPointVolumeRayCastMIPHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedPointVolumeRayCastMIPHelper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFixedPointVolumeRayCastMIPHelper\nC++: vtkFixedPointVolumeRayCastMIPHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedPointVolumeRayCastMIPHelper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFixedPointVolumeRayCastMIPHelper\nC++: vtkFixedPointVolumeRayCastMIPHelper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GenerateImage", PyvtkFixedPointVolumeRayCastMIPHelper_GenerateImage, 1,
   (char*)"V.GenerateImage(int, int, vtkVolume,\n    vtkFixedPointVolumeRayCastMapper)\nC++: virtual void GenerateImage(int threadID, int threadCount,\n    vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedPointVolumeRayCastMIPHelper_StaticNew()
{
  return vtkFixedPointVolumeRayCastMIPHelper::New();
}

PyObject *PyVTKClass_vtkFixedPointVolumeRayCastMIPHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedPointVolumeRayCastMIPHelper_StaticNew,
    PyvtkFixedPointVolumeRayCastMIPHelper_Methods,
    "vtkFixedPointVolumeRayCastMIPHelper", modulename,
    NULL, NULL,
    PyvtkFixedPointVolumeRayCastMIPHelper_Doc(),
    PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(modulename));
  return cls;
}

const char **PyvtkFixedPointVolumeRayCastMIPHelper_Doc()
{
  static const char *docstring[] = {
    "vtkFixedPointVolumeRayCastMIPHelper - A helper that generates MIP\nimages for the volume ray cast mapper\n\n",
    "Superclass: vtkFixedPointVolumeRayCastHelper\n\n",
    "This is one of the helper classes for the\nvtkFixedPointVolumeRayCastMapper. It will generate maximum intensity\nimages. This class should not be used directly, it is a helper class\nfor the mapper and has no user-level API.\n\nSee Also:\n\nvtkFixedPointVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastMIPHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedPointVolumeRayCastMIPHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedPointVolumeRayCastMIPHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

