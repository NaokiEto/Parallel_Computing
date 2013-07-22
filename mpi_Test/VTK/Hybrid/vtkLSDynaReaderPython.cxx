// python wrapper for vtkLSDynaReader
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
#include "vtkLSDynaReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLSDynaReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLSDynaReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLSDynaReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLSDynaReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkLSDynaReader_Doc();


static PyObject *
PyvtkLSDynaReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

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
      tempr = op->vtkLSDynaReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

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
      tempr = op->vtkLSDynaReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkLSDynaReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLSDynaReader::NewInstance();
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
PyvtkLSDynaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLSDynaReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLSDynaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_DebugDump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugDump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DebugDump();
      }
    else
      {
      op->vtkLSDynaReader::DebugDump();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanReadFile(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetDatabaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDatabaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDatabaseDirectory(temp0);
      }
    else
      {
      op->vtkLSDynaReader::SetDatabaseDirectory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetDatabaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDatabaseDirectory();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetDatabaseDirectory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_IsDatabaseValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDatabaseValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsDatabaseValid();
      }
    else
      {
      tempr = op->vtkLSDynaReader::IsDatabaseValid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkLSDynaReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

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
      tempr = op->vtkLSDynaReader::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodes();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfContinuumCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContinuumCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfContinuumCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfContinuumCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfSolidCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSolidCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSolidCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfSolidCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfThickShellCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThickShellCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThickShellCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfThickShellCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfShellCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShellCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfShellCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfShellCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfRigidBodyCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRigidBodyCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRigidBodyCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfRigidBodyCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfRoadSurfaceCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRoadSurfaceCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRoadSurfaceCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfRoadSurfaceCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfBeamCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBeamCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBeamCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfBeamCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfParticleCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParticleCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfParticleCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfParticleCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTimeSteps();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkLSDynaReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStep();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  vtkIdType temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeValue(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetTimeValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStepRange();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetTimeStepRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetTimeStepRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0);
      }
    else
      {
      op->vtkLSDynaReader::SetTimeStepRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLSDynaReader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkLSDynaReader_SetTimeStepRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetPointArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetPointArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetPointArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetPointArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetPointArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetPointArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetPointArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetPointArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetPointArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetPointArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetPointArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetPointArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetPointArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPointArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInPointArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInPointArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInPointArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInPointArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInPointArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInPointArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInPointArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellArrays(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfCellArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetCellArrayName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetCellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLSDynaReader::SetCellArrayStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetCellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLSDynaReader::SetCellArrayStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetCellArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetCellArrayStatus_s1, 1,
   (char*)"@iii"},
  {NULL, PyvtkLSDynaReader_SetCellArrayStatus_s2, 1,
   (char*)"@izi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetCellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetCellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayStatus(temp0, temp1);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetCellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayStatus(temp0, temp1);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetCellArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetCellArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_GetCellArrayStatus_s2, 1,
   (char*)"@iz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetCellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInCellArray(temp0, temp1);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInCellArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInCellArray(temp0, temp1);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInCellArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_s2, 1,
   (char*)"@iz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInCellArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInCellArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInCellArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfSolidArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSolidArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSolidArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfSolidArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetSolidArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSolidArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetSolidArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetSolidArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSolidArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetSolidArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetSolidArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSolidArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetSolidArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetSolidArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetSolidArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetSolidArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetSolidArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetSolidArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSolidArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetSolidArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSolidArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetSolidArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetSolidArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSolidArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetSolidArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetSolidArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetSolidArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetSolidArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetSolidArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetSolidArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSolidArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInSolidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInSolidArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInSolidArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInSolidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInSolidArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInSolidArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInSolidArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfThickShellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThickShellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThickShellArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfThickShellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetThickShellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickShellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThickShellArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetThickShellArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetThickShellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetThickShellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetThickShellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetThickShellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetThickShellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetThickShellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetThickShellArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetThickShellArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetThickShellArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetThickShellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetThickShellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetThickShellArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetThickShellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThickShellArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetThickShellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetThickShellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThickShellArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetThickShellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetThickShellArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetThickShellArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetThickShellArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetThickShellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetThickShellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetThickShellArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInThickShellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInThickShellArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInThickShellArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInThickShellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInThickShellArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInThickShellArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInThickShellArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfShellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfShellArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfShellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetShellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShellArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetShellArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetShellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetShellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetShellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetShellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetShellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetShellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetShellArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetShellArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetShellArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetShellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetShellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetShellArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetShellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShellArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetShellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetShellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShellArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetShellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetShellArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetShellArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetShellArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetShellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetShellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetShellArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInShellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInShellArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInShellArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInShellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInShellArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInShellArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInShellArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInShellArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInShellArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfRigidBodyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRigidBodyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRigidBodyArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfRigidBodyArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetRigidBodyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRigidBodyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRigidBodyArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetRigidBodyArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetRigidBodyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRigidBodyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRigidBodyArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetRigidBodyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetRigidBodyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRigidBodyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRigidBodyArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetRigidBodyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetRigidBodyArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetRigidBodyArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetRigidBodyArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetRigidBodyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetRigidBodyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRigidBodyArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetRigidBodyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRigidBodyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRigidBodyArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetRigidBodyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetRigidBodyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRigidBodyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRigidBodyArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetRigidBodyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetRigidBodyArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetRigidBodyArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetRigidBodyArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetRigidBodyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetRigidBodyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRigidBodyArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInRigidBodyArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInRigidBodyArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInRigidBodyArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInRigidBodyArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInRigidBodyArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInRigidBodyArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInRigidBodyArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfRoadSurfaceArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRoadSurfaceArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRoadSurfaceArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfRoadSurfaceArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetRoadSurfaceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoadSurfaceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRoadSurfaceArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetRoadSurfaceArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRoadSurfaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRoadSurfaceArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetRoadSurfaceArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRoadSurfaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRoadSurfaceArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetRoadSurfaceArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetRoadSurfaceArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetRoadSurfaceArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRoadSurfaceArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoadSurfaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRoadSurfaceArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetRoadSurfaceArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoadSurfaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRoadSurfaceArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetRoadSurfaceArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetRoadSurfaceArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetRoadSurfaceArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRoadSurfaceArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInRoadSurfaceArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInRoadSurfaceArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInRoadSurfaceArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInRoadSurfaceArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInRoadSurfaceArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInRoadSurfaceArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInRoadSurfaceArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfBeamArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBeamArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBeamArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfBeamArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetBeamArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeamArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBeamArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetBeamArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetBeamArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBeamArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBeamArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetBeamArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetBeamArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBeamArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBeamArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetBeamArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetBeamArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetBeamArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetBeamArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetBeamArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetBeamArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBeamArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetBeamArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeamArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBeamArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetBeamArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetBeamArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBeamArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBeamArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetBeamArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetBeamArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetBeamArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetBeamArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetBeamArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetBeamArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBeamArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInBeamArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInBeamArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInBeamArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInBeamArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInBeamArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInBeamArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInBeamArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfParticleArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParticleArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfParticleArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfParticleArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetParticleArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParticleArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetParticleArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetParticleArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParticleArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetParticleArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetParticleArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParticleArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetParticleArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetParticleArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetParticleArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetParticleArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetParticleArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetParticleArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetParticleArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetParticleArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParticleArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetParticleArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetParticleArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParticleArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetParticleArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetParticleArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetParticleArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetParticleArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetParticleArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetParticleArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetParticleArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInParticleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInParticleArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInParticleArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsInParticleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponentsInParticleArray(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfComponentsInParticleArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfComponentsInParticleArray");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_SetDeformedMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeformedMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeformedMesh(temp0);
      }
    else
      {
      op->vtkLSDynaReader::SetDeformedMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetDeformedMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeformedMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeformedMesh();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetDeformedMesh();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_DeformedMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeformedMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeformedMeshOn();
      }
    else
      {
      op->vtkLSDynaReader::DeformedMeshOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_DeformedMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeformedMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeformedMeshOff();
      }
    else
      {
      op->vtkLSDynaReader::DeformedMeshOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetRemoveDeletedCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveDeletedCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRemoveDeletedCells(temp0);
      }
    else
      {
      op->vtkLSDynaReader::SetRemoveDeletedCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetRemoveDeletedCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveDeletedCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRemoveDeletedCells();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetRemoveDeletedCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_RemoveDeletedCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDeletedCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveDeletedCellsOn();
      }
    else
      {
      op->vtkLSDynaReader::RemoveDeletedCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_RemoveDeletedCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDeletedCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveDeletedCellsOff();
      }
    else
      {
      op->vtkLSDynaReader::RemoveDeletedCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetSplitByMaterialId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitByMaterialId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplitByMaterialId(temp0);
      }
    else
      {
      op->vtkLSDynaReader::SetSplitByMaterialId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetSplitByMaterialId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitByMaterialId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplitByMaterialId();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetSplitByMaterialId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SplitByMaterialIdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitByMaterialIdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplitByMaterialIdOn();
      }
    else
      {
      op->vtkLSDynaReader::SplitByMaterialIdOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SplitByMaterialIdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitByMaterialIdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplitByMaterialIdOff();
      }
    else
      {
      op->vtkLSDynaReader::SplitByMaterialIdOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetInputDeck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDeck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputDeck(temp0);
      }
    else
      {
      op->vtkLSDynaReader::SetInputDeck(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetInputDeck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDeck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputDeck();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetInputDeck();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetNumberOfPartArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPartArrays();
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetNumberOfPartArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_GetPartArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartArrayName(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetPartArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaReader_SetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPartArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetPartArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_SetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPartArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkLSDynaReader::SetPartArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_SetPartArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_SetPartArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkLSDynaReader_SetPartArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_SetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_SetPartArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPartArrayStatus");
  return NULL;
}



static PyObject *
PyvtkLSDynaReader_GetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetPartArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLSDynaReader_GetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaReader *op = static_cast<vtkLSDynaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkLSDynaReader::GetPartArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaReader_GetPartArrayStatus_Methods[] = {
  {NULL, PyvtkLSDynaReader_GetPartArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkLSDynaReader_GetPartArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLSDynaReader_GetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLSDynaReader_GetPartArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPartArrayStatus");
  return NULL;
}


static PyMethodDef PyvtkLSDynaReader_Methods[] = {
  {(char*)"GetClassName", PyvtkLSDynaReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLSDynaReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLSDynaReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLSDynaReader\nC++: vtkLSDynaReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLSDynaReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLSDynaReader\nC++: vtkLSDynaReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DebugDump", PyvtkLSDynaReader_DebugDump, 1,
   (char*)"V.DebugDump()\nC++: void DebugDump()\n\nA routine to call Dump() from within a lame debugger that won't\nproperly pass a C++ iostream object like cout.\n"},
  {(char*)"CanReadFile", PyvtkLSDynaReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\nDetermine if the file can be readed with this reader.\n"},
  {(char*)"SetDatabaseDirectory", PyvtkLSDynaReader_SetDatabaseDirectory, 1,
   (char*)"V.SetDatabaseDirectory(string)\nC++: virtual void SetDatabaseDirectory(const char *)\n\nGet/Set the directory containing the LS-Dyna database and\ndetermine whether it is valid.\n"},
  {(char*)"GetDatabaseDirectory", PyvtkLSDynaReader_GetDatabaseDirectory, 1,
   (char*)"V.GetDatabaseDirectory() -> string\nC++: const char *GetDatabaseDirectory()\n\nGet/Set the directory containing the LS-Dyna database and\ndetermine whether it is valid.\n"},
  {(char*)"IsDatabaseValid", PyvtkLSDynaReader_IsDatabaseValid, 1,
   (char*)"V.IsDatabaseValid() -> int\nC++: int IsDatabaseValid()\n\nGet/Set the directory containing the LS-Dyna database and\ndetermine whether it is valid.\n"},
  {(char*)"SetFileName", PyvtkLSDynaReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *)\n\nGet/Set the filename. The Set/GetFileName() routines are actually\nwrappers around the Set/GetDatabaseDirectory() members; the\nactual filename you choose is irrelevant -- only the directory\nname is used. This is done in order to accommodate ParaView.\n"},
  {(char*)"GetFileName", PyvtkLSDynaReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: const char *GetFileName()\n\nGet/Set the filename. The Set/GetFileName() routines are actually\nwrappers around the Set/GetDatabaseDirectory() members; the\nactual filename you choose is irrelevant -- only the directory\nname is used. This is done in order to accommodate ParaView.\n"},
  {(char*)"GetTitle", PyvtkLSDynaReader_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nThe title of the database is a 40 or 80 character text\ndescription stored at the front of a d3plot file.  Do not call\nthis function before setting the database directory and calling\nUpdateInformation().\n"},
  {(char*)"GetDimensionality", PyvtkLSDynaReader_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nRetrieve the dimension of points in the database. This should\nreturn 2 or 3.  Do not call this function before setting the\ndatabase directory and calling UpdateInformation().\n"},
  {(char*)"GetNumberOfNodes", PyvtkLSDynaReader_GetNumberOfNodes, 1,
   (char*)"V.GetNumberOfNodes() -> int\nC++: vtkIdType GetNumberOfNodes()\n\nRetrieve the number of points in the database.  Do not call this\nfunction before setting the database directory and calling\nUpdateInformation().\n"},
  {(char*)"GetNumberOfCells", PyvtkLSDynaReader_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n\nNote that GetNumberOfCells() returns the sum of\nGetNumberOfContinuumCells() and GetNumberOfParticleCells().\n"},
  {(char*)"GetNumberOfContinuumCells", PyvtkLSDynaReader_GetNumberOfContinuumCells, 1,
   (char*)"V.GetNumberOfContinuumCells() -> int\nC++: vtkIdType GetNumberOfContinuumCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n\nNote that GetNumberOfContinuumCells() returns the sum of\nGetNumberOfSolidCells(), GetNumberOfThickShellCells(),\nGetNumberOfShellCells(), GetNumberOfRigidBodyCells(),\nGetNumberOfRoadSurfaceCells(), and GetNumberOfBeamCells().\n"},
  {(char*)"GetNumberOfSolidCells", PyvtkLSDynaReader_GetNumberOfSolidCells, 1,
   (char*)"V.GetNumberOfSolidCells() -> int\nC++: vtkIdType GetNumberOfSolidCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {(char*)"GetNumberOfThickShellCells", PyvtkLSDynaReader_GetNumberOfThickShellCells, 1,
   (char*)"V.GetNumberOfThickShellCells() -> int\nC++: vtkIdType GetNumberOfThickShellCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {(char*)"GetNumberOfShellCells", PyvtkLSDynaReader_GetNumberOfShellCells, 1,
   (char*)"V.GetNumberOfShellCells() -> int\nC++: vtkIdType GetNumberOfShellCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {(char*)"GetNumberOfRigidBodyCells", PyvtkLSDynaReader_GetNumberOfRigidBodyCells, 1,
   (char*)"V.GetNumberOfRigidBodyCells() -> int\nC++: vtkIdType GetNumberOfRigidBodyCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {(char*)"GetNumberOfRoadSurfaceCells", PyvtkLSDynaReader_GetNumberOfRoadSurfaceCells, 1,
   (char*)"V.GetNumberOfRoadSurfaceCells() -> int\nC++: vtkIdType GetNumberOfRoadSurfaceCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {(char*)"GetNumberOfBeamCells", PyvtkLSDynaReader_GetNumberOfBeamCells, 1,
   (char*)"V.GetNumberOfBeamCells() -> int\nC++: vtkIdType GetNumberOfBeamCells()\n\nRetrieve the number of cells of a given type in the database. Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {(char*)"GetNumberOfParticleCells", PyvtkLSDynaReader_GetNumberOfParticleCells, 1,
   (char*)"V.GetNumberOfParticleCells() -> int\nC++: vtkIdType GetNumberOfParticleCells()\n\nRetrieve the number of cells of a given type in the database.  Do\nnot call this function before setting the database directory and\ncalling UpdateInformation().\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkLSDynaReader_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: vtkIdType GetNumberOfTimeSteps()\n\nRetrieve information about the time extents of the LS-Dyna\ndatabase. Do not call these functions before setting the database\ndirectory and calling UpdateInformation().\n"},
  {(char*)"SetTimeStep", PyvtkLSDynaReader_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: virtual void SetTimeStep(vtkIdType)\n\nRetrieve information about the time extents of the LS-Dyna\ndatabase. Do not call these functions before setting the database\ndirectory and calling UpdateInformation().\n"},
  {(char*)"GetTimeStep", PyvtkLSDynaReader_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: vtkIdType GetTimeStep()\n\nRetrieve information about the time extents of the LS-Dyna\ndatabase. Do not call these functions before setting the database\ndirectory and calling UpdateInformation().\n"},
  {(char*)"GetTimeValue", PyvtkLSDynaReader_GetTimeValue, 1,
   (char*)"V.GetTimeValue(int) -> float\nC++: double GetTimeValue(vtkIdType)\n\nRetrieve information about the time extents of the LS-Dyna\ndatabase. Do not call these functions before setting the database\ndirectory and calling UpdateInformation().\n"},
  {(char*)"GetTimeStepRange", PyvtkLSDynaReader_GetTimeStepRange, 1,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetTimeStepRange", PyvtkLSDynaReader_SetTimeStepRange, 1,
   (char*)"V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkLSDynaReader_GetNumberOfPointArrays, 1,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThese methods allow you to load only selected subsets of the\nnodal variables defined over the mesh.\n"},
  {(char*)"GetPointArrayName", PyvtkLSDynaReader_GetPointArrayName, 1,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int)\n\nThese methods allow you to load only selected subsets of the\nnodal variables defined over the mesh.\n"},
  {(char*)"SetPointArrayStatus", PyvtkLSDynaReader_SetPointArrayStatus, 1,
   (char*)"V.SetPointArrayStatus(int, int)\nC++: virtual void SetPointArrayStatus(int arr, int status)\nV.SetPointArrayStatus(string, int)\nC++: virtual void SetPointArrayStatus(const char *arrName,\n    int status)\n\nThese methods allow you to load only selected subsets of the\nnodal variables defined over the mesh.\n"},
  {(char*)"GetPointArrayStatus", PyvtkLSDynaReader_GetPointArrayStatus, 1,
   (char*)"V.GetPointArrayStatus(int) -> int\nC++: int GetPointArrayStatus(int arr)\nV.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *arrName)\n\nThese methods allow you to load only selected subsets of the\nnodal variables defined over the mesh.\n"},
  {(char*)"GetNumberOfComponentsInPointArray", PyvtkLSDynaReader_GetNumberOfComponentsInPointArray, 1,
   (char*)"V.GetNumberOfComponentsInPointArray(int) -> int\nC++: int GetNumberOfComponentsInPointArray(int arr)\nV.GetNumberOfComponentsInPointArray(string) -> int\nC++: int GetNumberOfComponentsInPointArray(const char *arrName)\n\nThese methods allow you to load only selected subsets of the\nnodal variables defined over the mesh.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkLSDynaReader_GetNumberOfCellArrays, 1,
   (char*)"V.GetNumberOfCellArrays(int) -> int\nC++: int GetNumberOfCellArrays(int cellType)\n\nRoutines that allow the status of a cell variable to be adjusted\nor queried independent of the output mesh.  The cellType\nparameter should be one of: LS_POINT, LS_BEAM, LS_SHELL,\nLS_THICK_SHELL, LS_SOLID, LS_RIGID_BODY, or LS_ROAD_SURFACE\n"},
  {(char*)"GetCellArrayName", PyvtkLSDynaReader_GetCellArrayName, 1,
   (char*)"V.GetCellArrayName(int, int) -> string\nC++: const char *GetCellArrayName(int cellType, int arr)\n\nRoutines that allow the status of a cell variable to be adjusted\nor queried independent of the output mesh.  The cellType\nparameter should be one of: LS_POINT, LS_BEAM, LS_SHELL,\nLS_THICK_SHELL, LS_SOLID, LS_RIGID_BODY, or LS_ROAD_SURFACE\n"},
  {(char*)"SetCellArrayStatus", PyvtkLSDynaReader_SetCellArrayStatus, 1,
   (char*)"V.SetCellArrayStatus(int, int, int)\nC++: virtual void SetCellArrayStatus(int cellType, int arr,\n    int status)\nV.SetCellArrayStatus(int, string, int)\nC++: virtual void SetCellArrayStatus(int cellType,\n    const char *arrName, int status)\n\nRoutines that allow the status of a cell variable to be adjusted\nor queried independent of the output mesh.  The cellType\nparameter should be one of: LS_POINT, LS_BEAM, LS_SHELL,\nLS_THICK_SHELL, LS_SOLID, LS_RIGID_BODY, or LS_ROAD_SURFACE\n"},
  {(char*)"GetCellArrayStatus", PyvtkLSDynaReader_GetCellArrayStatus, 1,
   (char*)"V.GetCellArrayStatus(int, int) -> int\nC++: int GetCellArrayStatus(int cellType, int arr)\nV.GetCellArrayStatus(int, string) -> int\nC++: int GetCellArrayStatus(int cellType, const char *arrName)\n\nRoutines that allow the status of a cell variable to be adjusted\nor queried independent of the output mesh.  The cellType\nparameter should be one of: LS_POINT, LS_BEAM, LS_SHELL,\nLS_THICK_SHELL, LS_SOLID, LS_RIGID_BODY, or LS_ROAD_SURFACE\n"},
  {(char*)"GetNumberOfComponentsInCellArray", PyvtkLSDynaReader_GetNumberOfComponentsInCellArray, 1,
   (char*)"V.GetNumberOfComponentsInCellArray(int, int) -> int\nC++: int GetNumberOfComponentsInCellArray(int cellType, int arr)\nV.GetNumberOfComponentsInCellArray(int, string) -> int\nC++: int GetNumberOfComponentsInCellArray(int cellType,\n    const char *arrName)\n\nRoutines that allow the status of a cell variable to be adjusted\nor queried independent of the output mesh.  The cellType\nparameter should be one of: LS_POINT, LS_BEAM, LS_SHELL,\nLS_THICK_SHELL, LS_SOLID, LS_RIGID_BODY, or LS_ROAD_SURFACE\n"},
  {(char*)"GetNumberOfSolidArrays", PyvtkLSDynaReader_GetNumberOfSolidArrays, 1,
   (char*)"V.GetNumberOfSolidArrays() -> int\nC++: int GetNumberOfSolidArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetSolidArrayName", PyvtkLSDynaReader_GetSolidArrayName, 1,
   (char*)"V.GetSolidArrayName(int) -> string\nC++: const char *GetSolidArrayName(int)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"SetSolidArrayStatus", PyvtkLSDynaReader_SetSolidArrayStatus, 1,
   (char*)"V.SetSolidArrayStatus(int, int)\nC++: virtual void SetSolidArrayStatus(int arr, int status)\nV.SetSolidArrayStatus(string, int)\nC++: virtual void SetSolidArrayStatus(const char *arrName,\n    int status)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetSolidArrayStatus", PyvtkLSDynaReader_GetSolidArrayStatus, 1,
   (char*)"V.GetSolidArrayStatus(int) -> int\nC++: int GetSolidArrayStatus(int arr)\nV.GetSolidArrayStatus(string) -> int\nC++: int GetSolidArrayStatus(const char *arrName)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetNumberOfComponentsInSolidArray", PyvtkLSDynaReader_GetNumberOfComponentsInSolidArray, 1,
   (char*)"V.GetNumberOfComponentsInSolidArray(int) -> int\nC++: int GetNumberOfComponentsInSolidArray(int a)\nV.GetNumberOfComponentsInSolidArray(string) -> int\nC++: int GetNumberOfComponentsInSolidArray(const char *arrName)\n\n"},
  {(char*)"GetNumberOfThickShellArrays", PyvtkLSDynaReader_GetNumberOfThickShellArrays, 1,
   (char*)"V.GetNumberOfThickShellArrays() -> int\nC++: int GetNumberOfThickShellArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetThickShellArrayName", PyvtkLSDynaReader_GetThickShellArrayName, 1,
   (char*)"V.GetThickShellArrayName(int) -> string\nC++: const char *GetThickShellArrayName(int)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"SetThickShellArrayStatus", PyvtkLSDynaReader_SetThickShellArrayStatus, 1,
   (char*)"V.SetThickShellArrayStatus(int, int)\nC++: virtual void SetThickShellArrayStatus(int arr, int status)\nV.SetThickShellArrayStatus(string, int)\nC++: virtual void SetThickShellArrayStatus(const char *arrName,\n    int status)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetThickShellArrayStatus", PyvtkLSDynaReader_GetThickShellArrayStatus, 1,
   (char*)"V.GetThickShellArrayStatus(int) -> int\nC++: int GetThickShellArrayStatus(int arr)\nV.GetThickShellArrayStatus(string) -> int\nC++: int GetThickShellArrayStatus(const char *arrName)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetNumberOfComponentsInThickShellArray", PyvtkLSDynaReader_GetNumberOfComponentsInThickShellArray, 1,
   (char*)"V.GetNumberOfComponentsInThickShellArray(int) -> int\nC++: int GetNumberOfComponentsInThickShellArray(int a)\nV.GetNumberOfComponentsInThickShellArray(string) -> int\nC++: int GetNumberOfComponentsInThickShellArray(\n    const char *arrName)\n\n"},
  {(char*)"GetNumberOfShellArrays", PyvtkLSDynaReader_GetNumberOfShellArrays, 1,
   (char*)"V.GetNumberOfShellArrays() -> int\nC++: int GetNumberOfShellArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetShellArrayName", PyvtkLSDynaReader_GetShellArrayName, 1,
   (char*)"V.GetShellArrayName(int) -> string\nC++: const char *GetShellArrayName(int)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"SetShellArrayStatus", PyvtkLSDynaReader_SetShellArrayStatus, 1,
   (char*)"V.SetShellArrayStatus(int, int)\nC++: virtual void SetShellArrayStatus(int arr, int status)\nV.SetShellArrayStatus(string, int)\nC++: virtual void SetShellArrayStatus(const char *arrName,\n    int status)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetShellArrayStatus", PyvtkLSDynaReader_GetShellArrayStatus, 1,
   (char*)"V.GetShellArrayStatus(int) -> int\nC++: int GetShellArrayStatus(int arr)\nV.GetShellArrayStatus(string) -> int\nC++: int GetShellArrayStatus(const char *arrName)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetNumberOfComponentsInShellArray", PyvtkLSDynaReader_GetNumberOfComponentsInShellArray, 1,
   (char*)"V.GetNumberOfComponentsInShellArray(int) -> int\nC++: int GetNumberOfComponentsInShellArray(int a)\nV.GetNumberOfComponentsInShellArray(string) -> int\nC++: int GetNumberOfComponentsInShellArray(const char *arrName)\n\n"},
  {(char*)"GetNumberOfRigidBodyArrays", PyvtkLSDynaReader_GetNumberOfRigidBodyArrays, 1,
   (char*)"V.GetNumberOfRigidBodyArrays() -> int\nC++: int GetNumberOfRigidBodyArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetRigidBodyArrayName", PyvtkLSDynaReader_GetRigidBodyArrayName, 1,
   (char*)"V.GetRigidBodyArrayName(int) -> string\nC++: const char *GetRigidBodyArrayName(int)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"SetRigidBodyArrayStatus", PyvtkLSDynaReader_SetRigidBodyArrayStatus, 1,
   (char*)"V.SetRigidBodyArrayStatus(int, int)\nC++: virtual void SetRigidBodyArrayStatus(int arr, int status)\nV.SetRigidBodyArrayStatus(string, int)\nC++: virtual void SetRigidBodyArrayStatus(const char *arrName,\n    int status)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetRigidBodyArrayStatus", PyvtkLSDynaReader_GetRigidBodyArrayStatus, 1,
   (char*)"V.GetRigidBodyArrayStatus(int) -> int\nC++: int GetRigidBodyArrayStatus(int arr)\nV.GetRigidBodyArrayStatus(string) -> int\nC++: int GetRigidBodyArrayStatus(const char *arrName)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetNumberOfComponentsInRigidBodyArray", PyvtkLSDynaReader_GetNumberOfComponentsInRigidBodyArray, 1,
   (char*)"V.GetNumberOfComponentsInRigidBodyArray(int) -> int\nC++: int GetNumberOfComponentsInRigidBodyArray(int a)\nV.GetNumberOfComponentsInRigidBodyArray(string) -> int\nC++: int GetNumberOfComponentsInRigidBodyArray(\n    const char *arrName)\n\n"},
  {(char*)"GetNumberOfRoadSurfaceArrays", PyvtkLSDynaReader_GetNumberOfRoadSurfaceArrays, 1,
   (char*)"V.GetNumberOfRoadSurfaceArrays() -> int\nC++: int GetNumberOfRoadSurfaceArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetRoadSurfaceArrayName", PyvtkLSDynaReader_GetRoadSurfaceArrayName, 1,
   (char*)"V.GetRoadSurfaceArrayName(int) -> string\nC++: const char *GetRoadSurfaceArrayName(int)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"SetRoadSurfaceArrayStatus", PyvtkLSDynaReader_SetRoadSurfaceArrayStatus, 1,
   (char*)"V.SetRoadSurfaceArrayStatus(int, int)\nC++: virtual void SetRoadSurfaceArrayStatus(int arr, int status)\nV.SetRoadSurfaceArrayStatus(string, int)\nC++: virtual void SetRoadSurfaceArrayStatus(const char *arrName,\n    int status)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetRoadSurfaceArrayStatus", PyvtkLSDynaReader_GetRoadSurfaceArrayStatus, 1,
   (char*)"V.GetRoadSurfaceArrayStatus(int) -> int\nC++: int GetRoadSurfaceArrayStatus(int arr)\nV.GetRoadSurfaceArrayStatus(string) -> int\nC++: int GetRoadSurfaceArrayStatus(const char *arrName)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetNumberOfComponentsInRoadSurfaceArray", PyvtkLSDynaReader_GetNumberOfComponentsInRoadSurfaceArray, 1,
   (char*)"V.GetNumberOfComponentsInRoadSurfaceArray(int) -> int\nC++: int GetNumberOfComponentsInRoadSurfaceArray(int a)\nV.GetNumberOfComponentsInRoadSurfaceArray(string) -> int\nC++: int GetNumberOfComponentsInRoadSurfaceArray(\n    const char *arrName)\n\n"},
  {(char*)"GetNumberOfBeamArrays", PyvtkLSDynaReader_GetNumberOfBeamArrays, 1,
   (char*)"V.GetNumberOfBeamArrays() -> int\nC++: int GetNumberOfBeamArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetBeamArrayName", PyvtkLSDynaReader_GetBeamArrayName, 1,
   (char*)"V.GetBeamArrayName(int) -> string\nC++: const char *GetBeamArrayName(int)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"SetBeamArrayStatus", PyvtkLSDynaReader_SetBeamArrayStatus, 1,
   (char*)"V.SetBeamArrayStatus(int, int)\nC++: virtual void SetBeamArrayStatus(int arr, int status)\nV.SetBeamArrayStatus(string, int)\nC++: virtual void SetBeamArrayStatus(const char *arrName,\n    int status)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetBeamArrayStatus", PyvtkLSDynaReader_GetBeamArrayStatus, 1,
   (char*)"V.GetBeamArrayStatus(int) -> int\nC++: int GetBeamArrayStatus(int arr)\nV.GetBeamArrayStatus(string) -> int\nC++: int GetBeamArrayStatus(const char *arrName)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetNumberOfComponentsInBeamArray", PyvtkLSDynaReader_GetNumberOfComponentsInBeamArray, 1,
   (char*)"V.GetNumberOfComponentsInBeamArray(int) -> int\nC++: int GetNumberOfComponentsInBeamArray(int a)\nV.GetNumberOfComponentsInBeamArray(string) -> int\nC++: int GetNumberOfComponentsInBeamArray(const char *arrName)\n\n"},
  {(char*)"GetNumberOfParticleArrays", PyvtkLSDynaReader_GetNumberOfParticleArrays, 1,
   (char*)"V.GetNumberOfParticleArrays() -> int\nC++: int GetNumberOfParticleArrays()\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetParticleArrayName", PyvtkLSDynaReader_GetParticleArrayName, 1,
   (char*)"V.GetParticleArrayName(int) -> string\nC++: const char *GetParticleArrayName(int)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"SetParticleArrayStatus", PyvtkLSDynaReader_SetParticleArrayStatus, 1,
   (char*)"V.SetParticleArrayStatus(int, int)\nC++: virtual void SetParticleArrayStatus(int arr, int status)\nV.SetParticleArrayStatus(string, int)\nC++: virtual void SetParticleArrayStatus(const char *arrName,\n    int status)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetParticleArrayStatus", PyvtkLSDynaReader_GetParticleArrayStatus, 1,
   (char*)"V.GetParticleArrayStatus(int) -> int\nC++: int GetParticleArrayStatus(int arr)\nV.GetParticleArrayStatus(string) -> int\nC++: int GetParticleArrayStatus(const char *arrName)\n\nThese methods allow you to load only selected subsets of the cell\nvariables defined over the mesh.\n"},
  {(char*)"GetNumberOfComponentsInParticleArray", PyvtkLSDynaReader_GetNumberOfComponentsInParticleArray, 1,
   (char*)"V.GetNumberOfComponentsInParticleArray(int) -> int\nC++: int GetNumberOfComponentsInParticleArray(int a)\nV.GetNumberOfComponentsInParticleArray(string) -> int\nC++: int GetNumberOfComponentsInParticleArray(const char *arrName)\n\n"},
  {(char*)"SetDeformedMesh", PyvtkLSDynaReader_SetDeformedMesh, 1,
   (char*)"V.SetDeformedMesh(int)\nC++: void SetDeformedMesh(int a)\n\nShould deflected coordinates be used, or should the mesh remain\nundeflected?  By default, this is true but its value is ignored\nif the nodal \"Deflection\" array is not set to be loaded.\n"},
  {(char*)"GetDeformedMesh", PyvtkLSDynaReader_GetDeformedMesh, 1,
   (char*)"V.GetDeformedMesh() -> int\nC++: int GetDeformedMesh()\n\nShould deflected coordinates be used, or should the mesh remain\nundeflected?  By default, this is true but its value is ignored\nif the nodal \"Deflection\" array is not set to be loaded.\n"},
  {(char*)"DeformedMeshOn", PyvtkLSDynaReader_DeformedMeshOn, 1,
   (char*)"V.DeformedMeshOn()\nC++: void DeformedMeshOn()\n\nShould deflected coordinates be used, or should the mesh remain\nundeflected?  By default, this is true but its value is ignored\nif the nodal \"Deflection\" array is not set to be loaded.\n"},
  {(char*)"DeformedMeshOff", PyvtkLSDynaReader_DeformedMeshOff, 1,
   (char*)"V.DeformedMeshOff()\nC++: void DeformedMeshOff()\n\nShould deflected coordinates be used, or should the mesh remain\nundeflected?  By default, this is true but its value is ignored\nif the nodal \"Deflection\" array is not set to be loaded.\n"},
  {(char*)"SetRemoveDeletedCells", PyvtkLSDynaReader_SetRemoveDeletedCells, 1,
   (char*)"V.SetRemoveDeletedCells(int)\nC++: void SetRemoveDeletedCells(int a)\n\nShould dead cells be removed from the mesh?  Cells are marked\ndead by setting the corresponding entry in the cellarray \"Death\"\nto 0. Cells that are not dead have the corresponding entry in the\ncell array \"Death\" set to their material ID.  By default, this is\ntrue but its value is ignored if the cell \"Death\" array is not\nset to be loaded. It is also ignored if the database's element\ndeletion option is set to denote points(not cells) as deleted; in\nthat case, \"Death\" will appear to be a point array.\n"},
  {(char*)"GetRemoveDeletedCells", PyvtkLSDynaReader_GetRemoveDeletedCells, 1,
   (char*)"V.GetRemoveDeletedCells() -> int\nC++: int GetRemoveDeletedCells()\n\nShould dead cells be removed from the mesh?  Cells are marked\ndead by setting the corresponding entry in the cellarray \"Death\"\nto 0. Cells that are not dead have the corresponding entry in the\ncell array \"Death\" set to their material ID.  By default, this is\ntrue but its value is ignored if the cell \"Death\" array is not\nset to be loaded. It is also ignored if the database's element\ndeletion option is set to denote points(not cells) as deleted; in\nthat case, \"Death\" will appear to be a point array.\n"},
  {(char*)"RemoveDeletedCellsOn", PyvtkLSDynaReader_RemoveDeletedCellsOn, 1,
   (char*)"V.RemoveDeletedCellsOn()\nC++: void RemoveDeletedCellsOn()\n\nShould dead cells be removed from the mesh?  Cells are marked\ndead by setting the corresponding entry in the cellarray \"Death\"\nto 0. Cells that are not dead have the corresponding entry in the\ncell array \"Death\" set to their material ID.  By default, this is\ntrue but its value is ignored if the cell \"Death\" array is not\nset to be loaded. It is also ignored if the database's element\ndeletion option is set to denote points(not cells) as deleted; in\nthat case, \"Death\" will appear to be a point array.\n"},
  {(char*)"RemoveDeletedCellsOff", PyvtkLSDynaReader_RemoveDeletedCellsOff, 1,
   (char*)"V.RemoveDeletedCellsOff()\nC++: void RemoveDeletedCellsOff()\n\nShould dead cells be removed from the mesh?  Cells are marked\ndead by setting the corresponding entry in the cellarray \"Death\"\nto 0. Cells that are not dead have the corresponding entry in the\ncell array \"Death\" set to their material ID.  By default, this is\ntrue but its value is ignored if the cell \"Death\" array is not\nset to be loaded. It is also ignored if the database's element\ndeletion option is set to denote points(not cells) as deleted; in\nthat case, \"Death\" will appear to be a point array.\n"},
  {(char*)"SetSplitByMaterialId", PyvtkLSDynaReader_SetSplitByMaterialId, 1,
   (char*)"V.SetSplitByMaterialId(int)\nC++: void SetSplitByMaterialId(int a)\n\nSplit each part into submeshes based on material ID. By default,\nthis is false and all cells of a given type (solid, thick shell,\nshell, ...) are in a single mesh.\n"},
  {(char*)"GetSplitByMaterialId", PyvtkLSDynaReader_GetSplitByMaterialId, 1,
   (char*)"V.GetSplitByMaterialId() -> int\nC++: int GetSplitByMaterialId()\n\nSplit each part into submeshes based on material ID. By default,\nthis is false and all cells of a given type (solid, thick shell,\nshell, ...) are in a single mesh.\n"},
  {(char*)"SplitByMaterialIdOn", PyvtkLSDynaReader_SplitByMaterialIdOn, 1,
   (char*)"V.SplitByMaterialIdOn()\nC++: void SplitByMaterialIdOn()\n\nSplit each part into submeshes based on material ID. By default,\nthis is false and all cells of a given type (solid, thick shell,\nshell, ...) are in a single mesh.\n"},
  {(char*)"SplitByMaterialIdOff", PyvtkLSDynaReader_SplitByMaterialIdOff, 1,
   (char*)"V.SplitByMaterialIdOff()\nC++: void SplitByMaterialIdOff()\n\nSplit each part into submeshes based on material ID. By default,\nthis is false and all cells of a given type (solid, thick shell,\nshell, ...) are in a single mesh.\n"},
  {(char*)"SetInputDeck", PyvtkLSDynaReader_SetInputDeck, 1,
   (char*)"V.SetInputDeck(string)\nC++: void SetInputDeck(char *)\n\nThe name of the input deck corresponding to the current database.\nThis is used to determine the part names associated with each\nmaterial ID. This file may be in two formats: a valid LSDyna\ninput deck or a short XML summary. If the file begins with\n\"<?xml\" then the summary format is used. Otherwise, the keyword\nformat is used and a summary file will be created if write\npermissions exist in the directory containing the keyword file.\nThe newly created summary will have \".k\" or \".key\" stripped from\nthe end of the keyword filename and \".lsdyna\" appended.\n"},
  {(char*)"GetInputDeck", PyvtkLSDynaReader_GetInputDeck, 1,
   (char*)"V.GetInputDeck() -> string\nC++: char *GetInputDeck()\n\nThe name of the input deck corresponding to the current database.\nThis is used to determine the part names associated with each\nmaterial ID. This file may be in two formats: a valid LSDyna\ninput deck or a short XML summary. If the file begins with\n\"<?xml\" then the summary format is used. Otherwise, the keyword\nformat is used and a summary file will be created if write\npermissions exist in the directory containing the keyword file.\nThe newly created summary will have \".k\" or \".key\" stripped from\nthe end of the keyword filename and \".lsdyna\" appended.\n"},
  {(char*)"GetNumberOfPartArrays", PyvtkLSDynaReader_GetNumberOfPartArrays, 1,
   (char*)"V.GetNumberOfPartArrays() -> int\nC++: int GetNumberOfPartArrays()\n\nThese methods allow you to load only selected parts of the input.\nIf InputDeck points to a valid keyword file (or summary), then\npart names will be taken from that file. Otherwise, when\narbitrary material numbering is used, parts will be named \"PartXXX\n(MatlYYY)\" where XXX is an increasing sequential number and YYY\nis the respective material ID. If no input deck is specified and\narbitrary arbitrary material numbering is not used, parts will be\nnamed \"PartXXX\" where XXX is a sequential material ID.\n"},
  {(char*)"GetPartArrayName", PyvtkLSDynaReader_GetPartArrayName, 1,
   (char*)"V.GetPartArrayName(int) -> string\nC++: const char *GetPartArrayName(int)\n\nThese methods allow you to load only selected parts of the input.\nIf InputDeck points to a valid keyword file (or summary), then\npart names will be taken from that file. Otherwise, when\narbitrary material numbering is used, parts will be named \"PartXXX\n(MatlYYY)\" where XXX is an increasing sequential number and YYY\nis the respective material ID. If no input deck is specified and\narbitrary arbitrary material numbering is not used, parts will be\nnamed \"PartXXX\" where XXX is a sequential material ID.\n"},
  {(char*)"SetPartArrayStatus", PyvtkLSDynaReader_SetPartArrayStatus, 1,
   (char*)"V.SetPartArrayStatus(int, int)\nC++: virtual void SetPartArrayStatus(int arr, int status)\nV.SetPartArrayStatus(string, int)\nC++: virtual void SetPartArrayStatus(const char *partName,\n    int status)\n\nThese methods allow you to load only selected parts of the input.\nIf InputDeck points to a valid keyword file (or summary), then\npart names will be taken from that file. Otherwise, when\narbitrary material numbering is used, parts will be named \"PartXXX\n(MatlYYY)\" where XXX is an increasing sequential number and YYY\nis the respective material ID. If no input deck is specified and\narbitrary arbitrary material numbering is not used, parts will be\nnamed \"PartXXX\" where XXX is a sequential material ID.\n"},
  {(char*)"GetPartArrayStatus", PyvtkLSDynaReader_GetPartArrayStatus, 1,
   (char*)"V.GetPartArrayStatus(int) -> int\nC++: int GetPartArrayStatus(int arr)\nV.GetPartArrayStatus(string) -> int\nC++: int GetPartArrayStatus(const char *partName)\n\nThese methods allow you to load only selected parts of the input.\nIf InputDeck points to a valid keyword file (or summary), then\npart names will be taken from that file. Otherwise, when\narbitrary material numbering is used, parts will be named \"PartXXX\n(MatlYYY)\" where XXX is an increasing sequential number and YYY\nis the respective material ID. If no input deck is specified and\narbitrary arbitrary material numbering is not used, parts will be\nnamed \"PartXXX\" where XXX is a sequential material ID.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLSDynaReader_StaticNew()
{
  return vtkLSDynaReader::New();
}

PyObject *PyVTKClass_vtkLSDynaReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLSDynaReader_StaticNew,
    PyvtkLSDynaReader_Methods,
    "vtkLSDynaReader", modulename,
    NULL, NULL,
    PyvtkLSDynaReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"PARTICLE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"BEAM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SHELL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"THICK_SHELL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"SOLID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"RIGID_BODY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"ROAD_SURFACE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"NUM_CELL_TYPES", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkLSDynaReader_Doc()
{
  static const char *docstring[] = {
    "vtkLSDynaReader - Read LS-Dyna databases (d3plot)\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "This filter reads LS-Dyna databases.\n\nThe Set/GetFileName() routines are actually wrappers around the\nSet/GetDatabaseDirectory() members; the actual filename you choose is\nirrelevant -- only the directory name is used.  This is done in order\nto accommodate ParaView.\n\nNote that this reader produces 7 output meshes. These meshes are\nrequired as several attributes are defined on subsets of the mesh. ",
    "\nBelow is a list of meshes in the order they are output and an\nexplanation of which attributes are unique to each mesh:\n- solid (3D) elements: number of integration points are different\n  than 2D\n- thick shell elements: number of integration points are different\n  than planar 2D\n- shell (2D) elements: number of integration points are different\n  than 3D\n- rigid surfaces: can't have deflection, onl",
    "y velocity, accel, etc.\n- road surfaces: have only a \"segment ID\" (serves as material ID) and\na velocity.\n- beam elements: have Frenet (TNB) frame and cross-section attributes\n  (shape and size)\n- spherical particle hydrodynamics (SPH) elements: have a radius of\n  influence, internal energy, etc. Because each mesh has its own cell\nattributes, the vtkLSDynaReader has a rather large API.  Instead of",
    " a\nsingle set of routines to query and set cell array names and status,\n  one exists for each possible output mesh. Also, GetNumberOfCells()\n  will return the sum of all the cells in all 7 meshes.  If you want\n  the number of cells in a specific mesh, there are separate routines\nfor each mesh type.\n\n\"Developer Notes\":\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLSDynaReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLSDynaReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLSDynaReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

