// python wrapper for vtkUnstructuredGridPreIntegration
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
#include "vtkUnstructuredGridPreIntegration.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridPreIntegration(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridPreIntegration(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridPreIntegrationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridPreIntegrationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew
#endif

static const char **PyvtkUnstructuredGridPreIntegration_Doc();


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

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
      tempr = op->vtkUnstructuredGridPreIntegration::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

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
      tempr = op->vtkUnstructuredGridPreIntegration::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkUnstructuredGridPreIntegration *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridPreIntegration::NewInstance();
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
PyvtkUnstructuredGridPreIntegration_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridPreIntegration *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridPreIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

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
      op->vtkUnstructuredGridPreIntegration::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_Integrate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Integrate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

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
      op->vtkUnstructuredGridPreIntegration::Integrate(temp0, temp1, temp2, temp3);
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
PyvtkUnstructuredGridPreIntegration_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrator();
      }
    else
      {
      tempr = op->vtkUnstructuredGridPreIntegration::GetIntegrator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayIntegrator"))
    {
    if (ap.IsBound())
      {
      op->SetIntegrator(temp0);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::SetIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrationTableScalarResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTableScalarResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationTableScalarResolution(temp0);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::SetIntegrationTableScalarResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationTableScalarResolution();
      }
    else
      {
      tempr = op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIntegrationTableLengthResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTableLengthResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntegrationTableLengthResolution(temp0);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::SetIntegrationTableLengthResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableLengthResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationTableLengthResolution();
      }
    else
      {
      tempr = op->vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationTableScalarShift(temp0);
      }
    else
      {
      tempr = op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableScalarScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0 = 0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationTableScalarScale(temp0);
      }
    else
      {
      tempr = op->vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTableLengthScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntegrationTableLengthScale();
      }
    else
      {
      tempr = op->vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_GetIncrementalPreIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrementalPreIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIncrementalPreIntegration();
      }
    else
      {
      tempr = op->vtkUnstructuredGridPreIntegration::GetIncrementalPreIntegration();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_SetIncrementalPreIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncrementalPreIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncrementalPreIntegration(temp0);
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::SetIncrementalPreIntegration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementalPreIntegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncrementalPreIntegrationOn();
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementalPreIntegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridPreIntegration *op = static_cast<vtkUnstructuredGridPreIntegration *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncrementalPreIntegrationOff();
      }
    else
      {
      op->vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridPreIntegration_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridPreIntegration_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridPreIntegration_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridPreIntegration_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridPreIntegration\nC++: vtkUnstructuredGridPreIntegration *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridPreIntegration_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGridPreIntegration\nC++: vtkUnstructuredGridPreIntegration *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridPreIntegration_Initialize, 1,
   (char*)"V.Initialize(vtkVolume, vtkDataArray)\nC++: virtual void Initialize(vtkVolume *volume,\n    vtkDataArray *scalars)\n\n"},
  {(char*)"Integrate", PyvtkUnstructuredGridPreIntegration_Integrate, 1,
   (char*)"V.Integrate(vtkDoubleArray, vtkDataArray, vtkDataArray, [float,\n    float, float, float])\nC++: virtual void Integrate(vtkDoubleArray *intersectionLengths,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections, float color[4])\n\n"},
  {(char*)"GetIntegrator", PyvtkUnstructuredGridPreIntegration_GetIntegrator, 1,
   (char*)"V.GetIntegrator() -> vtkUnstructuredGridVolumeRayIntegrator\nC++: vtkUnstructuredGridVolumeRayIntegrator *GetIntegrator()\n\nThe class used to fill the pre integration table.  By default, a\nvtkUnstructuredGridPartialPreIntegration is built.\n"},
  {(char*)"SetIntegrator", PyvtkUnstructuredGridPreIntegration_SetIntegrator, 1,
   (char*)"V.SetIntegrator(vtkUnstructuredGridVolumeRayIntegrator)\nC++: virtual void SetIntegrator(\n    vtkUnstructuredGridVolumeRayIntegrator *)\n\nThe class used to fill the pre integration table.  By default, a\nvtkUnstructuredGridPartialPreIntegration is built.\n"},
  {(char*)"SetIntegrationTableScalarResolution", PyvtkUnstructuredGridPreIntegration_SetIntegrationTableScalarResolution, 1,
   (char*)"V.SetIntegrationTableScalarResolution(int)\nC++: void SetIntegrationTableScalarResolution(int a)\n\nSet/Get the size of the integration table built.\n"},
  {(char*)"GetIntegrationTableScalarResolution", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarResolution, 1,
   (char*)"V.GetIntegrationTableScalarResolution() -> int\nC++: int GetIntegrationTableScalarResolution()\n\nSet/Get the size of the integration table built.\n"},
  {(char*)"SetIntegrationTableLengthResolution", PyvtkUnstructuredGridPreIntegration_SetIntegrationTableLengthResolution, 1,
   (char*)"V.SetIntegrationTableLengthResolution(int)\nC++: void SetIntegrationTableLengthResolution(int a)\n\nSet/Get the size of the integration table built.\n"},
  {(char*)"GetIntegrationTableLengthResolution", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthResolution, 1,
   (char*)"V.GetIntegrationTableLengthResolution() -> int\nC++: int GetIntegrationTableLengthResolution()\n\nSet/Get the size of the integration table built.\n"},
  {(char*)"GetIntegrationTableScalarShift", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarShift, 1,
   (char*)"V.GetIntegrationTableScalarShift(int) -> float\nC++: virtual double GetIntegrationTableScalarShift(\n    int component=0)\n\nGet how an integration table is indexed.\n"},
  {(char*)"GetIntegrationTableScalarScale", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableScalarScale, 1,
   (char*)"V.GetIntegrationTableScalarScale(int) -> float\nC++: virtual double GetIntegrationTableScalarScale(\n    int component=0)\n\nGet how an integration table is indexed.\n"},
  {(char*)"GetIntegrationTableLengthScale", PyvtkUnstructuredGridPreIntegration_GetIntegrationTableLengthScale, 1,
   (char*)"V.GetIntegrationTableLengthScale() -> float\nC++: virtual double GetIntegrationTableLengthScale()\n\nGet how an integration table is indexed.\n"},
  {(char*)"GetIncrementalPreIntegration", PyvtkUnstructuredGridPreIntegration_GetIncrementalPreIntegration, 1,
   (char*)"V.GetIncrementalPreIntegration() -> int\nC++: int GetIncrementalPreIntegration()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {(char*)"SetIncrementalPreIntegration", PyvtkUnstructuredGridPreIntegration_SetIncrementalPreIntegration, 1,
   (char*)"V.SetIncrementalPreIntegration(int)\nC++: void SetIncrementalPreIntegration(int a)\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {(char*)"IncrementalPreIntegrationOn", PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOn, 1,
   (char*)"V.IncrementalPreIntegrationOn()\nC++: void IncrementalPreIntegrationOn()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {(char*)"IncrementalPreIntegrationOff", PyvtkUnstructuredGridPreIntegration_IncrementalPreIntegrationOff, 1,
   (char*)"V.IncrementalPreIntegrationOff()\nC++: void IncrementalPreIntegrationOff()\n\nGet/set whether to use incremental pre-integration (by default\nit's on).  Incremental pre-integration is much faster but can\nintroduce error due to numerical imprecision.  Under most\ncircumstances, the error is not noticeable.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridPreIntegration_StaticNew()
{
  return vtkUnstructuredGridPreIntegration::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridPreIntegrationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridPreIntegration_StaticNew,
    PyvtkUnstructuredGridPreIntegration_Methods,
    "vtkUnstructuredGridPreIntegration", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridPreIntegration_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeRayIntegratorNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridPreIntegration_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridPreIntegration - performs ray integration with\npre-integration tables.\n\n",
    "Superclass: vtkUnstructuredGridVolumeRayIntegrator\n\n",
    "vtkUnstructuredGridPreIntegration performs ray integration by looking\ninto a precomputed table.  The result should be equivalent to that\ncomputed by vtkUnstructuredGridLinearRayIntegrator and\nvtkUnstructuredGridPartialPreIntegration, but faster than either one.\nThe pre-integration algorithm was first introduced by Roettger,\nKraus, and Ertl in \"Hardware-Accelerated Volume And Isosurface\nRendering B",
    "ased On Cell-Projection.\"\n\nDue to table size limitations, a table can only be indexed by\nindependent scalars.  Thus, dependent scalars are not supported.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridPreIntegration(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridPreIntegrationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridPreIntegration", o) != 0)
    {
    Py_DECREF(o);
    }

}

