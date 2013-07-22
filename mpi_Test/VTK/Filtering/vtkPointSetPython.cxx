// python wrapper for vtkPointSet
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
#include "vtkPointSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetNew
extern "C" { PyObject *PyVTKClass_vtkDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetNew
#endif

static const char **PyvtkPointSet_Doc();


static PyObject *
PyvtkPointSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

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
      tempr = op->vtkPointSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

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
      tempr = op->vtkPointSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  vtkPointSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointSet::NewInstance();
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
PyvtkPointSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPointSet::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

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
      op->vtkPointSet::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkPointSet::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  vtkIdType temp0;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint(temp0);
      }
    else
      {
      tempr = op->vtkPointSet::GetPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSet_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetPoint(temp0, temp1);
      }
    else
      {
      op->vtkPointSet::GetPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSet_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPointSet_GetPoint_s1(self, args);
    case 2:
      return PyvtkPointSet_GetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return NULL;
}



static PyObject *
PyvtkPointSet_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->FindPoint(temp0);
      }
    else
      {
      tempr = op->vtkPointSet::FindPoint(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSet_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->FindPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkPointSet::FindPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSet_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPointSet_FindPoint_s1(self, args);
    case 3:
      return PyvtkPointSet_FindPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return NULL;
}



static PyObject *
PyvtkPointSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

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
      tempr = op->vtkPointSet::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeBounds();
      }
    else
      {
      op->vtkPointSet::ComputeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkPointSet::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetPoints(temp0);
      }
    else
      {
      op->vtkPointSet::SetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoints();
      }
    else
      {
      tempr = op->vtkPointSet::GetPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActualMemorySize();
      }
    else
      {
      tempr = op->vtkPointSet::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

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
      op->vtkPointSet::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSet *op = static_cast<vtkPointSet *>(vp);

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
      op->vtkPointSet::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkPointSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkPointSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkPointSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkPointSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSet_GetData_Methods[] = {
  {NULL, PyvtkPointSet_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkPointSet_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPointSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPointSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkPointSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkPointSet_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointSet\nC++: vtkPointSet *NewInstance()\n\n"},
  {(char*)"Initialize", PyvtkPointSet_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nReset to an empty state and free any memory.\n"},
  {(char*)"CopyStructure", PyvtkPointSet_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *pd)\n\nCopy the geometric structure of an input point set object.\n"},
  {(char*)"GetNumberOfPoints", PyvtkPointSet_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nSee vtkDataSet for additional information.\n"},
  {(char*)"GetPoint", PyvtkPointSet_GetPoint, 1,
   (char*)"V.GetPoint(int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType ptId)\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType ptId, double x[3])\n\nSee vtkDataSet for additional information.\n"},
  {(char*)"FindPoint", PyvtkPointSet_FindPoint, 1,
   (char*)"V.FindPoint([float, float, float]) -> int\nC++: virtual vtkIdType FindPoint(double x[3])\nV.FindPoint(float, float, float) -> int\nC++: vtkIdType FindPoint(double x, double y, double z)\n\nSee vtkDataSet for additional information.\n"},
  {(char*)"GetMTime", PyvtkPointSet_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet MTime which also considers its vtkPoints MTime.\n"},
  {(char*)"ComputeBounds", PyvtkPointSet_ComputeBounds, 1,
   (char*)"V.ComputeBounds()\nC++: void ComputeBounds()\n\nCompute the (X, Y, Z)  bounds of the data.\n"},
  {(char*)"Squeeze", PyvtkPointSet_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nReclaim any unused memory.\n"},
  {(char*)"SetPoints", PyvtkPointSet_SetPoints, 1,
   (char*)"V.SetPoints(vtkPoints)\nC++: virtual void SetPoints(vtkPoints *)\n\nSpecify point array to define point coordinates.\n"},
  {(char*)"GetPoints", PyvtkPointSet_GetPoints, 1,
   (char*)"V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nSpecify point array to define point coordinates.\n"},
  {(char*)"GetActualMemorySize", PyvtkPointSet_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {(char*)"ShallowCopy", PyvtkPointSet_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkPointSet_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetData", PyvtkPointSet_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkPointSet\nC++: static vtkPointSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkPointSet\nC++: static vtkPointSet *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPointSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPointSet_Methods,
    "vtkPointSet", modulename,
    NULL, NULL,
    PyvtkPointSet_Doc(),
    PyVTKClass_vtkDataSetNew(modulename));
  return cls;
}

const char **PyvtkPointSet_Doc()
{
  static const char *docstring[] = {
    "vtkPointSet - abstract class for specifying dataset behavior\n\n",
    "Superclass: vtkDataSet\n\n",
    "vtkPointSet is an abstract class that specifies the interface for\ndatasets that explicitly use \"point\" arrays to represent geometry.\nFor example, vtkPolyData and vtkUnstructuredGrid require point arrays\nto specify point position, while vtkStructuredPoints generates point\npositions implicitly.\n\nSee Also:\n\nvtkPolyData vtkStructuredGrid vtkUnstructuredGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

