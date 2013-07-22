// python wrapper for vtkUnstructuredGridVolumeRayIntegrator
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
#include "vtkUnstructuredGridVolumeRayIntegrator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridVolumeRayIntegrator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridVolumeRayIntegrator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkUnstructuredGridVolumeRayIntegrator_Doc();


static PyObject *
PyvtkUnstructuredGridVolumeRayIntegrator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayIntegrator *op = static_cast<vtkUnstructuredGridVolumeRayIntegrator *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayIntegrator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayIntegrator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayIntegrator *op = static_cast<vtkUnstructuredGridVolumeRayIntegrator *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayIntegrator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayIntegrator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayIntegrator *op = static_cast<vtkUnstructuredGridVolumeRayIntegrator *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayIntegrator::NewInstance();
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
PyvtkUnstructuredGridVolumeRayIntegrator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayIntegrator *op = static_cast<vtkUnstructuredGridVolumeRayIntegrator *>(vp);

  vtkVolume *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
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
PyvtkUnstructuredGridVolumeRayIntegrator_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayIntegrator *op = static_cast<vtkUnstructuredGridVolumeRayIntegrator *>(vp);

  vtkDoubleArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  float temp3[4];
  float save3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    op->Integrate(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeRayIntegrator_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridVolumeRayIntegrator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridVolumeRayIntegrator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridVolumeRayIntegrator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridVolumeRayIntegrator\nC++: vtkUnstructuredGridVolumeRayIntegrator *NewInstance()\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridVolumeRayIntegrator_Initialize, 1,
   (char*)"V.Initialize(vtkVolume, vtkDataArray)\nC++: virtual void Initialize(vtkVolume *volume,\n    vtkDataArray *scalars)\n\nSet up the integrator with the given properties and scalars.\n"},
  {(char*)"Integrate", PyvtkUnstructuredGridVolumeRayIntegrator_Integrate, 1,
   (char*)"V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: virtual void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4])\n\nGiven a set of intersections (defined by the three arrays),\ncompute the peicewise integration of the array in front to back\norder. /c intersectionLengths holds the lengths of each peicewise\nsegment. /c nearIntersections and /c farIntersections hold the\nscalar values at the front and back of each segment.  /c color\nshould contain the RGBA value of the volume in front of the\nsegments passed in, and the result will be placed back into /c\ncolor.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnstructuredGridVolumeRayIntegrator_Methods,
    "vtkUnstructuredGridVolumeRayIntegrator", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridVolumeRayIntegrator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridVolumeRayIntegrator_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridVolumeRayIntegrator - a superclass for volume ray\nintegration functions\n\n",
    "Superclass: vtkObject\n\n",
    "vtkUnstructuredGridVolumeRayIntegrator is a superclass for ray\nintegration functions that can be used within a\nvtkUnstructuredGridVolumeRayCastMapper.\n\nSee Also:\n\nvtkUnstructuredGridVolumeRayCastMapper\nvtkUnstructuredGridVolumeRayCastFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeRayIntegrator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridVolumeRayIntegrator", o) != 0)
    {
    Py_DECREF(o);
    }

}

