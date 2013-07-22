// python wrapper for vtkSelectionSource
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
#include "vtkSelectionSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSelectionSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSelectionSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSelectionSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSelectionSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkSelectionSource_Doc();


static PyObject *
PyvtkSelectionSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

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
      tempr = op->vtkSelectionSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

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
      tempr = op->vtkSelectionSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkSelectionSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSelectionSource::NewInstance();
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
PyvtkSelectionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSelectionSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSelectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddID(temp0, temp1);
      }
    else
      {
      op->vtkSelectionSource::AddID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddStringID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddStringID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddStringID(temp0, temp1);
      }
    else
      {
      op->vtkSelectionSource::AddStringID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  double temp0;
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
      op->AddLocation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSelectionSource::AddLocation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddThreshold(temp0, temp1);
      }
    else
      {
      op->vtkSelectionSource::AddThreshold(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddBlock(temp0);
      }
    else
      {
      op->vtkSelectionSource::AddBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllIDs();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllStringIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllStringIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllStringIDs();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllStringIDs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllThresholds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllThresholds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllThresholds();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllThresholds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLocations();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllLocations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllBlocks();
      }
    else
      {
      op->vtkSelectionSource::RemoveAllBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContentType(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetContentType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetContentType();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetContentType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldType();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetFieldType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContainingCells(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetContainingCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetContainingCells();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetContainingCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverse(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetInverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInverse();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetInverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayComponent(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetArrayComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayComponent();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetArrayComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeIndex(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetCompositeIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositeIndex();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetCompositeIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHierarchicalLevel(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetHierarchicalLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHierarchicalLevel();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetHierarchicalLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHierarchicalIndex(temp0);
      }
    else
      {
      op->vtkSelectionSource::SetHierarchicalIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHierarchicalIndex();
      }
    else
      {
      tempr = op->vtkSelectionSource::GetHierarchicalIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectionSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectionSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectionSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectionSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSelectionSource\nC++: vtkSelectionSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectionSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectionSource\nC++: vtkSelectionSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddID", PyvtkSelectionSource_AddID, 1,
   (char*)"V.AddID(int, int)\nC++: void AddID(vtkIdType piece, vtkIdType id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {(char*)"AddStringID", PyvtkSelectionSource_AddStringID, 1,
   (char*)"V.AddStringID(int, string)\nC++: void AddStringID(vtkIdType piece, const char *id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {(char*)"AddLocation", PyvtkSelectionSource_AddLocation, 1,
   (char*)"V.AddLocation(float, float, float)\nC++: void AddLocation(double x, double y, double z)\n\nAdd a point in world space to probe at.\n"},
  {(char*)"AddThreshold", PyvtkSelectionSource_AddThreshold, 1,
   (char*)"V.AddThreshold(float, float)\nC++: void AddThreshold(double min, double max)\n\nAdd a value range to threshold within.\n"},
  {(char*)"AddBlock", PyvtkSelectionSource_AddBlock, 1,
   (char*)"V.AddBlock(int)\nC++: void AddBlock(vtkIdType blockno)\n\nAdd the flat-index/composite index for a block.\n"},
  {(char*)"RemoveAllIDs", PyvtkSelectionSource_RemoveAllIDs, 1,
   (char*)"V.RemoveAllIDs()\nC++: void RemoveAllIDs()\n\nRemoves all IDs.\n"},
  {(char*)"RemoveAllStringIDs", PyvtkSelectionSource_RemoveAllStringIDs, 1,
   (char*)"V.RemoveAllStringIDs()\nC++: void RemoveAllStringIDs()\n\nRemoves all IDs.\n"},
  {(char*)"RemoveAllThresholds", PyvtkSelectionSource_RemoveAllThresholds, 1,
   (char*)"V.RemoveAllThresholds()\nC++: void RemoveAllThresholds()\n\nRemove all thresholds added with AddThreshold.\n"},
  {(char*)"RemoveAllLocations", PyvtkSelectionSource_RemoveAllLocations, 1,
   (char*)"V.RemoveAllLocations()\nC++: void RemoveAllLocations()\n\nRemove all locations added with AddLocation.\n"},
  {(char*)"RemoveAllBlocks", PyvtkSelectionSource_RemoveAllBlocks, 1,
   (char*)"V.RemoveAllBlocks()\nC++: void RemoveAllBlocks()\n\nRemove all blocks added with AddBlock.\n"},
  {(char*)"SetContentType", PyvtkSelectionSource_SetContentType, 1,
   (char*)"V.SetContentType(int)\nC++: void SetContentType(int a)\n\nSet the content type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionContent.\n"},
  {(char*)"GetContentType", PyvtkSelectionSource_GetContentType, 1,
   (char*)"V.GetContentType() -> int\nC++: int GetContentType()\n\nSet the content type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionContent.\n"},
  {(char*)"SetFieldType", PyvtkSelectionSource_SetFieldType, 1,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int a)\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {(char*)"GetFieldType", PyvtkSelectionSource_GetFieldType, 1,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {(char*)"SetContainingCells", PyvtkSelectionSource_SetContainingCells, 1,
   (char*)"V.SetContainingCells(int)\nC++: void SetContainingCells(int a)\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {(char*)"GetContainingCells", PyvtkSelectionSource_GetContainingCells, 1,
   (char*)"V.GetContainingCells() -> int\nC++: int GetContainingCells()\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {(char*)"SetInverse", PyvtkSelectionSource_SetInverse, 1,
   (char*)"V.SetInverse(int)\nC++: void SetInverse(int a)\n\nDetermines whether the selection describes what to include or\nexclude. Default is 0, meaning include.\n"},
  {(char*)"GetInverse", PyvtkSelectionSource_GetInverse, 1,
   (char*)"V.GetInverse() -> int\nC++: int GetInverse()\n\nDetermines whether the selection describes what to include or\nexclude. Default is 0, meaning include.\n"},
  {(char*)"SetArrayName", PyvtkSelectionSource_SetArrayName, 1,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nAccess to the name of the selection's subset description array.\n"},
  {(char*)"GetArrayName", PyvtkSelectionSource_GetArrayName, 1,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nAccess to the name of the selection's subset description array.\n"},
  {(char*)"SetArrayComponent", PyvtkSelectionSource_SetArrayComponent, 1,
   (char*)"V.SetArrayComponent(int)\nC++: void SetArrayComponent(int a)\n\nAccess to the component number for the array specified by\nArrayName. Default is component 0. Use -1 for magnitude.\n"},
  {(char*)"GetArrayComponent", PyvtkSelectionSource_GetArrayComponent, 1,
   (char*)"V.GetArrayComponent() -> int\nC++: int GetArrayComponent()\n\nAccess to the component number for the array specified by\nArrayName. Default is component 0. Use -1 for magnitude.\n"},
  {(char*)"SetCompositeIndex", PyvtkSelectionSource_SetCompositeIndex, 1,
   (char*)"V.SetCompositeIndex(int)\nC++: void SetCompositeIndex(int a)\n\nIf CompositeIndex < 0 then COMPOSITE_INDEX() is not added to the\noutput.\n"},
  {(char*)"GetCompositeIndex", PyvtkSelectionSource_GetCompositeIndex, 1,
   (char*)"V.GetCompositeIndex() -> int\nC++: int GetCompositeIndex()\n\nIf CompositeIndex < 0 then COMPOSITE_INDEX() is not added to the\noutput.\n"},
  {(char*)"SetHierarchicalLevel", PyvtkSelectionSource_SetHierarchicalLevel, 1,
   (char*)"V.SetHierarchicalLevel(int)\nC++: void SetHierarchicalLevel(int a)\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {(char*)"GetHierarchicalLevel", PyvtkSelectionSource_GetHierarchicalLevel, 1,
   (char*)"V.GetHierarchicalLevel() -> int\nC++: int GetHierarchicalLevel()\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {(char*)"SetHierarchicalIndex", PyvtkSelectionSource_SetHierarchicalIndex, 1,
   (char*)"V.SetHierarchicalIndex(int)\nC++: void SetHierarchicalIndex(int a)\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {(char*)"GetHierarchicalIndex", PyvtkSelectionSource_GetHierarchicalIndex, 1,
   (char*)"V.GetHierarchicalIndex() -> int\nC++: int GetHierarchicalIndex()\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectionSource_StaticNew()
{
  return vtkSelectionSource::New();
}

PyObject *PyVTKClass_vtkSelectionSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectionSource_StaticNew,
    PyvtkSelectionSource_Methods,
    "vtkSelectionSource", modulename,
    NULL, NULL,
    PyvtkSelectionSource_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSelectionSource_Doc()
{
  static const char *docstring[] = {
    "vtkSelectionSource - Generate selection from given set of ids\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectionSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectionSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

