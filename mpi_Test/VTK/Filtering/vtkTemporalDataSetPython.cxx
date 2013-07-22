// python wrapper for vtkTemporalDataSet
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
#include "vtkTemporalDataSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTemporalDataSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTemporalDataSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTemporalDataSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTemporalDataSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetNew
#endif

static const char **PyvtkTemporalDataSet_Doc();


static PyObject *
PyvtkTemporalDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

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
      tempr = op->vtkTemporalDataSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

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
      tempr = op->vtkTemporalDataSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

  vtkTemporalDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTemporalDataSet::NewInstance();
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
PyvtkTemporalDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTemporalDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTemporalDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

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
      tempr = op->vtkTemporalDataSet::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSet_SetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTimeSteps(temp0);
      }
    else
      {
      op->vtkTemporalDataSet::SetNumberOfTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSet_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTimeSteps();
      }
    else
      {
      tempr = op->vtkTemporalDataSet::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSet_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

  unsigned int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0, temp1);
      }
    else
      {
      op->vtkTemporalDataSet::SetTimeStep(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSet_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

  unsigned int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStep(temp0);
      }
    else
      {
      tempr = op->vtkTemporalDataSet::GetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSet_GetMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

  unsigned int temp0;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMetaData(temp0);
      }
    else
      {
      tempr = op->vtkTemporalDataSet::GetMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTemporalDataSet_GetMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

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
      tempr = op->vtkTemporalDataSet::GetMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalDataSet_GetMetaData_Methods[] = {
  {NULL, PyvtkTemporalDataSet_GetMetaData_s1, 1,
   (char*)"@I"},
  {NULL, PyvtkTemporalDataSet_GetMetaData_s2, 1,
   (char*)"@O *vtkCompositeDataIterator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTemporalDataSet_GetMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTemporalDataSet_GetMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMetaData");
  return NULL;
}



static PyObject *
PyvtkTemporalDataSet_HasMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

  unsigned int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasMetaData(temp0);
      }
    else
      {
      tempr = op->vtkTemporalDataSet::HasMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTemporalDataSet_HasMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

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
      tempr = op->vtkTemporalDataSet::HasMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalDataSet_HasMetaData_Methods[] = {
  {NULL, PyvtkTemporalDataSet_HasMetaData_s1, 1,
   (char*)"@I"},
  {NULL, PyvtkTemporalDataSet_HasMetaData_s2, 1,
   (char*)"@O *vtkCompositeDataIterator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTemporalDataSet_HasMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTemporalDataSet_HasMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "HasMetaData");
  return NULL;
}



static PyObject *
PyvtkTemporalDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkTemporalDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkTemporalDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTemporalDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkTemporalDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkTemporalDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalDataSet_GetData_Methods[] = {
  {NULL, PyvtkTemporalDataSet_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkTemporalDataSet_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTemporalDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTemporalDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkTemporalDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkTemporalDataSet_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSet *op = static_cast<vtkTemporalDataSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentType();
      }
    else
      {
      tempr = op->vtkTemporalDataSet::GetExtentType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalDataSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalDataSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalDataSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTemporalDataSet\nC++: vtkTemporalDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalDataSet_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalDataSet\nC++: vtkTemporalDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkTemporalDataSet_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"SetNumberOfTimeSteps", PyvtkTemporalDataSet_SetNumberOfTimeSteps, 1,
   (char*)"V.SetNumberOfTimeSteps(int)\nC++: void SetNumberOfTimeSteps(unsigned int numLevels)\n\nSet the number of time steps in theis dataset\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkTemporalDataSet_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: unsigned int GetNumberOfTimeSteps()\n\nReturns the number of time steps.\n"},
  {(char*)"SetTimeStep", PyvtkTemporalDataSet_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int, vtkDataObject)\nC++: void SetTimeStep(unsigned int timestep, vtkDataObject *dobj)\n\nSet a data object as a timestep. Cannot be vtkTemporalDataSet.\n"},
  {(char*)"GetTimeStep", PyvtkTemporalDataSet_GetTimeStep, 1,
   (char*)"V.GetTimeStep(int) -> vtkDataObject\nC++: vtkDataObject *GetTimeStep(unsigned int timestep)\n\nGet a timestep.\n"},
  {(char*)"GetMetaData", PyvtkTemporalDataSet_GetMetaData, 1,
   (char*)"V.GetMetaData(int) -> vtkInformation\nC++: vtkInformation *GetMetaData(unsigned int timestep)\nV.GetMetaData(vtkCompositeDataIterator) -> vtkInformation\nC++: virtual vtkInformation *GetMetaData(\n    vtkCompositeDataIterator *iter)\n\nGet timestep meta-data.\n"},
  {(char*)"HasMetaData", PyvtkTemporalDataSet_HasMetaData, 1,
   (char*)"V.HasMetaData(int) -> int\nC++: int HasMetaData(unsigned int timestep)\nV.HasMetaData(vtkCompositeDataIterator) -> int\nC++: virtual int HasMetaData(vtkCompositeDataIterator *iter)\n\nReturns if timestep meta-data is present.\n"},
  {(char*)"GetData", PyvtkTemporalDataSet_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkTemporalDataSet\nC++: static vtkTemporalDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkTemporalDataSet\nC++: static vtkTemporalDataSet *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"GetExtentType", PyvtkTemporalDataSet_GetExtentType, 1,
   (char*)"V.GetExtentType() -> int\nC++: virtual int GetExtentType()\n\nThe extent type is a 3D extent\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalDataSet_StaticNew()
{
  return vtkTemporalDataSet::New();
}

PyObject *PyVTKClass_vtkTemporalDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalDataSet_StaticNew,
    PyvtkTemporalDataSet_Methods,
    "vtkTemporalDataSet", modulename,
    NULL, NULL,
    PyvtkTemporalDataSet_Doc(),
    PyVTKClass_vtkCompositeDataSetNew(modulename));
  return cls;
}

const char **PyvtkTemporalDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalDataSet - Composite dataset that holds multiple times\n\n",
    "Superclass: vtkCompositeDataSet\n\n",
    "vtkTemporalDataSet is a vtkCompositeDataSet that stores multiple time\nsteps of data.\n\nSee Also:\n\nvtkCompositeDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

