// python wrapper for vtkImageQuantizeRGBToIndex
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
#include "vtkImageQuantizeRGBToIndex.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageQuantizeRGBToIndex(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageQuantizeRGBToIndex(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageQuantizeRGBToIndexNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageQuantizeRGBToIndexNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageQuantizeRGBToIndex_Doc();


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

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
      tempr = op->vtkImageQuantizeRGBToIndex::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

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
      tempr = op->vtkImageQuantizeRGBToIndex::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  vtkImageQuantizeRGBToIndex *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::NewInstance();
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
PyvtkImageQuantizeRGBToIndex_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageQuantizeRGBToIndex *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageQuantizeRGBToIndex::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfColors(temp0);
      }
    else
      {
      op->vtkImageQuantizeRGBToIndex::SetNumberOfColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColorsMinValue();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::GetNumberOfColorsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColorsMaxValue();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::GetNumberOfColorsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColors();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::GetNumberOfColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  vtkLookupTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetInitializeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitializeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitializeExecuteTime();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::GetInitializeExecuteTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetBuildTreeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTreeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBuildTreeExecuteTime();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::GetBuildTreeExecuteTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetLookupIndexExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupIndexExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupIndexExecuteTime();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::GetLookupIndexExecuteTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetInputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputType();
      }
    else
      {
      tempr = op->vtkImageQuantizeRGBToIndex::GetInputType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetInitializeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitializeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInitializeExecuteTime(temp0);
      }
    else
      {
      op->vtkImageQuantizeRGBToIndex::SetInitializeExecuteTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetBuildTreeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildTreeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBuildTreeExecuteTime(temp0);
      }
    else
      {
      op->vtkImageQuantizeRGBToIndex::SetBuildTreeExecuteTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetLookupIndexExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupIndexExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLookupIndexExecuteTime(temp0);
      }
    else
      {
      op->vtkImageQuantizeRGBToIndex::SetLookupIndexExecuteTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageQuantizeRGBToIndex_Methods[] = {
  {(char*)"GetClassName", PyvtkImageQuantizeRGBToIndex_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageQuantizeRGBToIndex_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageQuantizeRGBToIndex_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageQuantizeRGBToIndex\nC++: vtkImageQuantizeRGBToIndex *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageQuantizeRGBToIndex_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageQuantizeRGBToIndex\nC++: vtkImageQuantizeRGBToIndex *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfColors", PyvtkImageQuantizeRGBToIndex_SetNumberOfColors, 1,
   (char*)"V.SetNumberOfColors(int)\nC++: void SetNumberOfColors(int)\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {(char*)"GetNumberOfColorsMinValue", PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMinValue, 1,
   (char*)"V.GetNumberOfColorsMinValue() -> int\nC++: int GetNumberOfColorsMinValue()\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {(char*)"GetNumberOfColorsMaxValue", PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMaxValue, 1,
   (char*)"V.GetNumberOfColorsMaxValue() -> int\nC++: int GetNumberOfColorsMaxValue()\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {(char*)"GetNumberOfColors", PyvtkImageQuantizeRGBToIndex_GetNumberOfColors, 1,
   (char*)"V.GetNumberOfColors() -> int\nC++: int GetNumberOfColors()\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {(char*)"GetLookupTable", PyvtkImageQuantizeRGBToIndex_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable()\n\nGet the resulting lookup table that contains the color\ndefinitions corresponding to the index values in the output\nimage.\n"},
  {(char*)"GetInitializeExecuteTime", PyvtkImageQuantizeRGBToIndex_GetInitializeExecuteTime, 1,
   (char*)"V.GetInitializeExecuteTime() -> float\nC++: double GetInitializeExecuteTime()\n\n"},
  {(char*)"GetBuildTreeExecuteTime", PyvtkImageQuantizeRGBToIndex_GetBuildTreeExecuteTime, 1,
   (char*)"V.GetBuildTreeExecuteTime() -> float\nC++: double GetBuildTreeExecuteTime()\n\n"},
  {(char*)"GetLookupIndexExecuteTime", PyvtkImageQuantizeRGBToIndex_GetLookupIndexExecuteTime, 1,
   (char*)"V.GetLookupIndexExecuteTime() -> float\nC++: double GetLookupIndexExecuteTime()\n\n"},
  {(char*)"GetInputType", PyvtkImageQuantizeRGBToIndex_GetInputType, 1,
   (char*)"V.GetInputType() -> int\nC++: int GetInputType()\n\nFor internal use only - get the type of the image\n"},
  {(char*)"SetInitializeExecuteTime", PyvtkImageQuantizeRGBToIndex_SetInitializeExecuteTime, 1,
   (char*)"V.SetInitializeExecuteTime(float)\nC++: void SetInitializeExecuteTime(double a)\n\nFor internal use only - set the times for execution\n"},
  {(char*)"SetBuildTreeExecuteTime", PyvtkImageQuantizeRGBToIndex_SetBuildTreeExecuteTime, 1,
   (char*)"V.SetBuildTreeExecuteTime(float)\nC++: void SetBuildTreeExecuteTime(double a)\n\nFor internal use only - set the times for execution\n"},
  {(char*)"SetLookupIndexExecuteTime", PyvtkImageQuantizeRGBToIndex_SetLookupIndexExecuteTime, 1,
   (char*)"V.SetLookupIndexExecuteTime(float)\nC++: void SetLookupIndexExecuteTime(double a)\n\nFor internal use only - set the times for execution\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageQuantizeRGBToIndex_StaticNew()
{
  return vtkImageQuantizeRGBToIndex::New();
}

PyObject *PyVTKClass_vtkImageQuantizeRGBToIndexNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageQuantizeRGBToIndex_StaticNew,
    PyvtkImageQuantizeRGBToIndex_Methods,
    "vtkImageQuantizeRGBToIndex", modulename,
    NULL, NULL,
    PyvtkImageQuantizeRGBToIndex_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageQuantizeRGBToIndex_Doc()
{
  static const char *docstring[] = {
    "vtkImageQuantizeRGBToIndex - generalized histograms up to 4 dimensions\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageQuantizeRGBToIndex takes a 3 component RGB image as input and\nproduces a one component index image as output, along with a lookup\ntable that contains the color definitions for the index values. This\nfilter works on the entire input extent - it does not perform\nstreaming, and it does not supported threaded execution (because it\nhas to process the entire image).\n\nTo use this filter, you typi",
    "cally set the number of colors (between 2\nand 65536), execute it, and then retrieve the lookup table. The\ncolors can then be using the lookup table and the image index.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageQuantizeRGBToIndex(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageQuantizeRGBToIndexNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageQuantizeRGBToIndex", o) != 0)
    {
    Py_DECREF(o);
    }

}

