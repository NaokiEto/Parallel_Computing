// python wrapper for vtkPolyDataPointSampler
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
#include "vtkPolyDataPointSampler.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataPointSampler(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataPointSampler(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataPointSamplerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataPointSamplerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPolyDataPointSampler_Doc();


static PyObject *
PyvtkPolyDataPointSampler_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

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
      tempr = op->vtkPolyDataPointSampler::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

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
      tempr = op->vtkPolyDataPointSampler::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  vtkPolyDataPointSampler *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataPointSampler::NewInstance();
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
PyvtkPolyDataPointSampler_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataPointSampler *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataPointSampler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistance(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceMinValue();
      }
    else
      {
      tempr = op->vtkPolyDataPointSampler::GetDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkPolyDataPointSampler::GetDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance();
      }
    else
      {
      tempr = op->vtkPolyDataPointSampler::GetDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateVertexPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateVertexPoints();
      }
    else
      {
      tempr = op->vtkPolyDataPointSampler::GetGenerateVertexPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateVertexPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateVertexPoints(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetGenerateVertexPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVertexPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVertexPointsOn();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateVertexPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVertexPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVertexPointsOff();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateVertexPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateEdgePoints();
      }
    else
      {
      tempr = op->vtkPolyDataPointSampler::GetGenerateEdgePoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateEdgePoints(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetGenerateEdgePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateEdgePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgePointsOn();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateEdgePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateEdgePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgePointsOff();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateEdgePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateInteriorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateInteriorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateInteriorPoints();
      }
    else
      {
      tempr = op->vtkPolyDataPointSampler::GetGenerateInteriorPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateInteriorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateInteriorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateInteriorPoints(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetGenerateInteriorPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateInteriorPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInteriorPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateInteriorPointsOn();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateInteriorPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateInteriorPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInteriorPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateInteriorPointsOff();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateInteriorPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateVertices();
      }
    else
      {
      tempr = op->vtkPolyDataPointSampler::GetGenerateVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateVertices(temp0);
      }
    else
      {
      op->vtkPolyDataPointSampler::SetGenerateVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVerticesOn();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVerticesOff();
      }
    else
      {
      op->vtkPolyDataPointSampler::GenerateVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataPointSampler_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataPointSampler_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros for type information and printing.\n"},
  {(char*)"IsA", PyvtkPolyDataPointSampler_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkPolyDataPointSampler_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataPointSampler\nC++: vtkPolyDataPointSampler *NewInstance()\n\nStandard macros for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataPointSampler_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataPointSampler\nC++: vtkPolyDataPointSampler *SafeDownCast(vtkObject* o)\n\nStandard macros for type information and printing.\n"},
  {(char*)"SetDistance", PyvtkPolyDataPointSampler_SetDistance, 1,
   (char*)"V.SetDistance(float)\nC++: void SetDistance(double)\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {(char*)"GetDistanceMinValue", PyvtkPolyDataPointSampler_GetDistanceMinValue, 1,
   (char*)"V.GetDistanceMinValue() -> float\nC++: double GetDistanceMinValue()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {(char*)"GetDistanceMaxValue", PyvtkPolyDataPointSampler_GetDistanceMaxValue, 1,
   (char*)"V.GetDistanceMaxValue() -> float\nC++: double GetDistanceMaxValue()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {(char*)"GetDistance", PyvtkPolyDataPointSampler_GetDistance, 1,
   (char*)"V.GetDistance() -> float\nC++: double GetDistance()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {(char*)"GetGenerateVertexPoints", PyvtkPolyDataPointSampler_GetGenerateVertexPoints, 1,
   (char*)"V.GetGenerateVertexPoints() -> int\nC++: int GetGenerateVertexPoints()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {(char*)"SetGenerateVertexPoints", PyvtkPolyDataPointSampler_SetGenerateVertexPoints, 1,
   (char*)"V.SetGenerateVertexPoints(int)\nC++: void SetGenerateVertexPoints(int a)\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {(char*)"GenerateVertexPointsOn", PyvtkPolyDataPointSampler_GenerateVertexPointsOn, 1,
   (char*)"V.GenerateVertexPointsOn()\nC++: void GenerateVertexPointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {(char*)"GenerateVertexPointsOff", PyvtkPolyDataPointSampler_GenerateVertexPointsOff, 1,
   (char*)"V.GenerateVertexPointsOff()\nC++: void GenerateVertexPointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {(char*)"GetGenerateEdgePoints", PyvtkPolyDataPointSampler_GetGenerateEdgePoints, 1,
   (char*)"V.GetGenerateEdgePoints() -> int\nC++: int GetGenerateEdgePoints()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"SetGenerateEdgePoints", PyvtkPolyDataPointSampler_SetGenerateEdgePoints, 1,
   (char*)"V.SetGenerateEdgePoints(int)\nC++: void SetGenerateEdgePoints(int a)\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GenerateEdgePointsOn", PyvtkPolyDataPointSampler_GenerateEdgePointsOn, 1,
   (char*)"V.GenerateEdgePointsOn()\nC++: void GenerateEdgePointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GenerateEdgePointsOff", PyvtkPolyDataPointSampler_GenerateEdgePointsOff, 1,
   (char*)"V.GenerateEdgePointsOff()\nC++: void GenerateEdgePointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GetGenerateInteriorPoints", PyvtkPolyDataPointSampler_GetGenerateInteriorPoints, 1,
   (char*)"V.GetGenerateInteriorPoints() -> int\nC++: int GetGenerateInteriorPoints()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"SetGenerateInteriorPoints", PyvtkPolyDataPointSampler_SetGenerateInteriorPoints, 1,
   (char*)"V.SetGenerateInteriorPoints(int)\nC++: void SetGenerateInteriorPoints(int a)\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GenerateInteriorPointsOn", PyvtkPolyDataPointSampler_GenerateInteriorPointsOn, 1,
   (char*)"V.GenerateInteriorPointsOn()\nC++: void GenerateInteriorPointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GenerateInteriorPointsOff", PyvtkPolyDataPointSampler_GenerateInteriorPointsOff, 1,
   (char*)"V.GenerateInteriorPointsOff()\nC++: void GenerateInteriorPointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {(char*)"GetGenerateVertices", PyvtkPolyDataPointSampler_GetGenerateVertices, 1,
   (char*)"V.GetGenerateVertices() -> int\nC++: int GetGenerateVertices()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {(char*)"SetGenerateVertices", PyvtkPolyDataPointSampler_SetGenerateVertices, 1,
   (char*)"V.SetGenerateVertices(int)\nC++: void SetGenerateVertices(int a)\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {(char*)"GenerateVerticesOn", PyvtkPolyDataPointSampler_GenerateVerticesOn, 1,
   (char*)"V.GenerateVerticesOn()\nC++: void GenerateVerticesOn()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {(char*)"GenerateVerticesOff", PyvtkPolyDataPointSampler_GenerateVerticesOff, 1,
   (char*)"V.GenerateVerticesOff()\nC++: void GenerateVerticesOff()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataPointSampler_StaticNew()
{
  return vtkPolyDataPointSampler::New();
}

PyObject *PyVTKClass_vtkPolyDataPointSamplerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataPointSampler_StaticNew,
    PyvtkPolyDataPointSampler_Methods,
    "vtkPolyDataPointSampler", modulename,
    NULL, NULL,
    PyvtkPolyDataPointSampler_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyDataPointSampler_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataPointSampler - generate points from vtkPolyData\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPolyDataPointSampler generates points from input vtkPolyData. The\npoints are placed approximately a specified distance apart.\n\nThis filter functions as follows. First, it regurgitates all input\npoints, then samples all lines, plus edges associated with the input\npolygons and triangle strips to produce edge points. Finally, the\ninteriors of polygons and triangle strips are subsampled to produce\n",
    "points.  All of these functiona can be enabled or disabled\nseparately. Note that this algorithm only approximately generates\npoints the specified distance apart. Generally the point density is\nfiner than requested.\n\nCaveats:\n\nPoint generation can be useful in a variety of applications. For\nexample, generating seed points for glyphing or streamline\ngeneration. Another useful application is generati",
    "ng points for\nimplicit modeling. In many cases implicit models can be more\nefficiently generated from points than from polygons or other\nprimitives.\n\nSee Also:\n\nvtkImplicitModeller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataPointSampler(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataPointSamplerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataPointSampler", o) != 0)
    {
    Py_DECREF(o);
    }

}

