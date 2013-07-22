// python wrapper for vtkPointSetToPointSetFilter
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
#include "vtkPointSetToPointSetFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointSetToPointSetFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointSetToPointSetFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointSetToPointSetFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointSetToPointSetFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetSourceNew
extern "C" { PyObject *PyVTKClass_vtkPointSetSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetSourceNew
#endif

static const char **PyvtkPointSetToPointSetFilter_Doc();


static PyObject *
PyvtkPointSetToPointSetFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

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
      tempr = op->vtkPointSetToPointSetFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToPointSetFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

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
      tempr = op->vtkPointSetToPointSetFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToPointSetFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  vtkPointSetToPointSetFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointSetToPointSetFilter::NewInstance();
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
PyvtkPointSetToPointSetFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  vtkPointSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPointSetToPointSetFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToPointSetFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  vtkPointSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkPointSetToPointSetFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToPointSetFilter_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  vtkPointSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkPointSetToPointSetFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetToPointSetFilter_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  int temp0;
  vtkPointSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkPointSetToPointSetFilter::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetToPointSetFilter_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPointSetToPointSetFilter_GetOutput_s1(self, args);
    case 1:
      return PyvtkPointSetToPointSetFilter_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkPointSetToPointSetFilter_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataOutput();
      }
    else
      {
      tempr = op->vtkPointSetToPointSetFilter::GetPolyDataOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToPointSetFilter_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredGridOutput();
      }
    else
      {
      tempr = op->vtkPointSetToPointSetFilter::GetStructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToPointSetFilter_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnstructuredGridOutput();
      }
    else
      {
      tempr = op->vtkPointSetToPointSetFilter::GetUnstructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToPointSetFilter_ComputeInputUpdateExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInputUpdateExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToPointSetFilter *op = static_cast<vtkPointSetToPointSetFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ComputeInputUpdateExtents(temp0);
      }
    else
      {
      op->vtkPointSetToPointSetFilter::ComputeInputUpdateExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSetToPointSetFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSetToPointSetFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSetToPointSetFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSetToPointSetFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointSetToPointSetFilter\nC++: vtkPointSetToPointSetFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkPointSetToPointSetFilter_SetInput, 1,
   (char*)"V.SetInput(vtkPointSet)\nC++: void SetInput(vtkPointSet *input)\n\nSpecify the input data or filter.\n"},
  {(char*)"GetInput", PyvtkPointSetToPointSetFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkPointSet\nC++: vtkPointSet *GetInput()\n\nGet the input data or filter.\n"},
  {(char*)"GetOutput", PyvtkPointSetToPointSetFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkPointSet\nC++: vtkPointSet *GetOutput()\nV.GetOutput(int) -> vtkPointSet\nC++: vtkPointSet *GetOutput(int idx)\n\nGet the output of this filter. If output is NULL, then input\nhasn't been set, which is necessary for abstract filter objects.\n"},
  {(char*)"GetPolyDataOutput", PyvtkPointSetToPointSetFilter_GetPolyDataOutput, 1,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as vtkPolyData. Performs run-time checking.\n"},
  {(char*)"GetStructuredGridOutput", PyvtkPointSetToPointSetFilter_GetStructuredGridOutput, 1,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as vtkStructuredGrid. Performs run-time checking.\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkPointSetToPointSetFilter_GetUnstructuredGridOutput, 1,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as vtkUnstructuredGrid. Performs run-time\nchecking.\n"},
  {(char*)"ComputeInputUpdateExtents", PyvtkPointSetToPointSetFilter_ComputeInputUpdateExtents, 1,
   (char*)"V.ComputeInputUpdateExtents(vtkDataObject)\nC++: virtual void ComputeInputUpdateExtents(vtkDataObject *output)\n\nBy default copy the output update extent to the input\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPointSetToPointSetFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPointSetToPointSetFilter_Methods,
    "vtkPointSetToPointSetFilter", modulename,
    NULL, NULL,
    PyvtkPointSetToPointSetFilter_Doc(),
    PyVTKClass_vtkPointSetSourceNew(modulename));
  return cls;
}

const char **PyvtkPointSetToPointSetFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPointSetToPointSetFilter - abstract filter class \n\n",
    "Superclass: vtkPointSetSource\n\n",
    "vtkPointSetToPointSetFilter is an abstract filter class whose\nsubclasses take as input a point set and generates a point set on\noutput.  At a minimum, the concrete subclasses of\nvtkPointSetToPointSetFilter modify their point coordinates. They\nnever modify their topological form, however.\n\nThis is an abstract filter type. What that means is that the output\nof the filter is an abstract type (i.e., v",
    "tkPointSet), no matter what\nthe input of the filter is. This can cause problems connecting\ntogether filters due to the change in dataset type. (For example, in\na series of filters processing vtkPolyData, when a\nvtkPointSetToPointSetFilter or subclass is introduced into the\npipeline, if the filter downstream of it takes vtkPolyData as input,\nthe pipeline connection cannot be made.) To get around th",
    "is problem,\nuse one of the convenience methods to return a concrete type (e.g.,\nvtkGetPolyDataOutput(), GetStructuredGridOutput(), etc.).\n\nSee Also:\n\nvtkTransformFilter vtkWarpScalar vtkWarpTo vtkWarpVector\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSetToPointSetFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSetToPointSetFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSetToPointSetFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

