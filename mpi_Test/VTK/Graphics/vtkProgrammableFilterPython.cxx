// python wrapper for vtkProgrammableFilter
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
#include "vtkProgrammableFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProgrammableFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProgrammableFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProgrammableFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProgrammableFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkProgrammableFilter_Doc();


static PyObject *
PyvtkProgrammableFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

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
      tempr = op->vtkProgrammableFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

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
      tempr = op->vtkProgrammableFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  vtkProgrammableFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::NewInstance();
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
PyvtkProgrammableFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProgrammableFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProgrammableFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExecuteMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->SetExecuteMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }
    else
      {
      op->vtkProgrammableFilter::SetExecuteMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->vtkProgrammableFilter::SetExecuteMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetPolyDataInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataInput();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::GetPolyDataInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetStructuredPointsInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredPointsInput();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::GetStructuredPointsInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetStructuredGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredGridInput();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::GetStructuredGridInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetUnstructuredGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnstructuredGridInput();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::GetUnstructuredGridInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetRectilinearGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRectilinearGridInput();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::GetRectilinearGridInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetGraphInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  vtkGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphInput();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::GetGraphInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetTableInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableInput();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::GetTableInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_SetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCopyArrays(temp0);
      }
    else
      {
      op->vtkProgrammableFilter::SetCopyArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCopyArrays();
      }
    else
      {
      tempr = op->vtkProgrammableFilter::GetCopyArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_CopyArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyArraysOn();
      }
    else
      {
      op->vtkProgrammableFilter::CopyArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_CopyArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyArraysOff();
      }
    else
      {
      op->vtkProgrammableFilter::CopyArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProgrammableFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProgrammableFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProgrammableFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProgrammableFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProgrammableFilter\nC++: vtkProgrammableFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProgrammableFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProgrammableFilter\nC++: vtkProgrammableFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExecuteMethod", PyvtkProgrammableFilter_SetExecuteMethod, 1,
   (char*)"V.SetExecuteMethod(function)\nC++: void SetExecuteMethod(void (*f)(void *) , void *arg)\n\nSpecify the function to use to operate on the point attribute\ndata. Note that the function takes a single (void *) argument.\n"},
  {(char*)"GetPolyDataInput", PyvtkProgrammableFilter_GetPolyDataInput, 1,
   (char*)"V.GetPolyDataInput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {(char*)"GetStructuredPointsInput", PyvtkProgrammableFilter_GetStructuredPointsInput, 1,
   (char*)"V.GetStructuredPointsInput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsInput()\n\nGet the input as a concrete type.\n"},
  {(char*)"GetStructuredGridInput", PyvtkProgrammableFilter_GetStructuredGridInput, 1,
   (char*)"V.GetStructuredGridInput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridInput()\n\nGet the input as a concrete type.\n"},
  {(char*)"GetUnstructuredGridInput", PyvtkProgrammableFilter_GetUnstructuredGridInput, 1,
   (char*)"V.GetUnstructuredGridInput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridInput()\n\nGet the input as a concrete type.\n"},
  {(char*)"GetRectilinearGridInput", PyvtkProgrammableFilter_GetRectilinearGridInput, 1,
   (char*)"V.GetRectilinearGridInput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridInput()\n\nGet the input as a concrete type.\n"},
  {(char*)"GetGraphInput", PyvtkProgrammableFilter_GetGraphInput, 1,
   (char*)"V.GetGraphInput() -> vtkGraph\nC++: vtkGraph *GetGraphInput()\n\nGet the input as a concrete type.\n"},
  {(char*)"GetTableInput", PyvtkProgrammableFilter_GetTableInput, 1,
   (char*)"V.GetTableInput() -> vtkTable\nC++: vtkTable *GetTableInput()\n\nGet the input as a concrete type.\n"},
  {(char*)"SetCopyArrays", PyvtkProgrammableFilter_SetCopyArrays, 1,
   (char*)"V.SetCopyArrays(bool)\nC++: void SetCopyArrays(bool a)\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {(char*)"GetCopyArrays", PyvtkProgrammableFilter_GetCopyArrays, 1,
   (char*)"V.GetCopyArrays() -> bool\nC++: bool GetCopyArrays()\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {(char*)"CopyArraysOn", PyvtkProgrammableFilter_CopyArraysOn, 1,
   (char*)"V.CopyArraysOn()\nC++: void CopyArraysOn()\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {(char*)"CopyArraysOff", PyvtkProgrammableFilter_CopyArraysOff, 1,
   (char*)"V.CopyArraysOff()\nC++: void CopyArraysOff()\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProgrammableFilter_StaticNew()
{
  return vtkProgrammableFilter::New();
}

PyObject *PyVTKClass_vtkProgrammableFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProgrammableFilter_StaticNew,
    PyvtkProgrammableFilter_Methods,
    "vtkProgrammableFilter", modulename,
    NULL, NULL,
    PyvtkProgrammableFilter_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProgrammableFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProgrammableFilter - a user-programmable filter\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkProgrammableFilter is a filter that can be programmed by the user.\n To use the filter you define a function that retrieves input of the\ncorrect type, creates data, and then manipulates the output of the\nfilter.  Using this filter avoids the need for subclassing - and the\nfunction can be defined in an interpreter wrapper language such as\nTcl or Java.\n\nThe trickiest part of using this filter is t",
    "hat the input and output\nmethods are unusual and cannot be compile-time type checked. Instead,\nas a user of this filter it is your responsibility to set and get the\ncorrect input and output types.\n\nCaveats:\n\nThe filter correctly manages modified time and network execution in\nmost cases. However, if you change the definition of the filter\nfunction, you'll want to send a manual Modified() method to ",
    "the\nfilter to force it to reexecute.\n\nSee Also:\n\nvtkProgrammablePointDataFilter vtkProgrammableSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProgrammableFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProgrammableFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProgrammableFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}
