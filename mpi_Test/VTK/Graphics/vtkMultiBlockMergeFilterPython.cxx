// python wrapper for vtkMultiBlockMergeFilter
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
#include "vtkMultiBlockMergeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMultiBlockMergeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMultiBlockMergeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMultiBlockMergeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMultiBlockMergeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkMultiBlockMergeFilter_Doc();


static PyObject *
PyvtkMultiBlockMergeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockMergeFilter *op = static_cast<vtkMultiBlockMergeFilter *>(vp);

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
      tempr = op->vtkMultiBlockMergeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockMergeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockMergeFilter *op = static_cast<vtkMultiBlockMergeFilter *>(vp);

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
      tempr = op->vtkMultiBlockMergeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockMergeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockMergeFilter *op = static_cast<vtkMultiBlockMergeFilter *>(vp);

  vtkMultiBlockMergeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMultiBlockMergeFilter::NewInstance();
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
PyvtkMultiBlockMergeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMultiBlockMergeFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMultiBlockMergeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockMergeFilter_AddInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockMergeFilter *op = static_cast<vtkMultiBlockMergeFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkMultiBlockMergeFilter::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockMergeFilter_AddInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockMergeFilter *op = static_cast<vtkMultiBlockMergeFilter *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0, temp1);
      }
    else
      {
      op->vtkMultiBlockMergeFilter::AddInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockMergeFilter_AddInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMultiBlockMergeFilter_AddInput_s1(self, args);
    case 2:
      return PyvtkMultiBlockMergeFilter_AddInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInput");
  return NULL;
}


static PyMethodDef PyvtkMultiBlockMergeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiBlockMergeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiBlockMergeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiBlockMergeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMultiBlockMergeFilter\nC++: vtkMultiBlockMergeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiBlockMergeFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiBlockMergeFilter\nC++: vtkMultiBlockMergeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddInput", PyvtkMultiBlockMergeFilter_AddInput, 1,
   (char*)"V.AddInput(vtkDataObject)\nC++: void AddInput(vtkDataObject *)\nV.AddInput(int, vtkDataObject)\nC++: void AddInput(int, vtkDataObject *)\n\nAdd an input of this algorithm.  Note that these methods support\nold-style pipeline connections.  When writing new code you should\nuse the more general vtkAlgorithm::AddInputConnection().  See\nSetInput() for details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiBlockMergeFilter_StaticNew()
{
  return vtkMultiBlockMergeFilter::New();
}

PyObject *PyVTKClass_vtkMultiBlockMergeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiBlockMergeFilter_StaticNew,
    PyvtkMultiBlockMergeFilter_Methods,
    "vtkMultiBlockMergeFilter", modulename,
    NULL, NULL,
    PyvtkMultiBlockMergeFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMultiBlockMergeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMultiBlockMergeFilter - merges multiblock inputs into a single\nmultiblock output\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkMultiBlockMergeFilter is an M to 1 filter similar to\nvtkMultiBlockDataGroupFilter. However where as that class creates N\ngroups in the output for N inputs, this creates 1 group in the output\nwith N datasets inside it. In actuality if the inputs have M blocks,\nthis will produce M blocks, each of which has N datasets. Inside the\nmerged group, the i'th data set comes from the i'th data set in the\n",
    "i'th input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiBlockMergeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiBlockMergeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiBlockMergeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

