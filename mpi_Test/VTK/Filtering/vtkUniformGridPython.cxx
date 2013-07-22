// python wrapper for vtkUniformGrid
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
#include "vtkUniformGrid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUniformGrid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUniformGrid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUniformGridNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUniformGridNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDataNew
extern "C" { PyObject *PyVTKClass_vtkImageDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDataNew
#endif

static const char **PyvtkUniformGrid_Doc();


static PyObject *
PyvtkUniformGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      tempr = op->vtkUniformGrid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      tempr = op->vtkUniformGrid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkUniformGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUniformGrid::NewInstance();
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
PyvtkUniformGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUniformGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUniformGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->CopyStructure(temp0);
      }
    else
      {
      op->vtkUniformGrid::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectType();
      }
    else
      {
      tempr = op->vtkUniformGrid::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCell(temp0);
      }
    else
      {
      tempr = op->vtkUniformGrid::GetCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
    {
    if (ap.IsBound())
      {
      op->GetCell(temp0, temp1);
      }
    else
      {
      op->vtkUniformGrid::GetCell(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUniformGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkUniformGrid_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkUniformGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellType(temp0);
      }
    else
      {
      tempr = op->vtkUniformGrid::GetCellType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetCellPoints(temp0, temp1);
      }
    else
      {
      op->vtkUniformGrid::GetCellPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->GetPointCells(temp0, temp1);
      }
    else
      {
      op->vtkUniformGrid::GetPointCells(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkUniformGrid::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxCellSize();
      }
    else
      {
      tempr = op->vtkUniformGrid::GetMaxCellSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkUniformGrid::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkUniformGrid::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_BlankPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BlankPoint(temp0);
      }
    else
      {
      op->vtkUniformGrid::BlankPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_UnBlankPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnBlankPoint(temp0);
      }
    else
      {
      op->vtkUniformGrid::UnBlankPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_BlankCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->BlankCell(temp0);
      }
    else
      {
      op->vtkUniformGrid::BlankCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_UnBlankCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnBlankCell(temp0);
      }
    else
      {
      op->vtkUniformGrid::UnBlankCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetPointVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointVisibilityArray();
      }
    else
      {
      tempr = op->vtkUniformGrid::GetPointVisibilityArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_SetPointVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetPointVisibilityArray(temp0);
      }
    else
      {
      op->vtkUniformGrid::SetPointVisibilityArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCellVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellVisibilityArray();
      }
    else
      {
      tempr = op->vtkUniformGrid::GetCellVisibilityArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_SetCellVisibilityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellVisibilityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetCellVisibilityArray(temp0);
      }
    else
      {
      op->vtkUniformGrid::SetCellVisibilityArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsPointVisible(temp0);
      }
    else
      {
      tempr = op->vtkUniformGrid::IsPointVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsCellVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsCellVisible(temp0);
      }
    else
      {
      tempr = op->vtkUniformGrid::IsCellVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetPointBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointBlanking();
      }
    else
      {
      tempr = op->vtkUniformGrid::GetPointBlanking();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCellBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  unsigned char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellBlanking();
      }
    else
      {
      tempr = op->vtkUniformGrid::GetCellBlanking();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_NewImageDataCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewImageDataCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewImageDataCopy();
      }
    else
      {
      tempr = op->vtkUniformGrid::NewImageDataCopy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkUniformGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkUniformGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkUniformGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkUniformGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUniformGrid_GetData_Methods[] = {
  {NULL, PyvtkUniformGrid_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkUniformGrid_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkUniformGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniformGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkUniformGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkUniformGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkUniformGrid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an empty uniform grid.\n"},
  {(char*)"IsA", PyvtkUniformGrid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an empty uniform grid.\n"},
  {(char*)"NewInstance", PyvtkUniformGrid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUniformGrid\nC++: vtkUniformGrid *NewInstance()\n\nConstruct an empty uniform grid.\n"},
  {(char*)"SafeDownCast", PyvtkUniformGrid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUniformGrid\nC++: vtkUniformGrid *SafeDownCast(vtkObject* o)\n\nConstruct an empty uniform grid.\n"},
  {(char*)"CopyStructure", PyvtkUniformGrid_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: virtual void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an input image\ndata object.\n"},
  {(char*)"GetDataObjectType", PyvtkUniformGrid_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetCell", PyvtkUniformGrid_GetCell, 1,
   (char*)"V.GetCell(int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType cellId)\nV.GetCell(int, vtkGenericCell)\nC++: virtual void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellType", PyvtkUniformGrid_GetCellType, 1,
   (char*)"V.GetCellType(int) -> int\nC++: virtual int GetCellType(vtkIdType cellId)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetCellPoints", PyvtkUniformGrid_GetCellPoints, 1,
   (char*)"V.GetCellPoints(int, vtkIdList)\nC++: virtual void GetCellPoints(vtkIdType cellId,\n    vtkIdList *ptIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetPointCells", PyvtkUniformGrid_GetPointCells, 1,
   (char*)"V.GetPointCells(int, vtkIdList)\nC++: virtual void GetPointCells(vtkIdType ptId,\n    vtkIdList *cellIds)\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"Initialize", PyvtkUniformGrid_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"GetMaxCellSize", PyvtkUniformGrid_GetMaxCellSize, 1,
   (char*)"V.GetMaxCellSize() -> int\nC++: virtual int GetMaxCellSize()\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {(char*)"ShallowCopy", PyvtkUniformGrid_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkUniformGrid_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"BlankPoint", PyvtkUniformGrid_BlankPoint, 1,
   (char*)"V.BlankPoint(int)\nC++: virtual void BlankPoint(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {(char*)"UnBlankPoint", PyvtkUniformGrid_UnBlankPoint, 1,
   (char*)"V.UnBlankPoint(int)\nC++: virtual void UnBlankPoint(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {(char*)"BlankCell", PyvtkUniformGrid_BlankCell, 1,
   (char*)"V.BlankCell(int)\nC++: virtual void BlankCell(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid. These methods should be called\nonly after the dimensions of the grid are set.\n"},
  {(char*)"UnBlankCell", PyvtkUniformGrid_UnBlankCell, 1,
   (char*)"V.UnBlankCell(int)\nC++: virtual void UnBlankCell(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid. These methods should be called\nonly after the dimensions of the grid are set.\n"},
  {(char*)"GetPointVisibilityArray", PyvtkUniformGrid_GetPointVisibilityArray, 1,
   (char*)"V.GetPointVisibilityArray() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetPointVisibilityArray()\n\nGet the array that defines the blanking (visibility) of each\npoint.\n"},
  {(char*)"SetPointVisibilityArray", PyvtkUniformGrid_SetPointVisibilityArray, 1,
   (char*)"V.SetPointVisibilityArray(vtkUnsignedCharArray)\nC++: virtual void SetPointVisibilityArray(\n    vtkUnsignedCharArray *pointVisibility)\n\nSet an array that defines the (blanking) visibility of the points\nin the grid. Make sure that length of the visibility array\nmatches the number of points in the grid.\n"},
  {(char*)"GetCellVisibilityArray", PyvtkUniformGrid_GetCellVisibilityArray, 1,
   (char*)"V.GetCellVisibilityArray() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetCellVisibilityArray()\n\nGet the array that defines the blanking (visibility) of each\ncell.\n"},
  {(char*)"SetCellVisibilityArray", PyvtkUniformGrid_SetCellVisibilityArray, 1,
   (char*)"V.SetCellVisibilityArray(vtkUnsignedCharArray)\nC++: virtual void SetCellVisibilityArray(\n    vtkUnsignedCharArray *pointVisibility)\n\nSet an array that defines the (blanking) visibility of the cells\nin the grid. Make sure that length of the visibility array\nmatches the number of points in the grid.\n"},
  {(char*)"IsPointVisible", PyvtkUniformGrid_IsPointVisible, 1,
   (char*)"V.IsPointVisible(int) -> int\nC++: virtual unsigned char IsPointVisible(vtkIdType ptId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {(char*)"IsCellVisible", PyvtkUniformGrid_IsCellVisible, 1,
   (char*)"V.IsCellVisible(int) -> int\nC++: virtual unsigned char IsCellVisible(vtkIdType cellId)\n\nReturn non-zero value if specified cell is visible. These methods\nshould be called only after the dimensions of the grid are set.\n"},
  {(char*)"GetPointBlanking", PyvtkUniformGrid_GetPointBlanking, 1,
   (char*)"V.GetPointBlanking() -> int\nC++: virtual unsigned char GetPointBlanking()\n\nReturns 1 if there is any visibility constraint on the points, 0\notherwise.\n"},
  {(char*)"GetCellBlanking", PyvtkUniformGrid_GetCellBlanking, 1,
   (char*)"V.GetCellBlanking() -> int\nC++: virtual unsigned char GetCellBlanking()\n\nReturns 1 if there is any visibility constraint on the cells, 0\notherwise.\n"},
  {(char*)"NewImageDataCopy", PyvtkUniformGrid_NewImageDataCopy, 1,
   (char*)"V.NewImageDataCopy() -> vtkImageData\nC++: virtual vtkImageData *NewImageDataCopy()\n\n"},
  {(char*)"GetData", PyvtkUniformGrid_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkUniformGrid\nC++: static vtkUniformGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUniformGrid\nC++: static vtkUniformGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUniformGrid_StaticNew()
{
  return vtkUniformGrid::New();
}

PyObject *PyVTKClass_vtkUniformGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUniformGrid_StaticNew,
    PyvtkUniformGrid_Methods,
    "vtkUniformGrid", modulename,
    NULL, NULL,
    PyvtkUniformGrid_Doc(),
    PyVTKClass_vtkImageDataNew(modulename));
  return cls;
}

const char **PyvtkUniformGrid_Doc()
{
  static const char *docstring[] = {
    "vtkUniformGrid - image data with blanking\n\n",
    "Superclass: vtkImageData\n\n",
    "vtkUniformGrid is a subclass of vtkImageData. In addition to all the\nimage data functionality, it supports blanking.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUniformGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUniformGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUniformGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

