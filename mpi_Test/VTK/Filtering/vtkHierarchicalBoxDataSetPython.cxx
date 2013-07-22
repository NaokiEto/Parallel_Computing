// python wrapper for vtkHierarchicalBoxDataSet
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
#include "vtkHierarchicalBoxDataSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalBoxDataSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalBoxDataSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalBoxDataSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalBoxDataSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetNew
#endif

static const char **PyvtkHierarchicalBoxDataSet_Doc();


static PyObject *
PyvtkHierarchicalBoxDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

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
      tempr = op->vtkHierarchicalBoxDataSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

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
      tempr = op->vtkHierarchicalBoxDataSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  vtkHierarchicalBoxDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::NewInstance();
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
PyvtkHierarchicalBoxDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalBoxDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalBoxDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  vtkCompositeDataIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewIterator();
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::NewIterator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

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
      tempr = op->vtkHierarchicalBoxDataSet::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_SetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfLevels(temp0);
      }
    else
      {
      op->vtkHierarchicalBoxDataSet::SetNumberOfLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLevels();
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetNumberOfLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_SetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfDataSets(temp0, temp1);
      }
    else
      {
      op->vtkHierarchicalBoxDataSet::SetNumberOfDataSets(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfDataSets(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetNumberOfDataSets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_SetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetDataSet(temp0, temp1);
      }
    else
      {
      op->vtkHierarchicalBoxDataSet::SetDataSet(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_SetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  vtkUniformGrid *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkUniformGrid"))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->SetDataSet(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkHierarchicalBoxDataSet::SetDataSet(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_SetDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkHierarchicalBoxDataSet_SetDataSet_s1(self, args);
    case 5:
      return PyvtkHierarchicalBoxDataSet_SetDataSet_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSet");
  return NULL;
}



static PyObject *
PyvtkHierarchicalBoxDataSet_GetLevelMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevelMetaData(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetLevelMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_HasLevelMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasLevelMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasLevelMetaData(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::HasLevelMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMetaData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetMetaData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_GetMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMetaData(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_GetMetaData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkHierarchicalBoxDataSet_GetMetaData_s1(self, args);
    case 1:
      return PyvtkHierarchicalBoxDataSet_GetMetaData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMetaData");
  return NULL;
}



static PyObject *
PyvtkHierarchicalBoxDataSet_HasMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->HasMetaData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::HasMetaData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_HasMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    if (ap.IsBound())
      {
      tempr = op->HasMetaData(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::HasMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_HasMetaData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkHierarchicalBoxDataSet_HasMetaData_s1(self, args);
    case 1:
      return PyvtkHierarchicalBoxDataSet_HasMetaData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HasMetaData");
  return NULL;
}



static PyObject *
PyvtkHierarchicalBoxDataSet_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRefinementRatio(temp0, temp1);
      }
    else
      {
      op->vtkHierarchicalBoxDataSet::SetRefinementRatio(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetRefinementRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRefinementRatio(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetRefinementRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_GetRefinementRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRefinementRatio(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetRefinementRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalBoxDataSet_GetRefinementRatio_Methods[] = {
  {NULL, PyvtkHierarchicalBoxDataSet_GetRefinementRatio_s1, 1,
   (char*)"@I"},
  {NULL, PyvtkHierarchicalBoxDataSet_GetRefinementRatio_s2, 1,
   (char*)"@O *vtkCompositeDataIterator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkHierarchicalBoxDataSet_GetRefinementRatio(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHierarchicalBoxDataSet_GetRefinementRatio_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRefinementRatio");
  return NULL;
}



static PyObject *
PyvtkHierarchicalBoxDataSet_GenerateVisibilityArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVisibilityArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVisibilityArrays();
      }
    else
      {
      op->vtkHierarchicalBoxDataSet::GenerateVisibilityArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_BOX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BOX");

  vtkInformationIntegerVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkHierarchicalBoxDataSet::BOX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_BOX_DIMENSIONALITY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BOX_DIMENSIONALITY");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkHierarchicalBoxDataSet::BOX_DIMENSIONALITY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_REFINEMENT_RATIO(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REFINEMENT_RATIO");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkHierarchicalBoxDataSet::REFINEMENT_RATIO();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_NUMBER_OF_BLANKED_POINTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NUMBER_OF_BLANKED_POINTS");

  vtkInformationIdTypeKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkHierarchicalBoxDataSet::NUMBER_OF_BLANKED_POINTS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkHierarchicalBoxDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkHierarchicalBoxDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkHierarchicalBoxDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkHierarchicalBoxDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalBoxDataSet_GetData_Methods[] = {
  {NULL, PyvtkHierarchicalBoxDataSet_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkHierarchicalBoxDataSet_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkHierarchicalBoxDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHierarchicalBoxDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkHierarchicalBoxDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkHierarchicalBoxDataSet_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = NULL;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSet(temp0);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSet_GetFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSet *op = static_cast<vtkHierarchicalBoxDataSet *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlatIndex(temp0, temp1);
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSet::GetFlatIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalBoxDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalBoxDataSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalBoxDataSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalBoxDataSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalBoxDataSet_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewIterator", PyvtkHierarchicalBoxDataSet_NewIterator, 1,
   (char*)"V.NewIterator() -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n"},
  {(char*)"GetDataObjectType", PyvtkHierarchicalBoxDataSet_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"SetNumberOfLevels", PyvtkHierarchicalBoxDataSet_SetNumberOfLevels, 1,
   (char*)"V.SetNumberOfLevels(int)\nC++: void SetNumberOfLevels(unsigned int numLevels)\n\nSet the number of refinement levels. This call might cause\nallocation if the new number of levels is larger than the current\none.\n"},
  {(char*)"GetNumberOfLevels", PyvtkHierarchicalBoxDataSet_GetNumberOfLevels, 1,
   (char*)"V.GetNumberOfLevels() -> int\nC++: unsigned int GetNumberOfLevels()\n\nReturns the number of levels.\n"},
  {(char*)"SetNumberOfDataSets", PyvtkHierarchicalBoxDataSet_SetNumberOfDataSets, 1,
   (char*)"V.SetNumberOfDataSets(int, int)\nC++: void SetNumberOfDataSets(unsigned int level,\n    unsigned int numdatasets)\n\nSet the number of data set at a given level.\n"},
  {(char*)"GetNumberOfDataSets", PyvtkHierarchicalBoxDataSet_GetNumberOfDataSets, 1,
   (char*)"V.GetNumberOfDataSets(int) -> int\nC++: unsigned int GetNumberOfDataSets(unsigned int level)\n\nReturns the number of data sets available at any level.\n"},
  {(char*)"SetDataSet", PyvtkHierarchicalBoxDataSet_SetDataSet, 1,
   (char*)"V.SetDataSet(vtkCompositeDataIterator, vtkDataObject)\nC++: virtual void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj)\nV.SetDataSet(int, int, [int, int, int], [int, int, int],\n    vtkUniformGrid)\nC++: void SetDataSet(unsigned int level, unsigned int id,\n    int LoCorner[3], int HiCorner[3], vtkUniformGrid *dataSet)\n\nSets the data set at the location pointed by the iterator. The\niterator does not need to be iterating over this dataset itself.\nIt can be any composite datasite with similar structure (achieve\nby using CopyStructure). Un-hiding superclass overload.\n"},
  {(char*)"GetLevelMetaData", PyvtkHierarchicalBoxDataSet_GetLevelMetaData, 1,
   (char*)"V.GetLevelMetaData(int) -> vtkInformation\nC++: vtkInformation *GetLevelMetaData(unsigned int level)\n\nGet meta-data associated with a level. This may allocate a new\nvtkInformation object if none is already present. Use\nHasLevelMetaData to avoid unnecessary allocations.\n"},
  {(char*)"HasLevelMetaData", PyvtkHierarchicalBoxDataSet_HasLevelMetaData, 1,
   (char*)"V.HasLevelMetaData(int) -> int\nC++: int HasLevelMetaData(unsigned int level)\n\nReturns if meta-data exists for a given level.\n"},
  {(char*)"GetMetaData", PyvtkHierarchicalBoxDataSet_GetMetaData, 1,
   (char*)"V.GetMetaData(int, int) -> vtkInformation\nC++: vtkInformation *GetMetaData(unsigned int level,\n    unsigned int index)\nV.GetMetaData(vtkCompositeDataIterator) -> vtkInformation\nC++: virtual vtkInformation *GetMetaData(\n    vtkCompositeDataIterator *iter)\n\nGet meta-data associated with a dataset.  This may allocate a new\nvtkInformation object if none is already present. Use HasMetaData\nto avoid unnecessary allocations.\n"},
  {(char*)"HasMetaData", PyvtkHierarchicalBoxDataSet_HasMetaData, 1,
   (char*)"V.HasMetaData(int, int) -> int\nC++: int HasMetaData(unsigned int level, unsigned int index)\nV.HasMetaData(vtkCompositeDataIterator) -> int\nC++: virtual int HasMetaData(vtkCompositeDataIterator *iter)\n\nReturns if meta-data exists for a given dataset under a given\nlevel.\n"},
  {(char*)"SetRefinementRatio", PyvtkHierarchicalBoxDataSet_SetRefinementRatio, 1,
   (char*)"V.SetRefinementRatio(int, int)\nC++: void SetRefinementRatio(unsigned int level, int refRatio)\n\nSets the refinement of a given level. The spacing at level\nlevel+1 is defined as spacing(level+1) =\nspacing(level)/refRatio(level). Note that currently, this is not\nenforced by this class however some algorithms might not function\nproperly if the spacing in the blocks (vtkUniformGrid) does not\nmatch the one described by the refinement ratio.\n"},
  {(char*)"GetRefinementRatio", PyvtkHierarchicalBoxDataSet_GetRefinementRatio, 1,
   (char*)"V.GetRefinementRatio(int) -> int\nC++: int GetRefinementRatio(unsigned int level)\nV.GetRefinementRatio(vtkCompositeDataIterator) -> int\nC++: int GetRefinementRatio(vtkCompositeDataIterator *iter)\n\nReturns the refinement of a given level.\n"},
  {(char*)"GenerateVisibilityArrays", PyvtkHierarchicalBoxDataSet_GenerateVisibilityArrays, 1,
   (char*)"V.GenerateVisibilityArrays()\nC++: void GenerateVisibilityArrays()\n\nBlank lower level cells if they are overlapped by higher level\nones.\n"},
  {(char*)"BOX", PyvtkHierarchicalBoxDataSet_BOX, 1,
   (char*)"V.BOX() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *BOX()\n\n"},
  {(char*)"BOX_DIMENSIONALITY", PyvtkHierarchicalBoxDataSet_BOX_DIMENSIONALITY, 1,
   (char*)"V.BOX_DIMENSIONALITY() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *BOX_DIMENSIONALITY()\n\n"},
  {(char*)"REFINEMENT_RATIO", PyvtkHierarchicalBoxDataSet_REFINEMENT_RATIO, 1,
   (char*)"V.REFINEMENT_RATIO() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *REFINEMENT_RATIO()\n\n"},
  {(char*)"NUMBER_OF_BLANKED_POINTS", PyvtkHierarchicalBoxDataSet_NUMBER_OF_BLANKED_POINTS, 1,
   (char*)"V.NUMBER_OF_BLANKED_POINTS() -> vtkInformationIdTypeKey\nC++: static vtkInformationIdTypeKey *NUMBER_OF_BLANKED_POINTS()\n\n"},
  {(char*)"GetData", PyvtkHierarchicalBoxDataSet_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkHierarchicalBoxDataSet\nC++: static vtkHierarchicalBoxDataSet *GetData(\n    vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkHierarchicalBoxDataSet\nC++: static vtkHierarchicalBoxDataSet *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"GetDataSet", PyvtkHierarchicalBoxDataSet_GetDataSet, 1,
   (char*)"V.GetDataSet(vtkCompositeDataIterator) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(\n    vtkCompositeDataIterator *iter)\n\nUnhiding superclass method.\n"},
  {(char*)"GetFlatIndex", PyvtkHierarchicalBoxDataSet_GetFlatIndex, 1,
   (char*)"V.GetFlatIndex(int, int) -> int\nC++: unsigned int GetFlatIndex(unsigned int level,\n    unsigned int index)\n\nGiven the level and dataset index, returns the flat index\nprovided level and dataset index are valid.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalBoxDataSet_StaticNew()
{
  return vtkHierarchicalBoxDataSet::New();
}

PyObject *PyVTKClass_vtkHierarchicalBoxDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalBoxDataSet_StaticNew,
    PyvtkHierarchicalBoxDataSet_Methods,
    "vtkHierarchicalBoxDataSet", modulename,
    NULL, NULL,
    PyvtkHierarchicalBoxDataSet_Doc(),
    PyVTKClass_vtkCompositeDataSetNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalBoxDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalBoxDataSet - hierarchical dataset of vtkUniformGrids\n\n",
    "Superclass: vtkCompositeDataSet\n\n",
    "vtkHierarchicalBoxDataSet is a concrete implementation of\nvtkCompositeDataSet. The dataset type is restricted to\nvtkUniformGrid. Each dataset has an associated vtkAMRBox that\nrepresents it's region (similar to extent) in space.\n\nWarning:\n\nTo compute the cellId of a cell within a vtkUniformGrid with\nAMRBox=box, you should not use vtkUniformGrid::ComputeCellId( {x,y,z}\n) but instead use the followin",
    "g pseudo code: for (int i=0; i<3; i++)\n  {\n  cellDims[i] = box.HiCorner[i] - box.LoCorner[i] + 1;\n  } vtkIdType cellId =\n  (z-box.LoCorner[2])*cellDims[0]*cellDims[1] +\n  (y-box.LoCorner[1])*cellDims[0] +\n  (x-box.LoCorner[0]);\n\nNOTE vtkAMRBox is used to compute cell visibility, therefor it should\nbe dimensioned according to the visible region.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalBoxDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalBoxDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalBoxDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

