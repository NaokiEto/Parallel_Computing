// python wrapper for vtkMultiBlockDataSet
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
#include "vtkMultiBlockDataSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMultiBlockDataSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMultiBlockDataSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMultiBlockDataSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetNew
#endif

static const char **PyvtkMultiBlockDataSet_Doc();


static PyObject *
PyvtkMultiBlockDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

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
      tempr = op->vtkMultiBlockDataSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

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
      tempr = op->vtkMultiBlockDataSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  vtkMultiBlockDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMultiBlockDataSet::NewInstance();
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
PyvtkMultiBlockDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMultiBlockDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMultiBlockDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

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
      tempr = op->vtkMultiBlockDataSet::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
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
      op->vtkMultiBlockDataSet::SetNumberOfBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBlocks();
      }
    else
      {
      tempr = op->vtkMultiBlockDataSet::GetNumberOfBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_GetBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlock(temp0);
      }
    else
      {
      tempr = op->vtkMultiBlockDataSet::GetBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_SetBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetBlock(temp0, temp1);
      }
    else
      {
      op->vtkMultiBlockDataSet::SetBlock(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_RemoveBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlock(temp0);
      }
    else
      {
      op->vtkMultiBlockDataSet::RemoveBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_HasMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

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
      tempr = op->vtkMultiBlockDataSet::HasMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSet_HasMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

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
      tempr = op->vtkMultiBlockDataSet::HasMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiBlockDataSet_HasMetaData_Methods[] = {
  {NULL, PyvtkMultiBlockDataSet_HasMetaData_s1, 1,
   (char*)"@I"},
  {NULL, PyvtkMultiBlockDataSet_HasMetaData_s2, 1,
   (char*)"@O *vtkCompositeDataIterator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiBlockDataSet_HasMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiBlockDataSet_HasMetaData_Methods;
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
PyvtkMultiBlockDataSet_GetMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

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
      tempr = op->vtkMultiBlockDataSet::GetMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSet_GetMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

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
      tempr = op->vtkMultiBlockDataSet::GetMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiBlockDataSet_GetMetaData_Methods[] = {
  {NULL, PyvtkMultiBlockDataSet_GetMetaData_s1, 1,
   (char*)"@I"},
  {NULL, PyvtkMultiBlockDataSet_GetMetaData_s2, 1,
   (char*)"@O *vtkCompositeDataIterator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiBlockDataSet_GetMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiBlockDataSet_GetMetaData_Methods;
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
PyvtkMultiBlockDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkMultiBlockDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkMultiBlockDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkMultiBlockDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkMultiBlockDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiBlockDataSet_GetData_Methods[] = {
  {NULL, PyvtkMultiBlockDataSet_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkMultiBlockDataSet_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiBlockDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiBlockDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkMultiBlockDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkMultiBlockDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiBlockDataSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiBlockDataSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiBlockDataSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiBlockDataSet_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkMultiBlockDataSet_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {(char*)"SetNumberOfBlocks", PyvtkMultiBlockDataSet_SetNumberOfBlocks, 1,
   (char*)"V.SetNumberOfBlocks(int)\nC++: void SetNumberOfBlocks(unsigned int numBlocks)\n\nSet the number of blocks. This will cause allocation if the new\nnumber of blocks is greater than the current size. All new blocks\nare initialized to null.\n"},
  {(char*)"GetNumberOfBlocks", PyvtkMultiBlockDataSet_GetNumberOfBlocks, 1,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: unsigned int GetNumberOfBlocks()\n\nReturns the number of blocks.\n"},
  {(char*)"GetBlock", PyvtkMultiBlockDataSet_GetBlock, 1,
   (char*)"V.GetBlock(int) -> vtkDataObject\nC++: vtkDataObject *GetBlock(unsigned int blockno)\n\nReturns the block at the given index. It is recommended that one\nuses the iterators to iterate over composite datasets rather than\nusing this API.\n"},
  {(char*)"SetBlock", PyvtkMultiBlockDataSet_SetBlock, 1,
   (char*)"V.SetBlock(int, vtkDataObject)\nC++: void SetBlock(unsigned int blockno, vtkDataObject *block)\n\nSets the data object as the given block. The total number of\nblocks will be resized to fit the requested block no.\n"},
  {(char*)"RemoveBlock", PyvtkMultiBlockDataSet_RemoveBlock, 1,
   (char*)"V.RemoveBlock(int)\nC++: void RemoveBlock(unsigned int blockno)\n\nRemove the given block from the dataset.\n"},
  {(char*)"HasMetaData", PyvtkMultiBlockDataSet_HasMetaData, 1,
   (char*)"V.HasMetaData(int) -> int\nC++: int HasMetaData(unsigned int blockno)\nV.HasMetaData(vtkCompositeDataIterator) -> int\nC++: virtual int HasMetaData(vtkCompositeDataIterator *iter)\n\nReturns true if meta-data is available for a given block.\n"},
  {(char*)"GetMetaData", PyvtkMultiBlockDataSet_GetMetaData, 1,
   (char*)"V.GetMetaData(int) -> vtkInformation\nC++: vtkInformation *GetMetaData(unsigned int blockno)\nV.GetMetaData(vtkCompositeDataIterator) -> vtkInformation\nC++: virtual vtkInformation *GetMetaData(\n    vtkCompositeDataIterator *iter)\n\nReturns the meta-data for the block. If none is already present,\na new vtkInformation object will be allocated. Use HasMetaData to\navoid allocating vtkInformation objects.\n"},
  {(char*)"GetData", PyvtkMultiBlockDataSet_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkMultiBlockDataSet\nC++: static vtkMultiBlockDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkMultiBlockDataSet\nC++: static vtkMultiBlockDataSet *GetData(vtkInformationVector *v,\n     int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiBlockDataSet_StaticNew()
{
  return vtkMultiBlockDataSet::New();
}

PyObject *PyVTKClass_vtkMultiBlockDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiBlockDataSet_StaticNew,
    PyvtkMultiBlockDataSet_Methods,
    "vtkMultiBlockDataSet", modulename,
    NULL, NULL,
    PyvtkMultiBlockDataSet_Doc(),
    PyVTKClass_vtkCompositeDataSetNew(modulename));
  return cls;
}

const char **PyvtkMultiBlockDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkMultiBlockDataSet - Composite dataset that organizes datasets into\n\n",
    "Superclass: vtkCompositeDataSet\n\n",
    "vtkMultiBlockDataSet is a vtkCompositeDataSet that stores a hierarchy\nof datasets. The dataset collection consists of multiple blocks. Each\n block can itself be a vtkMultiBlockDataSet, thus providing for a\nfull tree structure. Sub-blocks are usually used to distribute blocks\nacross processors. For example, a 1 block dataset can be distributed\nas following:\n proc 0:\n Block 0:\n   * ds 0\n   * (null)\n",
    "\n proc 1:\n Block 0:\n   * (null)\n   * ds 1\n \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiBlockDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiBlockDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiBlockDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

