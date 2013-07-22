// python wrapper for vtkWeightedTransformFilter
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
#include "vtkWeightedTransformFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWeightedTransformFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWeightedTransformFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWeightedTransformFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWeightedTransformFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkWeightedTransformFilter_Doc();


static PyObject *
PyvtkWeightedTransformFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

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
      tempr = op->vtkWeightedTransformFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

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
      tempr = op->vtkWeightedTransformFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  vtkWeightedTransformFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWeightedTransformFilter::NewInstance();
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
PyvtkWeightedTransformFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkWeightedTransformFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkWeightedTransformFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

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
      tempr = op->vtkWeightedTransformFilter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetWeightArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWeightArray(temp0);
      }
    else
      {
      op->vtkWeightedTransformFilter::SetWeightArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetWeightArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWeightArray();
      }
    else
      {
      tempr = op->vtkWeightedTransformFilter::GetWeightArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetTransformIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransformIndexArray(temp0);
      }
    else
      {
      op->vtkWeightedTransformFilter::SetTransformIndexArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetTransformIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransformIndexArray();
      }
    else
      {
      tempr = op->vtkWeightedTransformFilter::GetTransformIndexArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetCellDataWeightArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellDataWeightArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellDataWeightArray(temp0);
      }
    else
      {
      op->vtkWeightedTransformFilter::SetCellDataWeightArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetCellDataWeightArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataWeightArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellDataWeightArray();
      }
    else
      {
      tempr = op->vtkWeightedTransformFilter::GetCellDataWeightArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetCellDataTransformIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellDataTransformIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellDataTransformIndexArray(temp0);
      }
    else
      {
      op->vtkWeightedTransformFilter::SetCellDataTransformIndexArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetCellDataTransformIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataTransformIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellDataTransformIndexArray();
      }
    else
      {
      tempr = op->vtkWeightedTransformFilter::GetCellDataTransformIndexArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0, temp1);
      }
    else
      {
      op->vtkWeightedTransformFilter::SetTransform(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  int temp0;
  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform(temp0);
      }
    else
      {
      tempr = op->vtkWeightedTransformFilter::GetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTransforms(temp0);
      }
    else
      {
      op->vtkWeightedTransformFilter::SetNumberOfTransforms(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTransforms();
      }
    else
      {
      tempr = op->vtkWeightedTransformFilter::GetNumberOfTransforms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_AddInputValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddInputValuesOn();
      }
    else
      {
      op->vtkWeightedTransformFilter::AddInputValuesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_AddInputValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddInputValuesOff();
      }
    else
      {
      op->vtkWeightedTransformFilter::AddInputValuesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetAddInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddInputValues(temp0);
      }
    else
      {
      op->vtkWeightedTransformFilter::SetAddInputValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetAddInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAddInputValues();
      }
    else
      {
      tempr = op->vtkWeightedTransformFilter::GetAddInputValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWeightedTransformFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkWeightedTransformFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWeightedTransformFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWeightedTransformFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWeightedTransformFilter\nC++: vtkWeightedTransformFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWeightedTransformFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWeightedTransformFilter\nC++: vtkWeightedTransformFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkWeightedTransformFilter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the filter's transforms.\n"},
  {(char*)"SetWeightArray", PyvtkWeightedTransformFilter_SetWeightArray, 1,
   (char*)"V.SetWeightArray(string)\nC++: void SetWeightArray(char *)\n\nWeightArray is the string name of the DataArray in the input's\nFieldData that holds the weighting coefficients for each point.\nThe filter will first look for the array in the input's PointData\nFieldData.  If the array isn't there, the filter looks in the\ninput's FieldData.  The WeightArray can have tuples of any\nlength, but must have a tuple for every point in the input data\nset. This array transforms points, normals, and vectors.\n"},
  {(char*)"GetWeightArray", PyvtkWeightedTransformFilter_GetWeightArray, 1,
   (char*)"V.GetWeightArray() -> string\nC++: char *GetWeightArray()\n\nWeightArray is the string name of the DataArray in the input's\nFieldData that holds the weighting coefficients for each point.\nThe filter will first look for the array in the input's PointData\nFieldData.  If the array isn't there, the filter looks in the\ninput's FieldData.  The WeightArray can have tuples of any\nlength, but must have a tuple for every point in the input data\nset. This array transforms points, normals, and vectors.\n"},
  {(char*)"SetTransformIndexArray", PyvtkWeightedTransformFilter_SetTransformIndexArray, 1,
   (char*)"V.SetTransformIndexArray(string)\nC++: void SetTransformIndexArray(char *)\n\nTransformIndexArray is the string name of the DataArray in the\ninput's FieldData that holds the indices for the transforms for\neach point. These indices are used to select which transforms\neach weight of the DataArray refers.  If the TransformIndexArray\nis not specified, the weights of each point are assumed to map\ndirectly to a transform. This DataArray must be of type\nUnsignedShort, which effectively limits the number of transforms\nto 65536 if a transform index array is used.\n\nThe filter will first look for the array in the input's PointData\nFieldData.  If the array isn't there, the filter looks in the\ninput's FieldData.  The TransformIndexArray can have tuples of\nany length, but must have a tuple for every point in the input\ndata set. This array transforms points, normals, and vectors.\n"},
  {(char*)"GetTransformIndexArray", PyvtkWeightedTransformFilter_GetTransformIndexArray, 1,
   (char*)"V.GetTransformIndexArray() -> string\nC++: char *GetTransformIndexArray()\n\nTransformIndexArray is the string name of the DataArray in the\ninput's FieldData that holds the indices for the transforms for\neach point. These indices are used to select which transforms\neach weight of the DataArray refers.  If the TransformIndexArray\nis not specified, the weights of each point are assumed to map\ndirectly to a transform. This DataArray must be of type\nUnsignedShort, which effectively limits the number of transforms\nto 65536 if a transform index array is used.\n\nThe filter will first look for the array in the input's PointData\nFieldData.  If the array isn't there, the filter looks in the\ninput's FieldData.  The TransformIndexArray can have tuples of\nany length, but must have a tuple for every point in the input\ndata set. This array transforms points, normals, and vectors.\n"},
  {(char*)"SetCellDataWeightArray", PyvtkWeightedTransformFilter_SetCellDataWeightArray, 1,
   (char*)"V.SetCellDataWeightArray(string)\nC++: void SetCellDataWeightArray(char *)\n\nThe CellDataWeightArray is analogous to the WeightArray, except\nfor CellData.  The array is searched for first in the CellData\nFieldData, then in the input's FieldData.  The data array must\nhave a tuple for each cell.  This array is used to transform only\nnormals and vectors.\n"},
  {(char*)"GetCellDataWeightArray", PyvtkWeightedTransformFilter_GetCellDataWeightArray, 1,
   (char*)"V.GetCellDataWeightArray() -> string\nC++: char *GetCellDataWeightArray()\n\nThe CellDataWeightArray is analogous to the WeightArray, except\nfor CellData.  The array is searched for first in the CellData\nFieldData, then in the input's FieldData.  The data array must\nhave a tuple for each cell.  This array is used to transform only\nnormals and vectors.\n"},
  {(char*)"SetCellDataTransformIndexArray", PyvtkWeightedTransformFilter_SetCellDataTransformIndexArray, 1,
   (char*)"V.SetCellDataTransformIndexArray(string)\nC++: void SetCellDataTransformIndexArray(char *)\n\n"},
  {(char*)"GetCellDataTransformIndexArray", PyvtkWeightedTransformFilter_GetCellDataTransformIndexArray, 1,
   (char*)"V.GetCellDataTransformIndexArray() -> string\nC++: char *GetCellDataTransformIndexArray()\n\n"},
  {(char*)"SetTransform", PyvtkWeightedTransformFilter_SetTransform, 1,
   (char*)"V.SetTransform(vtkAbstractTransform, int)\nC++: virtual void SetTransform(vtkAbstractTransform *transform,\n    int num)\n\nSet or Get one of the filter's transforms. The transform number\nmust be less than the number of transforms allocated for the\nobject.  Setting a transform slot to NULL is equivalent to\nassigning an overriding weight of zero to that filter slot.\n"},
  {(char*)"GetTransform", PyvtkWeightedTransformFilter_GetTransform, 1,
   (char*)"V.GetTransform(int) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform(int num)\n\nSet or Get one of the filter's transforms. The transform number\nmust be less than the number of transforms allocated for the\nobject.  Setting a transform slot to NULL is equivalent to\nassigning an overriding weight of zero to that filter slot.\n"},
  {(char*)"SetNumberOfTransforms", PyvtkWeightedTransformFilter_SetNumberOfTransforms, 1,
   (char*)"V.SetNumberOfTransforms(int)\nC++: virtual void SetNumberOfTransforms(int num)\n\nSet the number of transforms for the filter.  References to\nnon-existent filter numbers in the data array is equivalent to a\nweight of zero (i.e., no contribution of that filter or weight). \nThe maximum number of transforms is limited to 65536 if transform\nindex arrays are used.\n"},
  {(char*)"GetNumberOfTransforms", PyvtkWeightedTransformFilter_GetNumberOfTransforms, 1,
   (char*)"V.GetNumberOfTransforms() -> int\nC++: int GetNumberOfTransforms()\n\nSet the number of transforms for the filter.  References to\nnon-existent filter numbers in the data array is equivalent to a\nweight of zero (i.e., no contribution of that filter or weight). \nThe maximum number of transforms is limited to 65536 if transform\nindex arrays are used.\n"},
  {(char*)"AddInputValuesOn", PyvtkWeightedTransformFilter_AddInputValuesOn, 1,
   (char*)"V.AddInputValuesOn()\nC++: void AddInputValuesOn()\n\nIf AddInputValues is true, the output values of this filter will\nbe offset from the input values.  The effect is exactly\nequivalent to having an identity transform of weight 1 added into\neach output point.\n"},
  {(char*)"AddInputValuesOff", PyvtkWeightedTransformFilter_AddInputValuesOff, 1,
   (char*)"V.AddInputValuesOff()\nC++: void AddInputValuesOff()\n\nIf AddInputValues is true, the output values of this filter will\nbe offset from the input values.  The effect is exactly\nequivalent to having an identity transform of weight 1 added into\neach output point.\n"},
  {(char*)"SetAddInputValues", PyvtkWeightedTransformFilter_SetAddInputValues, 1,
   (char*)"V.SetAddInputValues(int)\nC++: void SetAddInputValues(int a)\n\nIf AddInputValues is true, the output values of this filter will\nbe offset from the input values.  The effect is exactly\nequivalent to having an identity transform of weight 1 added into\neach output point.\n"},
  {(char*)"GetAddInputValues", PyvtkWeightedTransformFilter_GetAddInputValues, 1,
   (char*)"V.GetAddInputValues() -> int\nC++: int GetAddInputValues()\n\nIf AddInputValues is true, the output values of this filter will\nbe offset from the input values.  The effect is exactly\nequivalent to having an identity transform of weight 1 added into\neach output point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWeightedTransformFilter_StaticNew()
{
  return vtkWeightedTransformFilter::New();
}

PyObject *PyVTKClass_vtkWeightedTransformFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWeightedTransformFilter_StaticNew,
    PyvtkWeightedTransformFilter_Methods,
    "vtkWeightedTransformFilter", modulename,
    NULL, NULL,
    PyvtkWeightedTransformFilter_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWeightedTransformFilter_Doc()
{
  static const char *docstring[] = {
    "vtkWeightedTransformFilter - transform based on per-point or per-cell\nweighting functions.\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "Caveats:\n\nWeighted combination of normals and vectors are probably not\nappropriate in many cases.  Surface normals are treated somewhat\nspecially, but in many cases you may need to regenerate the surface\nnormals.\n\nCell data can only be transformed if all transforms are linear.\n\nSee Also:\n\nvtkAbstractTransform vtkLinearTransform vtkTransformPolyDataFilter\nvtkActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWeightedTransformFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWeightedTransformFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWeightedTransformFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

