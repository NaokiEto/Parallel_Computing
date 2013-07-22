// python wrapper for vtkDotProductSimilarity
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
#include "vtkDotProductSimilarity.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDotProductSimilarity(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDotProductSimilarity(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDotProductSimilarityNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDotProductSimilarityNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkDotProductSimilarity_Doc();


static PyObject *
PyvtkDotProductSimilarity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

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
      tempr = op->vtkDotProductSimilarity::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

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
      tempr = op->vtkDotProductSimilarity::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  vtkDotProductSimilarity *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::NewInstance();
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
PyvtkDotProductSimilarity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDotProductSimilarity *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDotProductSimilarity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorDimension();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetVectorDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorDimension(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetVectorDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetUpperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpperDiagonal();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetUpperDiagonal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetUpperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpperDiagonal(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetUpperDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiagonal();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetDiagonal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiagonal(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetLowerDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLowerDiagonal();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetLowerDiagonal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetLowerDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLowerDiagonal(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetLowerDiagonal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetFirstSecond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstSecond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFirstSecond();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetFirstSecond();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetFirstSecond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFirstSecond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFirstSecond(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetFirstSecond(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetSecondFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSecondFirst();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetSecondFirst();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetSecondFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSecondFirst(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetSecondFirst(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetMinimumThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumThreshold();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetMinimumThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetMinimumThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumThreshold(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetMinimumThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetMinimumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumCount();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetMinimumCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetMinimumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumCount(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetMinimumCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetMaximumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumCount();
      }
    else
      {
      tempr = op->vtkDotProductSimilarity::GetMaximumCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetMaximumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumCount(temp0);
      }
    else
      {
      op->vtkDotProductSimilarity::SetMaximumCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDotProductSimilarity_Methods[] = {
  {(char*)"GetClassName", PyvtkDotProductSimilarity_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDotProductSimilarity_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDotProductSimilarity_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDotProductSimilarity\nC++: vtkDotProductSimilarity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDotProductSimilarity_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDotProductSimilarity\nC++: vtkDotProductSimilarity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVectorDimension", PyvtkDotProductSimilarity_GetVectorDimension, 1,
   (char*)"V.GetVectorDimension() -> int\nC++: vtkIdType GetVectorDimension()\n\nControls whether to compute similarities for row-vectors or\ncolumn-vectors. 0 = rows, 1 = columns.\n"},
  {(char*)"SetVectorDimension", PyvtkDotProductSimilarity_SetVectorDimension, 1,
   (char*)"V.SetVectorDimension(int)\nC++: void SetVectorDimension(vtkIdType a)\n\nControls whether to compute similarities for row-vectors or\ncolumn-vectors. 0 = rows, 1 = columns.\n"},
  {(char*)"GetUpperDiagonal", PyvtkDotProductSimilarity_GetUpperDiagonal, 1,
   (char*)"V.GetUpperDiagonal() -> int\nC++: int GetUpperDiagonal()\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the upper diagonal of the\nsimilarity matrix.  Default: true.\n"},
  {(char*)"SetUpperDiagonal", PyvtkDotProductSimilarity_SetUpperDiagonal, 1,
   (char*)"V.SetUpperDiagonal(int)\nC++: void SetUpperDiagonal(int a)\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the upper diagonal of the\nsimilarity matrix.  Default: true.\n"},
  {(char*)"GetDiagonal", PyvtkDotProductSimilarity_GetDiagonal, 1,
   (char*)"V.GetDiagonal() -> int\nC++: int GetDiagonal()\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the diagonal of the similarity\nmatrix.  Default: false.\n"},
  {(char*)"SetDiagonal", PyvtkDotProductSimilarity_SetDiagonal, 1,
   (char*)"V.SetDiagonal(int)\nC++: void SetDiagonal(int a)\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the diagonal of the similarity\nmatrix.  Default: false.\n"},
  {(char*)"GetLowerDiagonal", PyvtkDotProductSimilarity_GetLowerDiagonal, 1,
   (char*)"V.GetLowerDiagonal() -> int\nC++: int GetLowerDiagonal()\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the lower diagonal of the\nsimilarity matrix.  Default: false.\n"},
  {(char*)"SetLowerDiagonal", PyvtkDotProductSimilarity_SetLowerDiagonal, 1,
   (char*)"V.SetLowerDiagonal(int)\nC++: void SetLowerDiagonal(int a)\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the lower diagonal of the\nsimilarity matrix.  Default: false.\n"},
  {(char*)"GetFirstSecond", PyvtkDotProductSimilarity_GetFirstSecond, 1,
   (char*)"V.GetFirstSecond() -> int\nC++: int GetFirstSecond()\n\nWhen computing similarities for two input matrices, controls\nwhether the results will include comparisons from the first\nmatrix to the second matrix.\n"},
  {(char*)"SetFirstSecond", PyvtkDotProductSimilarity_SetFirstSecond, 1,
   (char*)"V.SetFirstSecond(int)\nC++: void SetFirstSecond(int a)\n\nWhen computing similarities for two input matrices, controls\nwhether the results will include comparisons from the first\nmatrix to the second matrix.\n"},
  {(char*)"GetSecondFirst", PyvtkDotProductSimilarity_GetSecondFirst, 1,
   (char*)"V.GetSecondFirst() -> int\nC++: int GetSecondFirst()\n\nWhen computing similarities for two input matrices, controls\nwhether the results will include comparisons from the second\nmatrix to the first matrix.\n"},
  {(char*)"SetSecondFirst", PyvtkDotProductSimilarity_SetSecondFirst, 1,
   (char*)"V.SetSecondFirst(int)\nC++: void SetSecondFirst(int a)\n\nWhen computing similarities for two input matrices, controls\nwhether the results will include comparisons from the second\nmatrix to the first matrix.\n"},
  {(char*)"GetMinimumThreshold", PyvtkDotProductSimilarity_GetMinimumThreshold, 1,
   (char*)"V.GetMinimumThreshold() -> float\nC++: double GetMinimumThreshold()\n\nSpecifies a minimum threshold that a similarity must exceed to be\nincluded in the output.\n"},
  {(char*)"SetMinimumThreshold", PyvtkDotProductSimilarity_SetMinimumThreshold, 1,
   (char*)"V.SetMinimumThreshold(float)\nC++: void SetMinimumThreshold(double a)\n\nSpecifies a minimum threshold that a similarity must exceed to be\nincluded in the output.\n"},
  {(char*)"GetMinimumCount", PyvtkDotProductSimilarity_GetMinimumCount, 1,
   (char*)"V.GetMinimumCount() -> int\nC++: vtkIdType GetMinimumCount()\n\nSpecifies a minimum number of edges to include for each vector.\n"},
  {(char*)"SetMinimumCount", PyvtkDotProductSimilarity_SetMinimumCount, 1,
   (char*)"V.SetMinimumCount(int)\nC++: void SetMinimumCount(vtkIdType a)\n\nSpecifies a minimum number of edges to include for each vector.\n"},
  {(char*)"GetMaximumCount", PyvtkDotProductSimilarity_GetMaximumCount, 1,
   (char*)"V.GetMaximumCount() -> int\nC++: vtkIdType GetMaximumCount()\n\nSpecifies a maximum number of edges to include for each vector.\n"},
  {(char*)"SetMaximumCount", PyvtkDotProductSimilarity_SetMaximumCount, 1,
   (char*)"V.SetMaximumCount(int)\nC++: void SetMaximumCount(vtkIdType a)\n\nSpecifies a maximum number of edges to include for each vector.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDotProductSimilarity_StaticNew()
{
  return vtkDotProductSimilarity::New();
}

PyObject *PyVTKClass_vtkDotProductSimilarityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDotProductSimilarity_StaticNew,
    PyvtkDotProductSimilarity_Methods,
    "vtkDotProductSimilarity", modulename,
    NULL, NULL,
    PyvtkDotProductSimilarity_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDotProductSimilarity_Doc()
{
  static const char *docstring[] = {
    "vtkDotProductSimilarity - compute dot-product similarity metrics.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Treats matrices as collections of vectors and computes dot-product\nsimilarity metrics between vectors.\n\nThe results are returned as an edge-table that lists the index of\neach vector and their computed similarity.  The output edge-table is\ntypically used with vtkTableToGraph to create a similarity graph.\n\nThis filter can be used with one or two input matrices.  If you\nprovide a single matrix as inp",
    "ut, every vector in the matrix is\ncompared with every other vector. If you provide two matrices, every\nvector in the first matrix is compared with every vector in the\nsecond matrix.\n\nNote that this filter *only* computes the dot-product between each\npair of vectors; if you want to compute the cosine of the angles\nbetween vectors, you will need to normalize the inputs yourself.\n\nInputs:\n  Input por",
    "t 0: (required) A vtkDenseArraywith two dimensions (a\nmatrix).\n  Input port 1: (optional) A vtkDenseArraywith two dimensions (a\nmatrix).\n\nOutputs:\n  Output port 0: A vtkTable containing \"source\", \"target\", and\n\"similarity\" columns.\n\nCaveats:\n\nNote that the complexity of this filter is quadratic!  It also\nrequires dense arrays as input, in the future it should be\ngeneralized to accept sparse arrays",
    ".\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDotProductSimilarity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDotProductSimilarityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDotProductSimilarity", o) != 0)
    {
    Py_DECREF(o);
    }

}

