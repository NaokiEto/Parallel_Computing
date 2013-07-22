// python wrapper for vtkChacoReader
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
#include "vtkChacoReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkChacoReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkChacoReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkChacoReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkChacoReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkChacoReader_Doc();


static PyObject *
PyvtkChacoReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

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
      tempr = op->vtkChacoReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

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
      tempr = op->vtkChacoReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  vtkChacoReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkChacoReader::NewInstance();
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
PyvtkChacoReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkChacoReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkChacoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_SetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBaseName(temp0);
      }
    else
      {
      op->vtkChacoReader::SetBaseName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBaseName();
      }
    else
      {
      tempr = op->vtkChacoReader::GetBaseName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_SetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateGlobalElementIdArray(temp0);
      }
    else
      {
      op->vtkChacoReader::SetGenerateGlobalElementIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateGlobalElementIdArray();
      }
    else
      {
      tempr = op->vtkChacoReader::GetGenerateGlobalElementIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateGlobalElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalElementIdArrayOn();
      }
    else
      {
      op->vtkChacoReader::GenerateGlobalElementIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateGlobalElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalElementIdArrayOff();
      }
    else
      {
      op->vtkChacoReader::GenerateGlobalElementIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGlobalElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkChacoReader::GetGlobalElementIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_SetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateGlobalNodeIdArray(temp0);
      }
    else
      {
      op->vtkChacoReader::SetGenerateGlobalNodeIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateGlobalNodeIdArray();
      }
    else
      {
      tempr = op->vtkChacoReader::GetGenerateGlobalNodeIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateGlobalNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalNodeIdArrayOn();
      }
    else
      {
      op->vtkChacoReader::GenerateGlobalNodeIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateGlobalNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalNodeIdArrayOff();
      }
    else
      {
      op->vtkChacoReader::GenerateGlobalNodeIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGlobalNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkChacoReader::GetGlobalNodeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_SetGenerateVertexWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateVertexWeightArrays(temp0);
      }
    else
      {
      op->vtkChacoReader::SetGenerateVertexWeightArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGenerateVertexWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateVertexWeightArrays();
      }
    else
      {
      tempr = op->vtkChacoReader::GetGenerateVertexWeightArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateVertexWeightArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexWeightArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVertexWeightArraysOn();
      }
    else
      {
      op->vtkChacoReader::GenerateVertexWeightArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateVertexWeightArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexWeightArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVertexWeightArraysOff();
      }
    else
      {
      op->vtkChacoReader::GenerateVertexWeightArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfVertexWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertexWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVertexWeights();
      }
    else
      {
      tempr = op->vtkChacoReader::GetNumberOfVertexWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetVertexWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexWeightArrayName(temp0);
      }
    else
      {
      tempr = op->vtkChacoReader::GetVertexWeightArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_SetGenerateEdgeWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgeWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateEdgeWeightArrays(temp0);
      }
    else
      {
      op->vtkChacoReader::SetGenerateEdgeWeightArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetGenerateEdgeWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgeWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateEdgeWeightArrays();
      }
    else
      {
      tempr = op->vtkChacoReader::GetGenerateEdgeWeightArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateEdgeWeightArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgeWeightArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgeWeightArraysOn();
      }
    else
      {
      op->vtkChacoReader::GenerateEdgeWeightArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GenerateEdgeWeightArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgeWeightArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgeWeightArraysOff();
      }
    else
      {
      op->vtkChacoReader::GenerateEdgeWeightArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgeWeights();
      }
    else
      {
      tempr = op->vtkChacoReader::GetNumberOfEdgeWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeWeightArrayName(temp0);
      }
    else
      {
      tempr = op->vtkChacoReader::GetEdgeWeightArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionality();
      }
    else
      {
      tempr = op->vtkChacoReader::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdges();
      }
    else
      {
      tempr = op->vtkChacoReader::GetNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVertices();
      }
    else
      {
      tempr = op->vtkChacoReader::GetNumberOfVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfCellWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellWeightArrays();
      }
    else
      {
      tempr = op->vtkChacoReader::GetNumberOfCellWeightArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChacoReader_GetNumberOfPointWeightArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointWeightArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoReader *op = static_cast<vtkChacoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointWeightArrays();
      }
    else
      {
      tempr = op->vtkChacoReader::GetNumberOfPointWeightArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChacoReader_Methods[] = {
  {(char*)"GetClassName", PyvtkChacoReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChacoReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChacoReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkChacoReader\nC++: vtkChacoReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChacoReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChacoReader\nC++: vtkChacoReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBaseName", PyvtkChacoReader_SetBaseName, 1,
   (char*)"V.SetBaseName(string)\nC++: void SetBaseName(char *)\n\nSpecify the base name of the Chaco files.  The reader will try to\nopen BaseName.coords and BaseName.graph.\n"},
  {(char*)"GetBaseName", PyvtkChacoReader_GetBaseName, 1,
   (char*)"V.GetBaseName() -> string\nC++: char *GetBaseName()\n\nSpecify the base name of the Chaco files.  The reader will try to\nopen BaseName.coords and BaseName.graph.\n"},
  {(char*)"SetGenerateGlobalElementIdArray", PyvtkChacoReader_SetGenerateGlobalElementIdArray, 1,
   (char*)"V.SetGenerateGlobalElementIdArray(int)\nC++: void SetGenerateGlobalElementIdArray(int a)\n\nIndicate whether this reader should create a cell array\ncontaining global IDs for the cells in the output\nvtkUnstructuredGrid.  These cells represent the edges that were\nin the Chaco file.  Each edge is a vtkLine. Default is ON.\n"},
  {(char*)"GetGenerateGlobalElementIdArray", PyvtkChacoReader_GetGenerateGlobalElementIdArray, 1,
   (char*)"V.GetGenerateGlobalElementIdArray() -> int\nC++: int GetGenerateGlobalElementIdArray()\n\nIndicate whether this reader should create a cell array\ncontaining global IDs for the cells in the output\nvtkUnstructuredGrid.  These cells represent the edges that were\nin the Chaco file.  Each edge is a vtkLine. Default is ON.\n"},
  {(char*)"GenerateGlobalElementIdArrayOn", PyvtkChacoReader_GenerateGlobalElementIdArrayOn, 1,
   (char*)"V.GenerateGlobalElementIdArrayOn()\nC++: void GenerateGlobalElementIdArrayOn()\n\nIndicate whether this reader should create a cell array\ncontaining global IDs for the cells in the output\nvtkUnstructuredGrid.  These cells represent the edges that were\nin the Chaco file.  Each edge is a vtkLine. Default is ON.\n"},
  {(char*)"GenerateGlobalElementIdArrayOff", PyvtkChacoReader_GenerateGlobalElementIdArrayOff, 1,
   (char*)"V.GenerateGlobalElementIdArrayOff()\nC++: void GenerateGlobalElementIdArrayOff()\n\nIndicate whether this reader should create a cell array\ncontaining global IDs for the cells in the output\nvtkUnstructuredGrid.  These cells represent the edges that were\nin the Chaco file.  Each edge is a vtkLine. Default is ON.\n"},
  {(char*)"GetGlobalElementIdArrayName", PyvtkChacoReader_GetGlobalElementIdArrayName, 1,
   (char*)"V.GetGlobalElementIdArrayName() -> string\nC++: static const char *GetGlobalElementIdArrayName()\n\n"},
  {(char*)"SetGenerateGlobalNodeIdArray", PyvtkChacoReader_SetGenerateGlobalNodeIdArray, 1,
   (char*)"V.SetGenerateGlobalNodeIdArray(int)\nC++: void SetGenerateGlobalNodeIdArray(int a)\n\nIndicate whether this reader should create a point array of\nglobal IDs for the points in the output vtkUnstructuredGrid. \nThese points are the vertices that were in the Chaco file. \nGlobal point IDs start at \"1\" for the first vertex in\nBaseName.coords and go up from there. Default is ON.\n"},
  {(char*)"GetGenerateGlobalNodeIdArray", PyvtkChacoReader_GetGenerateGlobalNodeIdArray, 1,
   (char*)"V.GetGenerateGlobalNodeIdArray() -> int\nC++: int GetGenerateGlobalNodeIdArray()\n\nIndicate whether this reader should create a point array of\nglobal IDs for the points in the output vtkUnstructuredGrid. \nThese points are the vertices that were in the Chaco file. \nGlobal point IDs start at \"1\" for the first vertex in\nBaseName.coords and go up from there. Default is ON.\n"},
  {(char*)"GenerateGlobalNodeIdArrayOn", PyvtkChacoReader_GenerateGlobalNodeIdArrayOn, 1,
   (char*)"V.GenerateGlobalNodeIdArrayOn()\nC++: void GenerateGlobalNodeIdArrayOn()\n\nIndicate whether this reader should create a point array of\nglobal IDs for the points in the output vtkUnstructuredGrid. \nThese points are the vertices that were in the Chaco file. \nGlobal point IDs start at \"1\" for the first vertex in\nBaseName.coords and go up from there. Default is ON.\n"},
  {(char*)"GenerateGlobalNodeIdArrayOff", PyvtkChacoReader_GenerateGlobalNodeIdArrayOff, 1,
   (char*)"V.GenerateGlobalNodeIdArrayOff()\nC++: void GenerateGlobalNodeIdArrayOff()\n\nIndicate whether this reader should create a point array of\nglobal IDs for the points in the output vtkUnstructuredGrid. \nThese points are the vertices that were in the Chaco file. \nGlobal point IDs start at \"1\" for the first vertex in\nBaseName.coords and go up from there. Default is ON.\n"},
  {(char*)"GetGlobalNodeIdArrayName", PyvtkChacoReader_GetGlobalNodeIdArrayName, 1,
   (char*)"V.GetGlobalNodeIdArrayName() -> string\nC++: static const char *GetGlobalNodeIdArrayName()\n\n"},
  {(char*)"SetGenerateVertexWeightArrays", PyvtkChacoReader_SetGenerateVertexWeightArrays, 1,
   (char*)"V.SetGenerateVertexWeightArrays(int)\nC++: void SetGenerateVertexWeightArrays(int a)\n\nIndicate whether this reader should create a point array for each\nvertex weight in the Chaco file. Default is OFF.\n"},
  {(char*)"GetGenerateVertexWeightArrays", PyvtkChacoReader_GetGenerateVertexWeightArrays, 1,
   (char*)"V.GetGenerateVertexWeightArrays() -> int\nC++: int GetGenerateVertexWeightArrays()\n\nIndicate whether this reader should create a point array for each\nvertex weight in the Chaco file. Default is OFF.\n"},
  {(char*)"GenerateVertexWeightArraysOn", PyvtkChacoReader_GenerateVertexWeightArraysOn, 1,
   (char*)"V.GenerateVertexWeightArraysOn()\nC++: void GenerateVertexWeightArraysOn()\n\nIndicate whether this reader should create a point array for each\nvertex weight in the Chaco file. Default is OFF.\n"},
  {(char*)"GenerateVertexWeightArraysOff", PyvtkChacoReader_GenerateVertexWeightArraysOff, 1,
   (char*)"V.GenerateVertexWeightArraysOff()\nC++: void GenerateVertexWeightArraysOff()\n\nIndicate whether this reader should create a point array for each\nvertex weight in the Chaco file. Default is OFF.\n"},
  {(char*)"GetNumberOfVertexWeights", PyvtkChacoReader_GetNumberOfVertexWeights, 1,
   (char*)"V.GetNumberOfVertexWeights() -> int\nC++: int GetNumberOfVertexWeights()\n\nReturns the number of weights per vertex in the Chaco file,\nwhether or not GenerateVertexWeightArrays is ON.\n"},
  {(char*)"GetVertexWeightArrayName", PyvtkChacoReader_GetVertexWeightArrayName, 1,
   (char*)"V.GetVertexWeightArrayName(int) -> string\nC++: const char *GetVertexWeightArrayName(int weight)\n\nThis method returns the name of the selected Vertex weight point\narray.  If you did not turn on GenerateVertexWeightArrays, or if\nthe weight you requested is invalid, it returns NULL. Weights\nbegin at one and go up to NumberOfVertexWeights. This is a\npointer to our copy of the name, so don't \"delete\" it.\n"},
  {(char*)"SetGenerateEdgeWeightArrays", PyvtkChacoReader_SetGenerateEdgeWeightArrays, 1,
   (char*)"V.SetGenerateEdgeWeightArrays(int)\nC++: void SetGenerateEdgeWeightArrays(int a)\n\nEach edge in the Chaco file connects two vertices.  The file may\nspecify one or more weights for each edge.  (The weight for an\nedge from vertex A to vertex B equals the weight from B to A.)\nIndicate with the following parameter whether this reader should\ncreate a cell array for each weight for every edge. Default is\nOFF.\n"},
  {(char*)"GetGenerateEdgeWeightArrays", PyvtkChacoReader_GetGenerateEdgeWeightArrays, 1,
   (char*)"V.GetGenerateEdgeWeightArrays() -> int\nC++: int GetGenerateEdgeWeightArrays()\n\nEach edge in the Chaco file connects two vertices.  The file may\nspecify one or more weights for each edge.  (The weight for an\nedge from vertex A to vertex B equals the weight from B to A.)\nIndicate with the following parameter whether this reader should\ncreate a cell array for each weight for every edge. Default is\nOFF.\n"},
  {(char*)"GenerateEdgeWeightArraysOn", PyvtkChacoReader_GenerateEdgeWeightArraysOn, 1,
   (char*)"V.GenerateEdgeWeightArraysOn()\nC++: void GenerateEdgeWeightArraysOn()\n\nEach edge in the Chaco file connects two vertices.  The file may\nspecify one or more weights for each edge.  (The weight for an\nedge from vertex A to vertex B equals the weight from B to A.)\nIndicate with the following parameter whether this reader should\ncreate a cell array for each weight for every edge. Default is\nOFF.\n"},
  {(char*)"GenerateEdgeWeightArraysOff", PyvtkChacoReader_GenerateEdgeWeightArraysOff, 1,
   (char*)"V.GenerateEdgeWeightArraysOff()\nC++: void GenerateEdgeWeightArraysOff()\n\nEach edge in the Chaco file connects two vertices.  The file may\nspecify one or more weights for each edge.  (The weight for an\nedge from vertex A to vertex B equals the weight from B to A.)\nIndicate with the following parameter whether this reader should\ncreate a cell array for each weight for every edge. Default is\nOFF.\n"},
  {(char*)"GetNumberOfEdgeWeights", PyvtkChacoReader_GetNumberOfEdgeWeights, 1,
   (char*)"V.GetNumberOfEdgeWeights() -> int\nC++: int GetNumberOfEdgeWeights()\n\nReturns the number of weights per edge in the Chaco file, whether\nor not GenerateEdgeWeightArrays is ON.\n"},
  {(char*)"GetEdgeWeightArrayName", PyvtkChacoReader_GetEdgeWeightArrayName, 1,
   (char*)"V.GetEdgeWeightArrayName(int) -> string\nC++: const char *GetEdgeWeightArrayName(int weight)\n\nThis method returns the name of the selected Edge weight cell\narray.  If you did not turn on GenerateEdgeWeightArrays, or if\nthe weight you requested is invalid, it returns NULL. Weights\nbegin at one and go up to NumberOfEdgeWeights. This is a pointer\nto our copy of the name, so don't \"delete\" it.\n"},
  {(char*)"GetDimensionality", PyvtkChacoReader_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nAccess to meta data generated by RequestInformation.\n"},
  {(char*)"GetNumberOfEdges", PyvtkChacoReader_GetNumberOfEdges, 1,
   (char*)"V.GetNumberOfEdges() -> int\nC++: vtkIdType GetNumberOfEdges()\n\nAccess to meta data generated by RequestInformation.\n"},
  {(char*)"GetNumberOfVertices", PyvtkChacoReader_GetNumberOfVertices, 1,
   (char*)"V.GetNumberOfVertices() -> int\nC++: vtkIdType GetNumberOfVertices()\n\nAccess to meta data generated by RequestInformation.\n"},
  {(char*)"GetNumberOfCellWeightArrays", PyvtkChacoReader_GetNumberOfCellWeightArrays, 1,
   (char*)"V.GetNumberOfCellWeightArrays() -> int\nC++: int GetNumberOfCellWeightArrays()\n\nAfter this filter executes, this method returns the number of\ncell arrays that were created to hold the edge weights.  It is\nequal to NumberOfEdgeWeights if GenerateEdgeWeightArrays was ON.\n"},
  {(char*)"GetNumberOfPointWeightArrays", PyvtkChacoReader_GetNumberOfPointWeightArrays, 1,
   (char*)"V.GetNumberOfPointWeightArrays() -> int\nC++: int GetNumberOfPointWeightArrays()\n\nAfter this filter executes, this method returns the number of\npoint arrays that were created to hold the vertex weights.  It is\nequal to NumberOfVertexWeights if GenerateVertexWeightArrays was\nON.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChacoReader_StaticNew()
{
  return vtkChacoReader::New();
}

PyObject *PyVTKClass_vtkChacoReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChacoReader_StaticNew,
    PyvtkChacoReader_Methods,
    "vtkChacoReader", modulename,
    NULL, NULL,
    PyvtkChacoReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkChacoReader_Doc()
{
  static const char *docstring[] = {
    "vtkChacoReader - Read a Chaco file and create a vtkUnstructuredGrid. \n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkChacoReader is an unstructured grid source object that reads Chaco\nfiles.  The reader DOES NOT respond to piece requests. Chaco is a\ngraph partitioning package developed at Sandia National Laboratories\nin the early 1990s.  (http://www.cs.sandia.gov/~bahendr/chaco.html)\n\nNote that the Chaco \"edges\" become VTK \"cells\", and the Chaco\n\"vertices\" become VTK \"points\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChacoReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChacoReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChacoReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

