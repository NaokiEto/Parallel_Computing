// python wrapper for vtkVolumeRayCastFunction
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
#include "vtkVolumeRayCastFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeRayCastFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeRayCastFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeRayCastFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeRayCastFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVolumeRayCastFunction_Doc();


static PyObject *
PyvtkVolumeRayCastFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

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
      tempr = op->vtkVolumeRayCastFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

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
      tempr = op->vtkVolumeRayCastFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  vtkVolumeRayCastFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeRayCastFunction::NewInstance();
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
PyvtkVolumeRayCastFunction_FunctionInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  vtkVolumeRayCastStaticInfo *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkVolumeRayCastStaticInfo"))
    {
    if (ap.IsBound())
      {
      op->FunctionInitialize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeRayCastFunction::FunctionInitialize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_CastRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CastRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  vtkVolumeRayCastDynamicInfo *temp0 = NULL;
  vtkVolumeRayCastStaticInfo *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolumeRayCastDynamicInfo") &&
      ap.GetVTKObject(temp1, "vtkVolumeRayCastStaticInfo"))
    {
    op->CastRay(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastFunction_GetZeroOpacityThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroOpacityThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastFunction *op = static_cast<vtkVolumeRayCastFunction *>(vp);

  vtkVolume *temp0 = NULL;
  float tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    tempr = op->GetZeroOpacityThreshold(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeRayCastFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRayCastFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRayCastFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRayCastFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeRayCastFunction\nC++: vtkVolumeRayCastFunction *NewInstance()\n\n"},
  {(char*)"FunctionInitialize", PyvtkVolumeRayCastFunction_FunctionInitialize, 1,
   (char*)"V.FunctionInitialize(vtkRenderer, vtkVolume,\n    vtkVolumeRayCastStaticInfo)\nC++: void FunctionInitialize(vtkRenderer *ren, vtkVolume *vol,\n    vtkVolumeRayCastStaticInfo *staticInfo)\n\nDo the basic initialization. This includes saving the parameters\npassed in into local variables, as well as grabbing some useful\ninfo from the volume property and normal encoder. This initialize\nroutine is called once per render. It also calls the\nSpecificFunctionInitialize of the subclass function.\n"},
  {(char*)"CastRay", PyvtkVolumeRayCastFunction_CastRay, 1,
   (char*)"V.CastRay(vtkVolumeRayCastDynamicInfo, vtkVolumeRayCastStaticInfo)\nC++: virtual void CastRay(\n    vtkVolumeRayCastDynamicInfo *dynamicInfo,\n    vtkVolumeRayCastStaticInfo *staticInfo)\n\n"},
  {(char*)"GetZeroOpacityThreshold", PyvtkVolumeRayCastFunction_GetZeroOpacityThreshold, 1,
   (char*)"V.GetZeroOpacityThreshold(vtkVolume) -> float\nC++: virtual float GetZeroOpacityThreshold(vtkVolume *vol)\n\nGet the value below which all scalar values are considered to\nhave 0 opacity.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkVolumeRayCastFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkVolumeRayCastFunction_Methods,
    "vtkVolumeRayCastFunction", modulename,
    NULL, NULL,
    PyvtkVolumeRayCastFunction_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkVolumeRayCastFunction_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRayCastFunction - a superclass for ray casting functions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkVolumeRayCastFunction is a superclass for ray casting functions\nthat can be used within a vtkVolumeRayCastMapper. This includes for\nexample, vtkVolumeRayCastCompositeFunction,\nvtkVolumeRayCastMIPFunction, and vtkVolumeRayCastIsosurfaceFunction.\n\nSee Also:\n\nvtkVolumeRayCastCompositeFunction vtkVolumeRayCastMIPFunction\nvtkVolumeRayCastIsosurfaceFunction vtkVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRayCastFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRayCastFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRayCastFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

