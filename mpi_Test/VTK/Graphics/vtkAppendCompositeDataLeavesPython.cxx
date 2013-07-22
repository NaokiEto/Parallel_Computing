// python wrapper for vtkAppendCompositeDataLeaves
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
#include "vtkAppendCompositeDataLeaves.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAppendCompositeDataLeaves(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAppendCompositeDataLeaves(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAppendCompositeDataLeavesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAppendCompositeDataLeavesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
#endif

static const char **PyvtkAppendCompositeDataLeaves_Doc();


static PyObject *
PyvtkAppendCompositeDataLeaves_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

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
      tempr = op->vtkAppendCompositeDataLeaves::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

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
      tempr = op->vtkAppendCompositeDataLeaves::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  vtkAppendCompositeDataLeaves *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAppendCompositeDataLeaves::NewInstance();
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
PyvtkAppendCompositeDataLeaves_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAppendCompositeDataLeaves *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAppendCompositeDataLeaves::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  int temp0;
  vtkCompositeDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput(temp0);
      }
    else
      {
      tempr = op->vtkAppendCompositeDataLeaves::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendCompositeDataLeaves_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  vtkCompositeDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkAppendCompositeDataLeaves::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendCompositeDataLeaves_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAppendCompositeDataLeaves_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendCompositeDataLeaves_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkAppendCompositeDataLeaves_RemoveInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->RemoveInput(temp0);
      }
    else
      {
      op->vtkAppendCompositeDataLeaves::RemoveInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_SetAppendFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAppendFieldData(temp0);
      }
    else
      {
      op->vtkAppendCompositeDataLeaves::SetAppendFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_GetAppendFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAppendFieldData();
      }
    else
      {
      tempr = op->vtkAppendCompositeDataLeaves::GetAppendFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_AppendFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendFieldDataOn();
      }
    else
      {
      op->vtkAppendCompositeDataLeaves::AppendFieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_AppendFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendFieldDataOff();
      }
    else
      {
      op->vtkAppendCompositeDataLeaves::AppendFieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendCompositeDataLeaves_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendCompositeDataLeaves_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendCompositeDataLeaves_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendCompositeDataLeaves_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAppendCompositeDataLeaves\nC++: vtkAppendCompositeDataLeaves *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendCompositeDataLeaves_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendCompositeDataLeaves\nC++: vtkAppendCompositeDataLeaves *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkAppendCompositeDataLeaves_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetInput(int idx)\nV.GetInput() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetInput()\n\nGet any input of this filter.\n"},
  {(char*)"RemoveInput", PyvtkAppendCompositeDataLeaves_RemoveInput, 1,
   (char*)"V.RemoveInput(vtkDataSet)\nC++: void RemoveInput(vtkDataSet *in)\n\nRemove a dataset from the list of data to append.\n"},
  {(char*)"SetAppendFieldData", PyvtkAppendCompositeDataLeaves_SetAppendFieldData, 1,
   (char*)"V.SetAppendFieldData(int)\nC++: void SetAppendFieldData(int a)\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {(char*)"GetAppendFieldData", PyvtkAppendCompositeDataLeaves_GetAppendFieldData, 1,
   (char*)"V.GetAppendFieldData() -> int\nC++: int GetAppendFieldData()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {(char*)"AppendFieldDataOn", PyvtkAppendCompositeDataLeaves_AppendFieldDataOn, 1,
   (char*)"V.AppendFieldDataOn()\nC++: void AppendFieldDataOn()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {(char*)"AppendFieldDataOff", PyvtkAppendCompositeDataLeaves_AppendFieldDataOff, 1,
   (char*)"V.AppendFieldDataOff()\nC++: void AppendFieldDataOff()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendCompositeDataLeaves_StaticNew()
{
  return vtkAppendCompositeDataLeaves::New();
}

PyObject *PyVTKClass_vtkAppendCompositeDataLeavesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendCompositeDataLeaves_StaticNew,
    PyvtkAppendCompositeDataLeaves_Methods,
    "vtkAppendCompositeDataLeaves", modulename,
    NULL, NULL,
    PyvtkAppendCompositeDataLeaves_Doc(),
    PyVTKClass_vtkCompositeDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendCompositeDataLeaves_Doc()
{
  static const char *docstring[] = {
    "vtkAppendCompositeDataLeaves - appends one or more composite datasets\nwith the same structure together into a single output composite\ndataset\n\n",
    "Superclass: vtkCompositeDataSetAlgorithm\n\n",
    "vtkAppendCompositeDataLeaves is a filter that takes input composite\ndatasets with the same structure: (1) the same number of entries and\n-- if any children are composites -- the same constraint holds from\nthem; and (2) the same type of dataset at each position. It then\ncreates an output dataset with the same structure whose leaves\ncontain all the cells from the datasets at the corresponding leaves",
    "\nof the input datasets.\n\nCurrently, only input polydata and unstructured grids are handled;\nother types of leaf datasets will be ignored and their positions in\nthe output dataset will be NULL pointers. Point attributes (i.e.,\nscalars, vectors, normals, field data, etc.) are extracted and\nappended only if all datasets have the point attributes available.\n(For example, if one dataset has scalars but",
    " another does not,\nscalars will not be appended.)\n\nSee Also:\n\nvtkAppendPolyData vtkAppendFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendCompositeDataLeaves(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendCompositeDataLeavesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendCompositeDataLeaves", o) != 0)
    {
    Py_DECREF(o);
    }

}

