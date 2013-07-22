// python wrapper for vtkFixedPointVolumeRayCastHelper
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
#include "vtkFixedPointVolumeRayCastHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFixedPointVolumeRayCastHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFixedPointVolumeRayCastHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFixedPointVolumeRayCastHelper_Doc();


static PyObject *
PyvtkFixedPointVolumeRayCastHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastHelper *op = static_cast<vtkFixedPointVolumeRayCastHelper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastHelper *op = static_cast<vtkFixedPointVolumeRayCastHelper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastHelper *op = static_cast<vtkFixedPointVolumeRayCastHelper *>(vp);

  vtkFixedPointVolumeRayCastHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastHelper::NewInstance();
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
PyvtkFixedPointVolumeRayCastHelper_GenerateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastHelper *op = static_cast<vtkFixedPointVolumeRayCastHelper *>(vp);

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
      op->vtkFixedPointVolumeRayCastHelper::GenerateImage(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedPointVolumeRayCastHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedPointVolumeRayCastHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedPointVolumeRayCastHelper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFixedPointVolumeRayCastHelper\nC++: vtkFixedPointVolumeRayCastHelper *NewInstance()\n\n"},
  {(char*)"GenerateImage", PyvtkFixedPointVolumeRayCastHelper_GenerateImage, 1,
   (char*)"V.GenerateImage(int, int, vtkVolume,\n    vtkFixedPointVolumeRayCastMapper)\nC++: virtual void GenerateImage(int, int, vtkVolume *,\n    vtkFixedPointVolumeRayCastMapper *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedPointVolumeRayCastHelper_StaticNew()
{
  return vtkFixedPointVolumeRayCastHelper::New();
}

PyObject *PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedPointVolumeRayCastHelper_StaticNew,
    PyvtkFixedPointVolumeRayCastHelper_Methods,
    "vtkFixedPointVolumeRayCastHelper", modulename,
    NULL, NULL,
    PyvtkFixedPointVolumeRayCastHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFixedPointVolumeRayCastHelper_Doc()
{
  static const char *docstring[] = {
    "vtkFixedPointVolumeRayCastHelper - An abstract helper that generates\nimages for the volume ray cast mapper\n\n",
    "Superclass: vtkObject\n\n",
    "This is the abstract superclass of all helper classes for the\nvtkFixedPointVolumeRayCastMapper. This class should not be used\ndirectly.\n\nSee Also:\n\nvtkFixedPointVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedPointVolumeRayCastHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedPointVolumeRayCastHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

