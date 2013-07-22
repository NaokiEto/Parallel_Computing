// python wrapper for vtkUnstructuredGridHomogeneousRayIntegrator
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
#include "vtkUnstructuredGridHomogeneousRayIntegrator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridHomogeneousRayIntegrator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridHomogeneousRayIntegrator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridHomogeneousRayIntegratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridHomogeneousRayIntegratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
#endif

static const char **PyvtkUnstructuredGridHomogeneousRayIntegrator_Doc();


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

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
      tempr = op->vtkUnstructuredGridHomogeneousRayIntegrator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

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
      tempr = op->vtkUnstructuredGridHomogeneousRayIntegrator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  vtkUnstructuredGridHomogeneousRayIntegrator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridHomogeneousRayIntegrator::NewInstance();
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
PyvtkUnstructuredGridHomogeneousRayIntegrator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridHomogeneousRayIntegrator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridHomogeneousRayIntegrator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  vtkVolume *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGridHomogeneousRayIntegrator::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  vtkDoubleArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  float temp3[4];
  float save3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->Integrate(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkUnstructuredGridHomogeneousRayIntegrator::Integrate(temp0, temp1, temp2, temp3);
      }

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


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_SetTransferFunctionTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunctionTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransferFunctionTableSize(temp0);
      }
    else
      {
      op->vtkUnstructuredGridHomogeneousRayIntegrator::SetTransferFunctionTableSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridHomogeneousRayIntegrator_GetTransferFunctionTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunctionTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridHomogeneousRayIntegrator *op = static_cast<vtkUnstructuredGridHomogeneousRayIntegrator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransferFunctionTableSize();
      }
    else
      {
      tempr = op->vtkUnstructuredGridHomogeneousRayIntegrator::GetTransferFunctionTableSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridHomogeneousRayIntegrator_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridHomogeneousRayIntegrator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridHomogeneousRayIntegrator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridHomogeneousRayIntegrator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridHomogeneousRayIntegrator\nC++: vtkUnstructuredGridHomogeneousRayIntegrator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridHomogeneousRayIntegrator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkUnstructuredGridHomogeneousRayIntegrator\nC++: vtkUnstructuredGridHomogeneousRayIntegrator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridHomogeneousRayIntegrator_Initialize, 1,
   (char*)"V.Initialize(vtkVolume, vtkDataArray)\nC++: virtual void Initialize(vtkVolume *volume,\n    vtkDataArray *scalars)\n\n"},
  {(char*)"Integrate", PyvtkUnstructuredGridHomogeneousRayIntegrator_Integrate, 1,
   (char*)"V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: virtual void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4])\n\n"},
  {(char*)"SetTransferFunctionTableSize", PyvtkUnstructuredGridHomogeneousRayIntegrator_SetTransferFunctionTableSize, 1,
   (char*)"V.SetTransferFunctionTableSize(int)\nC++: void SetTransferFunctionTableSize(int a)\n\nFor quick lookup, the transfer function is sampled into a table.\nThis parameter sets how big of a table to use.  By default, 1024\nentries are used.\n"},
  {(char*)"GetTransferFunctionTableSize", PyvtkUnstructuredGridHomogeneousRayIntegrator_GetTransferFunctionTableSize, 1,
   (char*)"V.GetTransferFunctionTableSize() -> int\nC++: int GetTransferFunctionTableSize()\n\nFor quick lookup, the transfer function is sampled into a table.\nThis parameter sets how big of a table to use.  By default, 1024\nentries are used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridHomogeneousRayIntegrator_StaticNew()
{
  return vtkUnstructuredGridHomogeneousRayIntegrator::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridHomogeneousRayIntegratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridHomogeneousRayIntegrator_StaticNew,
    PyvtkUnstructuredGridHomogeneousRayIntegrator_Methods,
    "vtkUnstructuredGridHomogeneousRayIntegrator", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridHomogeneousRayIntegrator_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridHomogeneousRayIntegrator_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridHomogeneousRayIntegrator - performs peicewise\nconstant ray integration.\n\n",
    "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n",
    "vtkUnstructuredGridHomogeneousRayIntegrator performs homogeneous ray\nintegration.  This is a good method to use when volume rendering\nscalars that are defined on cells.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridHomogeneousRayIntegrator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridHomogeneousRayIntegratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridHomogeneousRayIntegrator", o) != 0)
    {
    Py_DECREF(o);
    }

}

