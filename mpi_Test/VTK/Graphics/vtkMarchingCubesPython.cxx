// python wrapper for vtkMarchingCubes
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
#include "vtkMarchingCubes.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMarchingCubes(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMarchingCubes(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMarchingCubesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMarchingCubesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMarchingCubes_Doc();


static PyObject *
PyvtkMarchingCubes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

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
      tempr = op->vtkMarchingCubes::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

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
      tempr = op->vtkMarchingCubes::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  vtkMarchingCubes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMarchingCubes::NewInstance();
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
PyvtkMarchingCubes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMarchingCubes *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMarchingCubes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkMarchingCubes::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue(temp0);
      }
    else
      {
      tempr = op->vtkMarchingCubes::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfContours(temp0);
      }
    else
      {
      op->vtkMarchingCubes::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfContours();
      }
    else
      {
      tempr = op->vtkMarchingCubes::GetNumberOfContours();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1);
      }
    else
      {
      op->vtkMarchingCubes::GenerateValues(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMarchingCubes_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMarchingCubes::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMarchingCubes_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMarchingCubes_GenerateValues_s1(self, args);
    case 3:
      return PyvtkMarchingCubes_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkMarchingCubes_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

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
      tempr = op->vtkMarchingCubes::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtkMarchingCubes::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeNormals();
      }
    else
      {
      tempr = op->vtkMarchingCubes::GetComputeNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOn();
      }
    else
      {
      op->vtkMarchingCubes::ComputeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOff();
      }
    else
      {
      op->vtkMarchingCubes::ComputeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeGradients(temp0);
      }
    else
      {
      op->vtkMarchingCubes::SetComputeGradients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeGradients();
      }
    else
      {
      tempr = op->vtkMarchingCubes::GetComputeGradients();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientsOn();
      }
    else
      {
      op->vtkMarchingCubes::ComputeGradientsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientsOff();
      }
    else
      {
      op->vtkMarchingCubes::ComputeGradientsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeScalars(temp0);
      }
    else
      {
      op->vtkMarchingCubes::SetComputeScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeScalars();
      }
    else
      {
      tempr = op->vtkMarchingCubes::GetComputeScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOn();
      }
    else
      {
      op->vtkMarchingCubes::ComputeScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOff();
      }
    else
      {
      op->vtkMarchingCubes::ComputeScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkMarchingCubes::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkMarchingCubes::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarchingCubes_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarchingCubes *op = static_cast<vtkMarchingCubes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkMarchingCubes::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMarchingCubes_Methods[] = {
  {(char*)"GetClassName", PyvtkMarchingCubes_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMarchingCubes_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMarchingCubes_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMarchingCubes\nC++: vtkMarchingCubes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMarchingCubes_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMarchingCubes\nC++: vtkMarchingCubes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkMarchingCubes_SetValue, 1,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\n"},
  {(char*)"GetValue", PyvtkMarchingCubes_GetValue, 1,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\n"},
  {(char*)"SetNumberOfContours", PyvtkMarchingCubes_SetNumberOfContours, 1,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\n"},
  {(char*)"GetNumberOfContours", PyvtkMarchingCubes_GetNumberOfContours, 1,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\n"},
  {(char*)"GenerateValues", PyvtkMarchingCubes_GenerateValues, 1,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\n"},
  {(char*)"GetMTime", PyvtkMarchingCubes_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\n"},
  {(char*)"SetComputeNormals", PyvtkMarchingCubes_SetComputeNormals, 1,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int a)\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"GetComputeNormals", PyvtkMarchingCubes_GetComputeNormals, 1,
   (char*)"V.GetComputeNormals() -> int\nC++: int GetComputeNormals()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeNormalsOn", PyvtkMarchingCubes_ComputeNormalsOn, 1,
   (char*)"V.ComputeNormalsOn()\nC++: void ComputeNormalsOn()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeNormalsOff", PyvtkMarchingCubes_ComputeNormalsOff, 1,
   (char*)"V.ComputeNormalsOff()\nC++: void ComputeNormalsOff()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"SetComputeGradients", PyvtkMarchingCubes_SetComputeGradients, 1,
   (char*)"V.SetComputeGradients(int)\nC++: void SetComputeGradients(int a)\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"GetComputeGradients", PyvtkMarchingCubes_GetComputeGradients, 1,
   (char*)"V.GetComputeGradients() -> int\nC++: int GetComputeGradients()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeGradientsOn", PyvtkMarchingCubes_ComputeGradientsOn, 1,
   (char*)"V.ComputeGradientsOn()\nC++: void ComputeGradientsOn()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeGradientsOff", PyvtkMarchingCubes_ComputeGradientsOff, 1,
   (char*)"V.ComputeGradientsOff()\nC++: void ComputeGradientsOff()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"SetComputeScalars", PyvtkMarchingCubes_SetComputeScalars, 1,
   (char*)"V.SetComputeScalars(int)\nC++: void SetComputeScalars(int a)\n\nSet/Get the computation of scalars.\n"},
  {(char*)"GetComputeScalars", PyvtkMarchingCubes_GetComputeScalars, 1,
   (char*)"V.GetComputeScalars() -> int\nC++: int GetComputeScalars()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"ComputeScalarsOn", PyvtkMarchingCubes_ComputeScalarsOn, 1,
   (char*)"V.ComputeScalarsOn()\nC++: void ComputeScalarsOn()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"ComputeScalarsOff", PyvtkMarchingCubes_ComputeScalarsOff, 1,
   (char*)"V.ComputeScalarsOff()\nC++: void ComputeScalarsOff()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"SetLocator", PyvtkMarchingCubes_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nOveride the default locator.  Useful for changing the number of\nbins for performance or specifying a more aggressive locator.\n"},
  {(char*)"GetLocator", PyvtkMarchingCubes_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nOveride the default locator.  Useful for changing the number of\nbins for performance or specifying a more aggressive locator.\n"},
  {(char*)"CreateDefaultLocator", PyvtkMarchingCubes_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMarchingCubes_StaticNew()
{
  return vtkMarchingCubes::New();
}

PyObject *PyVTKClass_vtkMarchingCubesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMarchingCubes_StaticNew,
    PyvtkMarchingCubes_Methods,
    "vtkMarchingCubes", modulename,
    NULL, NULL,
    PyvtkMarchingCubes_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMarchingCubes_Doc()
{
  static const char *docstring[] = {
    "vtkMarchingCubes - generate isosurface(s) from volume\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMarchingCubes is a filter that takes as input a volume (e.g., 3D\nstructured point set) and generates on output one or more\nisosurfaces. One or more contour values must be specified to generate\nthe isosurfaces. Alternatively, you can specify a min/max scalar\nrange and the number of contours to generate a series of evenly\nspaced contour values.\n\nCaveats:\n\nThis filter is specialized to volumes. If",
    " you are interested in\ncontouring other types of data, use the general vtkContourFilter. If\nyou want to contour an image (i.e., a volume slice), use\nvtkMarchingSquares.\n\nSee Also:\n\nvtkContourFilter vtkSliceCubes vtkMarchingSquares vtkDividingCubes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMarchingCubes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMarchingCubesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMarchingCubes", o) != 0)
    {
    Py_DECREF(o);
    }

}

