// python wrapper for vtkCompositeDataSet
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
#include "vtkCompositeDataSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositeDataSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositeDataSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkCompositeDataSet_Doc();


static PyObject *
PyvtkCompositeDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositeDataSet::NewInstance();
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
PyvtkCompositeDataSet_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::NewIterator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetProducerPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducerPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProducerPort();
      }
    else
      {
      tempr = op->vtkCompositeDataSet::GetProducerPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
    {
    if (ap.IsBound())
      {
      op->CopyStructure(temp0);
      }
    else
      {
      op->vtkCompositeDataSet::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::SetDataSet(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::GetDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::GetMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_HasMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::HasMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkCompositeDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkCompositeDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkCompositeDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkCompositeDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_GetData_Methods[] = {
  {NULL, PyvtkCompositeDataSet_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkCompositeDataSet_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCompositeDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkCompositeDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkCompositeDataSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkCompositeDataSet::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      op->vtkCompositeDataSet::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

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
      tempr = op->vtkCompositeDataSet::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NAME");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkCompositeDataSet::NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *NewInstance()\n\n"},
  {(char*)"NewIterator", PyvtkCompositeDataSet_NewIterator, 1,
   (char*)"V.NewIterator() -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n"},
  {(char*)"GetDataObjectType", PyvtkCompositeDataSet_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"GetProducerPort", PyvtkCompositeDataSet_GetProducerPort, 1,
   (char*)"V.GetProducerPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetProducerPort()\n\nGet the port currently producing this object.\n"},
  {(char*)"CopyStructure", PyvtkCompositeDataSet_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkCompositeDataSet)\nC++: virtual void CopyStructure(vtkCompositeDataSet *input)\n\nCopies the tree structure from the input. All pointers to\nnon-composite data objects are intialized to NULL. This also\nshallow copies the meta data associated with all the nodes.\n"},
  {(char*)"SetDataSet", PyvtkCompositeDataSet_SetDataSet, 1,
   (char*)"V.SetDataSet(vtkCompositeDataIterator, vtkDataObject)\nC++: virtual void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj)\n\nSets the data set at the location pointed by the iterator. The\niterator does not need to be iterating over this dataset itself.\nIt can be any composite datasite with similar structure (achieved\nby using CopyStructure).\n"},
  {(char*)"GetDataSet", PyvtkCompositeDataSet_GetDataSet, 1,
   (char*)"V.GetDataSet(vtkCompositeDataIterator) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(\n    vtkCompositeDataIterator *iter)\n\nReturns the dataset located at the positiong pointed by the\niterator. The iterator does not need to be iterating over this\ndataset itself. It can be an iterator for composite dataset with\nsimilar structure (achieved by using CopyStructure).\n"},
  {(char*)"GetMetaData", PyvtkCompositeDataSet_GetMetaData, 1,
   (char*)"V.GetMetaData(vtkCompositeDataIterator) -> vtkInformation\nC++: virtual vtkInformation *GetMetaData(\n    vtkCompositeDataIterator *iter)\n\nReturns the meta-data associated with the position pointed by the\niterator. This will create a new vtkInformation object if none\nalready exists. Use HasMetaData to avoid creating the\nvtkInformation object unnecessarily. The iterator does not need\nto be iterating over this dataset itself. It can be an iterator\nfor composite dataset with similar structure (achieved by using\nCopyStructure).\n"},
  {(char*)"HasMetaData", PyvtkCompositeDataSet_HasMetaData, 1,
   (char*)"V.HasMetaData(vtkCompositeDataIterator) -> int\nC++: virtual int HasMetaData(vtkCompositeDataIterator *iter)\n\nReturns if any meta-data associated with the position pointed by\nthe iterator. The iterator does not need to be iterating over\nthis dataset itself. It can be an iterator for composite dataset\nwith similar structure (achieved by using CopyStructure).\n"},
  {(char*)"GetActualMemorySize", PyvtkCompositeDataSet_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated.\n"},
  {(char*)"GetData", PyvtkCompositeDataSet_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"Initialize", PyvtkCompositeDataSet_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"ShallowCopy", PyvtkCompositeDataSet_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkCompositeDataSet_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.\n"},
  {(char*)"GetNumberOfPoints", PyvtkCompositeDataSet_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturns the total number of points of all blocks. This will\niterate over all blocks and call GetNumberOfPoints() so it might\nbe expansive.\n"},
  {(char*)"NAME", PyvtkCompositeDataSet_NAME, 1,
   (char*)"V.NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *NAME()\n\nKey used to put node name in the meta-data associated with a\nnode.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCompositeDataSet_Methods,
    "vtkCompositeDataSet", modulename,
    NULL, NULL,
    PyvtkCompositeDataSet_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataSet - abstract superclass for composite \n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkCompositeDataSet is an abstract class that represents a collection\nof datasets (including other composite datasets). It provides an\ninterface to access the datasets through iterators.\nvtkCompositeDataSet provides methods that are used by subclasses to\nstore the datasets. vtkCompositeDataSet provides the datastructure\nfor a full tree representation. Subclasses provide the semantics for\nit and co",
    "ntrol how this tree is built.\n\nSee Also:\n\nvtkCompositeDataIterator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

