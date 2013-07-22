// python wrapper for vtkTessellatorFilter
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
#include "vtkTessellatorFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTessellatorFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTessellatorFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTessellatorFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTessellatorFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkTessellatorFilter_Doc();


static PyObject *
PyvtkTessellatorFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

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
      tempr = op->vtkTessellatorFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

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
      tempr = op->vtkTessellatorFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkTessellatorFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::NewInstance();
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
PyvtkTessellatorFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTessellatorFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTessellatorFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkStreamingTessellator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStreamingTessellator"))
    {
    if (ap.IsBound())
      {
      op->SetTessellator(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetTessellator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkStreamingTessellator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTessellator();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::GetTessellator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetSubdivider(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivider");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkDataSetEdgeSubdivisionCriterion *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetEdgeSubdivisionCriterion"))
    {
    if (ap.IsBound())
      {
      op->SetSubdivider(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetSubdivider(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetSubdivider(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivider");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkDataSetEdgeSubdivisionCriterion *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubdivider();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::GetSubdivider();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

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
      tempr = op->vtkTessellatorFilter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetOutputDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputDimension(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetOutputDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputDimensionMinValue();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::GetOutputDimensionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputDimensionMaxValue();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::GetOutputDimensionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputDimension();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::GetOutputDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetMaximumNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfSubdivisions();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::GetMaximumNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetChordError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChordError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChordError(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetChordError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetChordError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChordError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChordError();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::GetChordError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_ResetFieldCriteria(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldCriteria");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetFieldCriteria();
      }
    else
      {
      op->vtkTessellatorFilter::ResetFieldCriteria();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetFieldCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFieldCriterion(temp0, temp1);
      }
    else
      {
      op->vtkTessellatorFilter::SetFieldCriterion(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMergePoints();
      }
    else
      {
      tempr = op->vtkTessellatorFilter::GetMergePoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergePoints(temp0);
      }
    else
      {
      op->vtkTessellatorFilter::SetMergePoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergePointsOn();
      }
    else
      {
      op->vtkTessellatorFilter::MergePointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergePointsOff();
      }
    else
      {
      op->vtkTessellatorFilter::MergePointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTessellatorFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTessellatorFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTessellatorFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTessellatorFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTessellatorFilter\nC++: vtkTessellatorFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTessellatorFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTessellatorFilter\nC++: vtkTessellatorFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTessellator", PyvtkTessellatorFilter_SetTessellator, 1,
   (char*)"V.SetTessellator(vtkStreamingTessellator)\nC++: virtual void SetTessellator(vtkStreamingTessellator *)\n\n"},
  {(char*)"GetTessellator", PyvtkTessellatorFilter_GetTessellator, 1,
   (char*)"V.GetTessellator() -> vtkStreamingTessellator\nC++: vtkStreamingTessellator *GetTessellator()\n\n"},
  {(char*)"SetSubdivider", PyvtkTessellatorFilter_SetSubdivider, 1,
   (char*)"V.SetSubdivider(vtkDataSetEdgeSubdivisionCriterion)\nC++: virtual void SetSubdivider(\n    vtkDataSetEdgeSubdivisionCriterion *)\n\n"},
  {(char*)"GetSubdivider", PyvtkTessellatorFilter_GetSubdivider, 1,
   (char*)"V.GetSubdivider() -> vtkDataSetEdgeSubdivisionCriterion\nC++: vtkDataSetEdgeSubdivisionCriterion *GetSubdivider()\n\n"},
  {(char*)"GetMTime", PyvtkTessellatorFilter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\n"},
  {(char*)"SetOutputDimension", PyvtkTessellatorFilter_SetOutputDimension, 1,
   (char*)"V.SetOutputDimension(int)\nC++: void SetOutputDimension(int)\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {(char*)"GetOutputDimensionMinValue", PyvtkTessellatorFilter_GetOutputDimensionMinValue, 1,
   (char*)"V.GetOutputDimensionMinValue() -> int\nC++: int GetOutputDimensionMinValue()\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {(char*)"GetOutputDimensionMaxValue", PyvtkTessellatorFilter_GetOutputDimensionMaxValue, 1,
   (char*)"V.GetOutputDimensionMaxValue() -> int\nC++: int GetOutputDimensionMaxValue()\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {(char*)"GetOutputDimension", PyvtkTessellatorFilter_GetOutputDimension, 1,
   (char*)"V.GetOutputDimension() -> int\nC++: int GetOutputDimension()\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {(char*)"SetMaximumNumberOfSubdivisions", PyvtkTessellatorFilter_SetMaximumNumberOfSubdivisions, 1,
   (char*)"V.SetMaximumNumberOfSubdivisions(int)\nC++: virtual void SetMaximumNumberOfSubdivisions(\n    int num_subdiv_in)\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {(char*)"GetMaximumNumberOfSubdivisions", PyvtkTessellatorFilter_GetMaximumNumberOfSubdivisions, 1,
   (char*)"V.GetMaximumNumberOfSubdivisions() -> int\nC++: int GetMaximumNumberOfSubdivisions()\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {(char*)"SetChordError", PyvtkTessellatorFilter_SetChordError, 1,
   (char*)"V.SetChordError(float)\nC++: virtual void SetChordError(double ce)\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {(char*)"GetChordError", PyvtkTessellatorFilter_GetChordError, 1,
   (char*)"V.GetChordError() -> float\nC++: double GetChordError()\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {(char*)"ResetFieldCriteria", PyvtkTessellatorFilter_ResetFieldCriteria, 1,
   (char*)"V.ResetFieldCriteria()\nC++: virtual void ResetFieldCriteria()\n\nThese methods are for the ParaView client.\n"},
  {(char*)"SetFieldCriterion", PyvtkTessellatorFilter_SetFieldCriterion, 1,
   (char*)"V.SetFieldCriterion(int, float)\nC++: virtual void SetFieldCriterion(int field, double chord)\n\nThese methods are for the ParaView client.\n"},
  {(char*)"GetMergePoints", PyvtkTessellatorFilter_GetMergePoints, 1,
   (char*)"V.GetMergePoints() -> int\nC++: int GetMergePoints()\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {(char*)"SetMergePoints", PyvtkTessellatorFilter_SetMergePoints, 1,
   (char*)"V.SetMergePoints(int)\nC++: void SetMergePoints(int a)\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {(char*)"MergePointsOn", PyvtkTessellatorFilter_MergePointsOn, 1,
   (char*)"V.MergePointsOn()\nC++: void MergePointsOn()\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {(char*)"MergePointsOff", PyvtkTessellatorFilter_MergePointsOff, 1,
   (char*)"V.MergePointsOff()\nC++: void MergePointsOff()\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTessellatorFilter_StaticNew()
{
  return vtkTessellatorFilter::New();
}

PyObject *PyVTKClass_vtkTessellatorFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTessellatorFilter_StaticNew,
    PyvtkTessellatorFilter_Methods,
    "vtkTessellatorFilter", modulename,
    NULL, NULL,
    PyvtkTessellatorFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTessellatorFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTessellatorFilter - approximate nonlinear FEM elements with\nsimplices\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "This class approximates nonlinear FEM elements with linear simplices.\n\nWarning: This class is temporary and will go away at some point after\nParaView 1.4.0.\n\nThis filter rifles through all the cells in an input vtkDataSet. It\ntesselates each cell and uses the vtkStreamingTessellator and\nvtkDataSetEdgeSubdivisionCriterion classes to generate simplices that\napproximate the nonlinear mesh using some ",
    "approximation metric\n(encoded in the particular\nvtkDataSetEdgeSubdivisionCriterion::EvaluateEdge implementation). The\nsimplices are placed into the filter's output vtkDataSet object by\nthe callback routines AddATetrahedron, AddATriangle, and AddALine,\nwhich are registered with the triangulator.\n\nThe output mesh will have geometry and any fields specified as\nattributes in the input mesh's point dat",
    "a.  The attribute's copy\nflags are honored, except for normals.\n\nInternals:\n\nThe filter's main member function is RequestData(). This function\nfirst calls SetupOutput() which allocates arrays and some temporary\nvariables for the primitive callbacks (OutputTriangle and OutputLine\nwhich are called by AddATriangle and AddALine, respectively).  Each\ncell is given an initial tesselation, which results ",
    "in one or more\ncalls to OutputTetrahedron, OutputTriangle or OutputLine to add\nelements to the OutputMesh. Finally, Teardown() is called to free the\nfilter's working space.\n\nSee Also:\n\nvtkDataSetToUnstructuredGridFilter vtkDataSet vtkStreamingTessellator\nvtkDataSetEdgeSubdivisionCriterion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTessellatorFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTessellatorFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTessellatorFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

