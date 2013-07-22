// python wrapper for vtkDataSetToDataSetFilter
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
#include "vtkDataSetToDataSetFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetToDataSetFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetToDataSetFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetToDataSetFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetToDataSetFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetSourceNew
extern "C" { PyObject *PyVTKClass_vtkDataSetSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetSourceNew
#endif

static const char **PyvtkDataSetToDataSetFilter_Doc();


static PyObject *
PyvtkDataSetToDataSetFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

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
      tempr = op->vtkDataSetToDataSetFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

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
      tempr = op->vtkDataSetToDataSetFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

  vtkDataSetToDataSetFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetToDataSetFilter::NewInstance();
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
PyvtkDataSetToDataSetFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkDataSetToDataSetFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkDataSetToDataSetFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetToDataSetFilter_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

  int temp0;
  vtkDataSet *tempr;
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
      tempr = op->vtkDataSetToDataSetFilter::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataSetToDataSetFilter_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataSetToDataSetFilter_GetOutput_s1(self, args);
    case 1:
      return PyvtkDataSetToDataSetFilter_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkDataSetToDataSetFilter_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

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
      tempr = op->vtkDataSetToDataSetFilter::GetPolyDataOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredPointsOutput();
      }
    else
      {
      tempr = op->vtkDataSetToDataSetFilter::GetStructuredPointsOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

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
      tempr = op->vtkDataSetToDataSetFilter::GetStructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

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
      tempr = op->vtkDataSetToDataSetFilter::GetUnstructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRectilinearGridOutput();
      }
    else
      {
      tempr = op->vtkDataSetToDataSetFilter::GetRectilinearGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkDataSetToDataSetFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToDataSetFilter_ComputeInputUpdateExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInputUpdateExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataSetFilter *op = static_cast<vtkDataSetToDataSetFilter *>(vp);

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
      op->vtkDataSetToDataSetFilter::ComputeInputUpdateExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetToDataSetFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetToDataSetFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetToDataSetFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetToDataSetFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetToDataSetFilter\nC++: vtkDataSetToDataSetFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkDataSetToDataSetFilter_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: void SetInput(vtkDataSet *input)\n\nSpecify the input data or filter.\n"},
  {(char*)"GetOutput", PyvtkDataSetToDataSetFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataSet\nC++: vtkDataSet *GetOutput()\nV.GetOutput(int) -> vtkDataSet\nC++: vtkDataSet *GetOutput(int idx)\n\nGet the output of this filter. If output is NULL then input\nhasn't been set which is necessary for abstract objects.\n"},
  {(char*)"GetPolyDataOutput", PyvtkDataSetToDataSetFilter_GetPolyDataOutput, 1,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: virtual vtkPolyData *GetPolyDataOutput()\n\nGet the output as vtkPolyData.\n"},
  {(char*)"GetStructuredPointsOutput", PyvtkDataSetToDataSetFilter_GetStructuredPointsOutput, 1,
   (char*)"V.GetStructuredPointsOutput() -> vtkStructuredPoints\nC++: virtual vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output as vtkStructuredPoints.\n"},
  {(char*)"GetStructuredGridOutput", PyvtkDataSetToDataSetFilter_GetStructuredGridOutput, 1,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: virtual vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as vtkStructuredGrid.\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkDataSetToDataSetFilter_GetUnstructuredGridOutput, 1,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as vtkUnstructuredGrid.\n"},
  {(char*)"GetRectilinearGridOutput", PyvtkDataSetToDataSetFilter_GetRectilinearGridOutput, 1,
   (char*)"V.GetRectilinearGridOutput() -> vtkRectilinearGrid\nC++: virtual vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as vtkRectilinearGrid.\n"},
  {(char*)"GetInput", PyvtkDataSetToDataSetFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet the input data or filter.\n"},
  {(char*)"ComputeInputUpdateExtents", PyvtkDataSetToDataSetFilter_ComputeInputUpdateExtents, 1,
   (char*)"V.ComputeInputUpdateExtents(vtkDataObject)\nC++: virtual void ComputeInputUpdateExtents(vtkDataObject *output)\n\nBy default copy the output update extent to the input\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataSetToDataSetFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataSetToDataSetFilter_Methods,
    "vtkDataSetToDataSetFilter", modulename,
    NULL, NULL,
    PyvtkDataSetToDataSetFilter_Doc(),
    PyVTKClass_vtkDataSetSourceNew(modulename));
  return cls;
}

const char **PyvtkDataSetToDataSetFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetToDataSetFilter - abstract filter class\n\n",
    "Superclass: vtkDataSetSource\n\n",
    "vtkDataSetToDataSetFilter is an abstract filter class. Subclasses of\nvtkDataSetToDataSetFilter take a dataset as input and create a\ndataset as output. The form of the input geometry is not changed in\nthese filters, only the point attributes (e.g. scalars, vectors,\netc.).\n\nThis is an abstract filter type. What that means is that the output\nof the filter is an abstract type (i.e., vtkDataSet), no ma",
    "tter what\nthe input of the filter is. This can cause problems connecting\ntogether filters due to the change in dataset type. (For example, in\na series of filters processing vtkPolyData, when a\nvtkDataSetToDataSetFilter or subclass is introduced into the\npipeline, if the filter downstream of it takes vtkPolyData as input,\nthe pipeline connection cannot be made.) To get around this problem,\nuse one ",
    "of the convenience methods to return a concrete type (e.g.,\nvtkGetPolyDataOutput(), GetStructuredPointsOutput(), etc.).\n\nSee Also:\n\nvtkBrownianPoints vtkProbeFilter vtkThresholdTextureCoords vtkDicer\nvtkElevationFilter vtkImplicitTextureCoords vtkTextureMapToPlane\nvtkVectorDot vtkVectorNorm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetToDataSetFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetToDataSetFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetToDataSetFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

