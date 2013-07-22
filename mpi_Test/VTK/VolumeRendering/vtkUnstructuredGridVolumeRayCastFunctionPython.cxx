// python wrapper for vtkUnstructuredGridVolumeRayCastFunction
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
#include "vtkUnstructuredGridVolumeRayCastFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkUnstructuredGridVolumeRayCastFunction_Doc();


static PyObject *
PyvtkUnstructuredGridVolumeRayCastFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastFunction *op = static_cast<vtkUnstructuredGridVolumeRayCastFunction *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastFunction *op = static_cast<vtkUnstructuredGridVolumeRayCastFunction *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastFunction *op = static_cast<vtkUnstructuredGridVolumeRayCastFunction *>(vp);

  vtkUnstructuredGridVolumeRayCastFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastFunction::NewInstance();
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
PyvtkUnstructuredGridVolumeRayCastFunction_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastFunction *op = static_cast<vtkUnstructuredGridVolumeRayCastFunction *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    op->Initialize(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastFunction_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastFunction *op = static_cast<vtkUnstructuredGridVolumeRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Finalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastFunction_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastFunction *op = static_cast<vtkUnstructuredGridVolumeRayCastFunction *>(vp);

  vtkUnstructuredGridVolumeRayCastIterator *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->NewIterator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeRayCastFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridVolumeRayCastFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridVolumeRayCastFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridVolumeRayCastFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridVolumeRayCastFunction\nC++: vtkUnstructuredGridVolumeRayCastFunction *NewInstance()\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridVolumeRayCastFunction_Initialize, 1,
   (char*)"V.Initialize(vtkRenderer, vtkVolume)\nC++: virtual void Initialize(vtkRenderer *ren, vtkVolume *vol)\n\n"},
  {(char*)"Finalize", PyvtkUnstructuredGridVolumeRayCastFunction_Finalize, 1,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\n\n"},
  {(char*)"NewIterator", PyvtkUnstructuredGridVolumeRayCastFunction_NewIterator, 1,
   (char*)"V.NewIterator() -> vtkUnstructuredGridVolumeRayCastIterator\nC++: virtual vtkUnstructuredGridVolumeRayCastIterator *NewIterator(\n    )\n\nReturns a new object that will iterate over all the intersections\nof a ray with the cells of the input.  The calling code is\nresponsible for deleting the returned object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnstructuredGridVolumeRayCastFunction_Methods,
    "vtkUnstructuredGridVolumeRayCastFunction", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridVolumeRayCastFunction_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridVolumeRayCastFunction_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridVolumeRayCastFunction - a superclass for ray\ncasting functions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkUnstructuredGridVolumeRayCastFunction is a superclass for ray\ncasting functions that can be used within a\nvtkUnstructuredGridVolumeRayCastMapper.\n\nSee Also:\n\nvtkUnstructuredGridVolumeRayCastMapper\nvtkUnstructuredGridVolumeRayIntegrator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridVolumeRayCastFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

