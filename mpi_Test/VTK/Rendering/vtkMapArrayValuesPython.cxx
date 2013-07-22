// python wrapper for vtkMapArrayValues
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
#include "vtkVariant.h"
#include "vtkMapArrayValues.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMapArrayValues(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMapArrayValues(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMapArrayValuesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMapArrayValuesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkMapArrayValues_Doc();


static PyObject *
PyvtkMapArrayValues_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

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
      tempr = op->vtkMapArrayValues::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

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
      tempr = op->vtkMapArrayValues::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  vtkMapArrayValues *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMapArrayValues::NewInstance();
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
PyvtkMapArrayValues_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMapArrayValues *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMapArrayValues::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

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
      op->vtkMapArrayValues::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

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
      tempr = op->vtkMapArrayValues::GetFieldType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetPassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassArray(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetPassArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetPassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassArray();
      }
    else
      {
      tempr = op->vtkMapArrayValues::GetPassArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_PassArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassArrayOn();
      }
    else
      {
      op->vtkMapArrayValues::PassArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_PassArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassArrayOff();
      }
    else
      {
      op->vtkMapArrayValues::PassArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillValue(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetFillValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillValue();
      }
    else
      {
      tempr = op->vtkMapArrayValues::GetFillValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayName(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetInputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputArrayName();
      }
    else
      {
      tempr = op->vtkMapArrayValues::GetInputArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayName(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputArrayName();
      }
    else
      {
      tempr = op->vtkMapArrayValues::GetOutputArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetOutputArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputArrayType();
      }
    else
      {
      tempr = op->vtkMapArrayValues::GetOutputArrayType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetOutputArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayType(temp0);
      }
    else
      {
      op->vtkMapArrayValues::SetOutputArrayType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_AddToMap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->AddToMap(*temp0, *temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddToMap(temp0, temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddToMap(temp0, temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddToMap(temp0, temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddToMap(temp0, temp1);
      }
    else
      {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMapArrayValues_AddToMap_Methods[] = {
  {NULL, PyvtkMapArrayValues_AddToMap_s1, 1,
   (char*)"@OO vtkVariant vtkVariant"},
  {NULL, PyvtkMapArrayValues_AddToMap_s2, 1,
   (char*)"@ii"},
  {NULL, PyvtkMapArrayValues_AddToMap_s3, 1,
   (char*)"@iz"},
  {NULL, PyvtkMapArrayValues_AddToMap_s4, 1,
   (char*)"@zi"},
  {NULL, PyvtkMapArrayValues_AddToMap_s5, 1,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMapArrayValues_AddToMap(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapArrayValues_AddToMap_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddToMap");
  return NULL;
}



static PyObject *
PyvtkMapArrayValues_ClearMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearMap();
      }
    else
      {
      op->vtkMapArrayValues::ClearMap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetMapSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapSize();
      }
    else
      {
      tempr = op->vtkMapArrayValues::GetMapSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMapArrayValues_Methods[] = {
  {(char*)"GetClassName", PyvtkMapArrayValues_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMapArrayValues_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMapArrayValues_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMapArrayValues\nC++: vtkMapArrayValues *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMapArrayValues_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMapArrayValues\nC++: vtkMapArrayValues *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldType", PyvtkMapArrayValues_SetFieldType, 1,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int a)\n\nSet/Get where the data is located that is being mapped. See\nFieldType enumeration for possible values. Default is POINT_DATA.\n"},
  {(char*)"GetFieldType", PyvtkMapArrayValues_GetFieldType, 1,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nSet/Get where the data is located that is being mapped. See\nFieldType enumeration for possible values. Default is POINT_DATA.\n"},
  {(char*)"SetPassArray", PyvtkMapArrayValues_SetPassArray, 1,
   (char*)"V.SetPassArray(int)\nC++: void SetPassArray(int a)\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {(char*)"GetPassArray", PyvtkMapArrayValues_GetPassArray, 1,
   (char*)"V.GetPassArray() -> int\nC++: int GetPassArray()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {(char*)"PassArrayOn", PyvtkMapArrayValues_PassArrayOn, 1,
   (char*)"V.PassArrayOn()\nC++: void PassArrayOn()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {(char*)"PassArrayOff", PyvtkMapArrayValues_PassArrayOff, 1,
   (char*)"V.PassArrayOff()\nC++: void PassArrayOff()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {(char*)"SetFillValue", PyvtkMapArrayValues_SetFillValue, 1,
   (char*)"V.SetFillValue(float)\nC++: void SetFillValue(double a)\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is -1.\n"},
  {(char*)"GetFillValue", PyvtkMapArrayValues_GetFillValue, 1,
   (char*)"V.GetFillValue() -> float\nC++: double GetFillValue()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is -1.\n"},
  {(char*)"SetInputArrayName", PyvtkMapArrayValues_SetInputArrayName, 1,
   (char*)"V.SetInputArrayName(string)\nC++: void SetInputArrayName(char *)\n\nSet/Get the name of the input array. This must be set prior to\nexecution.\n"},
  {(char*)"GetInputArrayName", PyvtkMapArrayValues_GetInputArrayName, 1,
   (char*)"V.GetInputArrayName() -> string\nC++: char *GetInputArrayName()\n\nSet/Get the name of the input array. This must be set prior to\nexecution.\n"},
  {(char*)"SetOutputArrayName", PyvtkMapArrayValues_SetOutputArrayName, 1,
   (char*)"V.SetOutputArrayName(string)\nC++: void SetOutputArrayName(char *)\n\nSet/Get the name of the output array. Default is \"ArrayMap\".\n"},
  {(char*)"GetOutputArrayName", PyvtkMapArrayValues_GetOutputArrayName, 1,
   (char*)"V.GetOutputArrayName() -> string\nC++: char *GetOutputArrayName()\n\nSet/Get the name of the output array. Default is \"ArrayMap\".\n"},
  {(char*)"GetOutputArrayType", PyvtkMapArrayValues_GetOutputArrayType, 1,
   (char*)"V.GetOutputArrayType() -> int\nC++: int GetOutputArrayType()\n\nSet/Get the type of the output array. See vtkSetGet.h for\npossible values. Default is VTK_INT.\n"},
  {(char*)"SetOutputArrayType", PyvtkMapArrayValues_SetOutputArrayType, 1,
   (char*)"V.SetOutputArrayType(int)\nC++: void SetOutputArrayType(int a)\n\nSet/Get the type of the output array. See vtkSetGet.h for\npossible values. Default is VTK_INT.\n"},
  {(char*)"AddToMap", PyvtkMapArrayValues_AddToMap, 1,
   (char*)"V.AddToMap(vtkVariant, vtkVariant)\nC++: void AddToMap(vtkVariant from, vtkVariant to)\nV.AddToMap(int, int)\nC++: void AddToMap(int from, int to)\nV.AddToMap(int, string)\nC++: void AddToMap(int from, char *to)\nV.AddToMap(string, int)\nC++: void AddToMap(char *from, int to)\nV.AddToMap(string, string)\nC++: void AddToMap(char *from, char *to)\n\nAdd to the internal STL map. \"from\" should be a value in the\ninput array and \"to\" should be the new value it gets assigned in\nthe output array.\n"},
  {(char*)"ClearMap", PyvtkMapArrayValues_ClearMap, 1,
   (char*)"V.ClearMap()\nC++: void ClearMap()\n\nClear the internal map.\n"},
  {(char*)"GetMapSize", PyvtkMapArrayValues_GetMapSize, 1,
   (char*)"V.GetMapSize() -> int\nC++: int GetMapSize()\n\nGet the size of the internal map.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMapArrayValues_StaticNew()
{
  return vtkMapArrayValues::New();
}

PyObject *PyVTKClass_vtkMapArrayValuesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMapArrayValues_StaticNew,
    PyvtkMapArrayValues_Methods,
    "vtkMapArrayValues", modulename,
    NULL, NULL,
    PyvtkMapArrayValues_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"POINT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"CELL_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VERTEX_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"ROW_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"NUM_ATTRIBUTE_LOCS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkMapArrayValues_Doc()
{
  static const char *docstring[] = {
    "vtkMapArrayValues - Map values in an input array to different values\nin\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkMapArrayValues allows you to associate certain values of an\nattribute array (on either a vertex, edge, point, or cell) with\ndifferent values in a newly created attribute array.\n\nvtkMapArrayValues manages an internal STL map of vtkVariants that can\nbe added to or cleared. When this filter executes, each \"key\" is\nsearched for in the input array and the indices of the output array\nat which there w",
    "ere matches the set to the mapped \"value\".\n\nYou can control whether the input array values are passed to the\noutput before the mapping occurs (using PassArray) or, if not, what\nvalue to set the unmapped indices to (using FillValue).\n\nOne application of this filter is to help address the dirty data\nproblem. For example, using vtkMapArrayValues you could associate the\nvertex values \"Foo, John\", \"Foo",
    ", John.\", and \"John Foo\" with a single\nentity.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMapArrayValues(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMapArrayValuesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMapArrayValues", o) != 0)
    {
    Py_DECREF(o);
    }

}

