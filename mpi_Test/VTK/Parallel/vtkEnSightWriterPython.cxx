// python wrapper for vtkEnSightWriter
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
#include "vtkEnSightWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEnSightWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEnSightWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEnSightWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEnSightWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkEnSightWriter_Doc();


static PyObject *
PyvtkEnSightWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      tempr = op->vtkEnSightWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      tempr = op->vtkEnSightWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  vtkEnSightWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEnSightWriter::NewInstance();
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
PyvtkEnSightWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEnSightWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEnSightWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetProcessNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessNumber(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetProcessNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetProcessNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessNumber();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetProcessNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPath(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPath();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetBaseName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      tempr = op->vtkEnSightWriter::GetBaseName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
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
      op->vtkEnSightWriter::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStep();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevel(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGhostLevel();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetGhostLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetTransientGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransientGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransientGeometry(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetTransientGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetTransientGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransientGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransientGeometry();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetTransientGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfBlocks(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetNumberOfBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBlocks();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetNumberOfBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteCaseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCaseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteCaseFile(temp0);
      }
    else
      {
      op->vtkEnSightWriter::WriteCaseFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteSOSCaseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSOSCaseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteSOSCaseFile(temp0);
      }
    else
      {
      op->vtkEnSightWriter::WriteSOSCaseFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  vtkModelMetadata *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkModelMetadata"))
    {
    if (ap.IsBound())
      {
      op->SetModelMetadata(temp0);
      }
    else
      {
      op->vtkEnSightWriter::SetModelMetadata(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  vtkModelMetadata *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModelMetadata();
      }
    else
      {
      tempr = op->vtkEnSightWriter::GetModelMetadata();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSightWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSightWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSightWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSightWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEnSightWriter\nC++: vtkEnSightWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSightWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSightWriter\nC++: vtkEnSightWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProcessNumber", PyvtkEnSightWriter_SetProcessNumber, 1,
   (char*)"V.SetProcessNumber(int)\nC++: void SetProcessNumber(int a)\n\n"},
  {(char*)"GetProcessNumber", PyvtkEnSightWriter_GetProcessNumber, 1,
   (char*)"V.GetProcessNumber() -> int\nC++: int GetProcessNumber()\n\n"},
  {(char*)"SetPath", PyvtkEnSightWriter_SetPath, 1,
   (char*)"V.SetPath(string)\nC++: void SetPath(char *)\n\nSpecify path of EnSight data files to write.\n"},
  {(char*)"GetPath", PyvtkEnSightWriter_GetPath, 1,
   (char*)"V.GetPath() -> string\nC++: char *GetPath()\n\nSpecify path of EnSight data files to write.\n"},
  {(char*)"SetBaseName", PyvtkEnSightWriter_SetBaseName, 1,
   (char*)"V.SetBaseName(string)\nC++: void SetBaseName(char *)\n\nSpecify base name of EnSight data files to write.\n"},
  {(char*)"GetBaseName", PyvtkEnSightWriter_GetBaseName, 1,
   (char*)"V.GetBaseName() -> string\nC++: char *GetBaseName()\n\nSpecify base name of EnSight data files to write.\n"},
  {(char*)"SetFileName", PyvtkEnSightWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the path and base name of the output files.\n"},
  {(char*)"GetFileName", PyvtkEnSightWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the path and base name of the output files.\n"},
  {(char*)"SetTimeStep", PyvtkEnSightWriter_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\n"},
  {(char*)"GetTimeStep", PyvtkEnSightWriter_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\n"},
  {(char*)"SetGhostLevel", PyvtkEnSightWriter_SetGhostLevel, 1,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\n"},
  {(char*)"GetGhostLevel", PyvtkEnSightWriter_GetGhostLevel, 1,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\n"},
  {(char*)"SetTransientGeometry", PyvtkEnSightWriter_SetTransientGeometry, 1,
   (char*)"V.SetTransientGeometry(bool)\nC++: void SetTransientGeometry(bool a)\n\n"},
  {(char*)"GetTransientGeometry", PyvtkEnSightWriter_GetTransientGeometry, 1,
   (char*)"V.GetTransientGeometry() -> bool\nC++: bool GetTransientGeometry()\n\n"},
  {(char*)"SetNumberOfBlocks", PyvtkEnSightWriter_SetNumberOfBlocks, 1,
   (char*)"V.SetNumberOfBlocks(int)\nC++: void SetNumberOfBlocks(int a)\n\n"},
  {(char*)"GetNumberOfBlocks", PyvtkEnSightWriter_GetNumberOfBlocks, 1,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\n"},
  {(char*)"SetInput", PyvtkEnSightWriter_SetInput, 1,
   (char*)"V.SetInput(vtkUnstructuredGrid)\nC++: virtual void SetInput(vtkUnstructuredGrid *input)\n\nSpecify the input data or filter.\n"},
  {(char*)"GetInput", PyvtkEnSightWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetInput()\n\nSpecify the input data or filter.\n"},
  {(char*)"WriteCaseFile", PyvtkEnSightWriter_WriteCaseFile, 1,
   (char*)"V.WriteCaseFile(int)\nC++: virtual void WriteCaseFile(int TotalTimeSteps)\n\n"},
  {(char*)"WriteSOSCaseFile", PyvtkEnSightWriter_WriteSOSCaseFile, 1,
   (char*)"V.WriteSOSCaseFile(int)\nC++: virtual void WriteSOSCaseFile(int NumProcs)\n\n"},
  {(char*)"SetModelMetadata", PyvtkEnSightWriter_SetModelMetadata, 1,
   (char*)"V.SetModelMetadata(vtkModelMetadata)\nC++: virtual void SetModelMetadata(vtkModelMetadata *model)\n\n"},
  {(char*)"GetModelMetadata", PyvtkEnSightWriter_GetModelMetadata, 1,
   (char*)"V.GetModelMetadata() -> vtkModelMetadata\nC++: vtkModelMetadata *GetModelMetadata()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnSightWriter_StaticNew()
{
  return vtkEnSightWriter::New();
}

PyObject *PyVTKClass_vtkEnSightWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnSightWriter_StaticNew,
    PyvtkEnSightWriter_Methods,
    "vtkEnSightWriter", modulename,
    NULL, NULL,
    PyvtkEnSightWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkEnSightWriter_Doc()
{
  static const char *docstring[] = {
    "vtkEnSightWriter - write vtk unstructured grid data as an EnSight file\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkEnSightWriter is a source object that writes binary unstructured\ngrid data files in EnSight format. See EnSight Manual for format\ndetails\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems. Be sure to specify the endian-ness of the file when reading\nit into EnSight\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSightWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSightWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSightWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

