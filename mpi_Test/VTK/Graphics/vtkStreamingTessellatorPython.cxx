// python wrapper for vtkStreamingTessellator
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
#include "vtkStreamingTessellator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStreamingTessellator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStreamingTessellator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStreamingTessellatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStreamingTessellatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStreamingTessellator_Doc();


static PyObject *
PyvtkStreamingTessellator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

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
      tempr = op->vtkStreamingTessellator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

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
      tempr = op->vtkStreamingTessellator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  vtkStreamingTessellator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStreamingTessellator::NewInstance();
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
PyvtkStreamingTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStreamingTessellator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStreamingTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrivateData(temp0);
      }
    else
      {
      op->vtkStreamingTessellator::SetPrivateData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPrivateData();
      }
    else
      {
      tempr = op->vtkStreamingTessellator::GetPrivateData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetConstPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstPrivateData(temp0);
      }
    else
      {
      op->vtkStreamingTessellator::SetConstPrivateData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetConstPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  const void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConstPrivateData();
      }
    else
      {
      tempr = op->vtkStreamingTessellator::GetConstPrivateData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetSubdivisionAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivisionAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  vtkEdgeSubdivisionCriterion *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEdgeSubdivisionCriterion"))
    {
    if (ap.IsBound())
      {
      op->SetSubdivisionAlgorithm(temp0);
      }
    else
      {
      op->vtkStreamingTessellator::SetSubdivisionAlgorithm(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetSubdivisionAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivisionAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  vtkEdgeSubdivisionCriterion *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubdivisionAlgorithm();
      }
    else
      {
      tempr = op->vtkStreamingTessellator::GetSubdivisionAlgorithm();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetEmbeddingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmbeddingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEmbeddingDimension(temp0, temp1);
      }
    else
      {
      op->vtkStreamingTessellator::SetEmbeddingDimension(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetEmbeddingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmbeddingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEmbeddingDimension(temp0);
      }
    else
      {
      tempr = op->vtkStreamingTessellator::GetEmbeddingDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetFieldSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFieldSize(temp0, temp1);
      }
    else
      {
      op->vtkStreamingTessellator::SetFieldSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetFieldSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldSize(temp0);
      }
    else
      {
      tempr = op->vtkStreamingTessellator::GetFieldSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

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
      op->vtkStreamingTessellator::SetMaximumNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

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
      tempr = op->vtkStreamingTessellator::GetMaximumNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_ResetCounts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCounts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCounts();
      }
    else
      {
      op->vtkStreamingTessellator::ResetCounts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetCaseCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCaseCount(temp0);
      }
    else
      {
      tempr = op->vtkStreamingTessellator::GetCaseCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetSubcaseCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubcaseCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubcaseCount(temp0, temp1);
      }
    else
      {
      tempr = op->vtkStreamingTessellator::GetSubcaseCount(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingTessellator_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamingTessellator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamingTessellator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamingTessellator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStreamingTessellator\nC++: vtkStreamingTessellator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamingTessellator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamingTessellator\nC++: vtkStreamingTessellator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPrivateData", PyvtkStreamingTessellator_SetPrivateData, 1,
   (char*)"V.SetPrivateData()\nC++: virtual void SetPrivateData(void *Private)\n\nGet/Set a void pointer passed to the triangle and edge output\nfunctions.\n"},
  {(char*)"GetPrivateData", PyvtkStreamingTessellator_GetPrivateData, 1,
   (char*)"V.GetPrivateData() ->\nC++: virtual void *GetPrivateData()\n\nGet/Set a void pointer passed to the triangle and edge output\nfunctions.\n"},
  {(char*)"SetConstPrivateData", PyvtkStreamingTessellator_SetConstPrivateData, 1,
   (char*)"V.SetConstPrivateData()\nC++: virtual void SetConstPrivateData(const void *ConstPrivate)\n\nGet/Set a constant void pointer passed to the simplex output\nfunctions.\n"},
  {(char*)"GetConstPrivateData", PyvtkStreamingTessellator_GetConstPrivateData, 1,
   (char*)"V.GetConstPrivateData() ->\nC++: virtual const void *GetConstPrivateData()\n\nGet/Set a constant void pointer passed to the simplex output\nfunctions.\n"},
  {(char*)"SetSubdivisionAlgorithm", PyvtkStreamingTessellator_SetSubdivisionAlgorithm, 1,
   (char*)"V.SetSubdivisionAlgorithm(vtkEdgeSubdivisionCriterion)\nC++: virtual void SetSubdivisionAlgorithm(\n    vtkEdgeSubdivisionCriterion *)\n\nGet/Set the algorithm used to determine whether an edge should be\nsubdivided or left as-is. This is used once for each call to\nAdaptivelySample1Facet (which is recursive and will call itself\nresulting in additional edges to be checked) or three times for\neach call to AdaptivelySample2Facet (also recursive).\n"},
  {(char*)"GetSubdivisionAlgorithm", PyvtkStreamingTessellator_GetSubdivisionAlgorithm, 1,
   (char*)"V.GetSubdivisionAlgorithm() -> vtkEdgeSubdivisionCriterion\nC++: virtual vtkEdgeSubdivisionCriterion *GetSubdivisionAlgorithm(\n    )\n\nGet/Set the algorithm used to determine whether an edge should be\nsubdivided or left as-is. This is used once for each call to\nAdaptivelySample1Facet (which is recursive and will call itself\nresulting in additional edges to be checked) or three times for\neach call to AdaptivelySample2Facet (also recursive).\n"},
  {(char*)"SetEmbeddingDimension", PyvtkStreamingTessellator_SetEmbeddingDimension, 1,
   (char*)"V.SetEmbeddingDimension(int, int)\nC++: virtual void SetEmbeddingDimension(int k, int d)\n\nGet/Set the number of parameter-space coordinates associated with\neach input and output point. The default is k for k -facets. You\nmay specify a different dimension, d, for each type of k -facet\nto be processed. For example, SetEmbeddingDimension( 2, 3 ) would\nassociate r, s, andt coordinates with each input and output point\ngenerated by AdaptivelySample2Facet but does not say anything\nabout input or output points generated byAdaptivelySample1Facet.\nCall SetEmbeddingDimension( -1, d ) to specify the same dimension\nfor all possible k values.d may not exceed 8, as that would be\nplain silly.\n"},
  {(char*)"GetEmbeddingDimension", PyvtkStreamingTessellator_GetEmbeddingDimension, 1,
   (char*)"V.GetEmbeddingDimension(int) -> int\nC++: int GetEmbeddingDimension(int k)\n\nGet/Set the number of parameter-space coordinates associated with\neach input and output point. The default is k for k -facets. You\nmay specify a different dimension, d, for each type of k -facet\nto be processed. For example, SetEmbeddingDimension( 2, 3 ) would\nassociate r, s, andt coordinates with each input and output point\ngenerated by AdaptivelySample2Facet but does not say anything\nabout input or output points generated byAdaptivelySample1Facet.\nCall SetEmbeddingDimension( -1, d ) to specify the same dimension\nfor all possible k values.d may not exceed 8, as that would be\nplain silly.\n"},
  {(char*)"SetFieldSize", PyvtkStreamingTessellator_SetFieldSize, 1,
   (char*)"V.SetFieldSize(int, int)\nC++: virtual void SetFieldSize(int k, int s)\n\nGet/Set the number of field value coordinates associated with\neach input and output point. The default is 0; no field values\nare interpolated. You may specify a different size, s, for each\ntype of k -facet to be processed. For example, SetFieldSize( 2, 3\n) would associate 3 field value coordinates with each input and\noutput point of an AdaptivelySample2Facet call, but does not say\nanything about input or output points of AdaptivelySample1Facet.\nCall SetFieldSize( -1, s ) to specify the same dimension for all\npossible k values.s may not exceed\nvtkStreamingTessellator::MaxFieldSize. This is a compile-time\nconstant that defaults to 18, which is large enough for a scalar,\nvector, tensor, normal, and texture coordinate to be included at\neach point.\n\nNormally, you will not call SetFieldSize() directly; instead,\nsubclasses of vtkEdgeSubdivisionCriterion, such as\nvtkShoeMeshSubdivisionAlgorithm, will call it for you.\n\nIn any event, setting FieldSize to a non-zero value means you\nmust pass field values to the AdaptivelySamplekFacet routines;\nFor example,\n    vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n    t->SetFieldSize( 1, 3 );\n    t->SetEmbeddingDimension( 1, 1 ); // not really required, this is the default\n    double p0[3+1+3] = { x0, y0, z0, r0, fx0, fy0, fz0 };\n    double p1[3+1+3] = { x1, y1, z1, r1, fx1, fy1, fz1 };\n    t->AdaptivelySample1Facet( p0, p1 );\n  This would adaptively sample an curve (1-facet) with geometry\nand a vector field at every output point on the curve.\n"},
  {(char*)"GetFieldSize", PyvtkStreamingTessellator_GetFieldSize, 1,
   (char*)"V.GetFieldSize(int) -> int\nC++: int GetFieldSize(int k)\n\nGet/Set the number of field value coordinates associated with\neach input and output point. The default is 0; no field values\nare interpolated. You may specify a different size, s, for each\ntype of k -facet to be processed. For example, SetFieldSize( 2, 3\n) would associate 3 field value coordinates with each input and\noutput point of an AdaptivelySample2Facet call, but does not say\nanything about input or output points of AdaptivelySample1Facet.\nCall SetFieldSize( -1, s ) to specify the same dimension for all\npossible k values.s may not exceed\nvtkStreamingTessellator::MaxFieldSize. This is a compile-time\nconstant that defaults to 18, which is large enough for a scalar,\nvector, tensor, normal, and texture coordinate to be included at\neach point.\n\nNormally, you will not call SetFieldSize() directly; instead,\nsubclasses of vtkEdgeSubdivisionCriterion, such as\nvtkShoeMeshSubdivisionAlgorithm, will call it for you.\n\nIn any event, setting FieldSize to a non-zero value means you\nmust pass field values to the AdaptivelySamplekFacet routines;\nFor example,\n    vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n    t->SetFieldSize( 1, 3 );\n    t->SetEmbeddingDimension( 1, 1 ); // not really required, this is the default\n    double p0[3+1+3] = { x0, y0, z0, r0, fx0, fy0, fz0 };\n    double p1[3+1+3] = { x1, y1, z1, r1, fx1, fy1, fz1 };\n    t->AdaptivelySample1Facet( p0, p1 );\n  This would adaptively sample an curve (1-facet) with geometry\nand a vector field at every output point on the curve.\n"},
  {(char*)"SetMaximumNumberOfSubdivisions", PyvtkStreamingTessellator_SetMaximumNumberOfSubdivisions, 1,
   (char*)"V.SetMaximumNumberOfSubdivisions(int)\nC++: virtual void SetMaximumNumberOfSubdivisions(\n    int num_subdiv_in)\n\nGet/Set the maximum number of subdivisions that may occur.\n"},
  {(char*)"GetMaximumNumberOfSubdivisions", PyvtkStreamingTessellator_GetMaximumNumberOfSubdivisions, 1,
   (char*)"V.GetMaximumNumberOfSubdivisions() -> int\nC++: int GetMaximumNumberOfSubdivisions()\n\nGet/Set the maximum number of subdivisions that may occur.\n"},
  {(char*)"ResetCounts", PyvtkStreamingTessellator_ResetCounts, 1,
   (char*)"V.ResetCounts()\nC++: void ResetCounts()\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\nThese functions have no effect (and return 0) when\nPARAVIEW_DEBUG_TESSELLATOR has not been defined. By default,\nPARAVIEW_DEBUG_TESSELLATOR is not defined, and your code will be\nfast and efficient. Really!\n"},
  {(char*)"GetCaseCount", PyvtkStreamingTessellator_GetCaseCount, 1,
   (char*)"V.GetCaseCount(int) -> int\nC++: vtkIdType GetCaseCount(int c)\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\nThese functions have no effect (and return 0) when\nPARAVIEW_DEBUG_TESSELLATOR has not been defined. By default,\nPARAVIEW_DEBUG_TESSELLATOR is not defined, and your code will be\nfast and efficient. Really!\n"},
  {(char*)"GetSubcaseCount", PyvtkStreamingTessellator_GetSubcaseCount, 1,
   (char*)"V.GetSubcaseCount(int, int) -> int\nC++: vtkIdType GetSubcaseCount(int casenum, int sub)\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\nThese functions have no effect (and return 0) when\nPARAVIEW_DEBUG_TESSELLATOR has not been defined. By default,\nPARAVIEW_DEBUG_TESSELLATOR is not defined, and your code will be\nfast and efficient. Really!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamingTessellator_StaticNew()
{
  return vtkStreamingTessellator::New();
}

PyObject *PyVTKClass_vtkStreamingTessellatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamingTessellator_StaticNew,
    PyvtkStreamingTessellator_Methods,
    "vtkStreamingTessellator", modulename,
    NULL, NULL,
    PyvtkStreamingTessellator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(18);
    if (o && PyDict_SetItemString(d, (char *)"MaxFieldSize", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkStreamingTessellator_Doc()
{
  static const char *docstring[] = {
    "vtkStreamingTessellator - An algorithm that refines an initial\nsimplicial tessellation using edge subdivision\n\n",
    "Superclass: vtkObject\n\n",
    "This class is a simple algorithm that takes a single starting simplex\n-- a tetrahedron, triangle, or line segment -- and calls a function\nyou pass it with (possibly many times) tetrahedra, triangles, or\nlines adaptively sampled from the one you specified. It uses an\nalgorithm you specify to control the level of adaptivity.\n\nThis class does not create vtkUnstructuredGrid output because it is\nintend",
    "ed for use in mappers as well as filters. Instead, it calls the\nregistered function with simplices as they are created.\n\nThe subdivision algorithm should change the vertex coordinates (it\nmust change both geometric and, if desired, parametric coordinates)\nof the midpoint. These coordinates need not be changed unless the\nEvaluateEdge() member returns true. The vtkStreamingTessellator\nitself has no ",
    "way of creating a more accurate midpoint vertex.\n\nHere's how to use this class:\n- Call AdaptivelySample1Facet, AdaptivelySample2Facet, or\n  AdaptivelySample3Facet, with an edge, triangle, or tetrahedron you\n  want tessellated.\n- The adaptive tessellator classifies each edge by passing the\n  midpoint values to the vtkEdgeSubdivisionCriterion.\n- After each edge is classified, the tessellator subdivi",
    "des edges as\n  required until the subdivision criterion is satisfied or the\n  maximum subdivision depth has been reached.\n- Edges, triangles, or tetrahedra connecting the vertices generated\n  by the subdivision algorithm are processed by calling the\n  user-defined callback functions (set with SetTetrahedronCallback(),\nSetTriangleCallback(), or SetEdgeCallback() ).\n\nWarning:\n\nNote that the vertices",
    " passed to AdaptivelySample3Facet,\nAdaptivelySample2Facet, or AdaptivelySample1Facet must be at least 6,\n5, or 4 entries long, respectively! This is because the\n&lt;r,s,t&gt;, &lt;r,s&gt;, or &lt;r&gt; parametric coordinates of\nthe vertices are maintained as the facet is subdivided. This\ninformation is often required by the subdivision algorithm in order\nto compute an error metric. You may change ",
    "the number of parametric\ncoordinates associated with each vertex using\nvtkStreamingTessellator::SetEmbeddingDimension().\n\nInterpolating Field Values:\n\nIf you wish, you may also use vtkStreamingTessellator to interpolate\nfield values at newly created vertices. Interpolated field values are\nstored just beyond the parametric coordinates associated with a\nvertex. They will always be double values; it ",
    "does not make sense to\ninterpolate a boolean or string value and your output and subdivision\nsubroutines may always cast to a float or use floor() to truncate an\ninterpolated value to an integer.\n\nSee Also:\n\nvtkEdgeSubdivisionCriterion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamingTessellator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamingTessellatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamingTessellator", o) != 0)
    {
    Py_DECREF(o);
    }

}

