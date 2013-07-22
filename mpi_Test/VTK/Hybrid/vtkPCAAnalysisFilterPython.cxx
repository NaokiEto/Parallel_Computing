// python wrapper for vtkPCAAnalysisFilter
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
#include "vtkPCAAnalysisFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPCAAnalysisFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPCAAnalysisFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPCAAnalysisFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPCAAnalysisFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkPCAAnalysisFilter_Doc();


static PyObject *
PyvtkPCAAnalysisFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

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
      tempr = op->vtkPCAAnalysisFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

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
      tempr = op->vtkPCAAnalysisFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  vtkPCAAnalysisFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPCAAnalysisFilter::NewInstance();
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
PyvtkPCAAnalysisFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPCAAnalysisFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPCAAnalysisFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetEvals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEvals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  vtkFloatArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEvals();
      }
    else
      {
      tempr = op->vtkPCAAnalysisFilter::GetEvals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_SetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfInputs(temp0);
      }
    else
      {
      op->vtkPCAAnalysisFilter::SetNumberOfInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  int temp0;
  vtkPointSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkPCAAnalysisFilter::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPCAAnalysisFilter_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkPCAAnalysisFilter::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPCAAnalysisFilter_SetInput_Methods[] = {
  {NULL, PyvtkPCAAnalysisFilter_SetInput_s1, 1,
   (char*)"@iO *vtkPointSet"},
  {NULL, PyvtkPCAAnalysisFilter_SetInput_s2, 1,
   (char*)"@iO *vtkDataObject"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPCAAnalysisFilter_SetInput(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPCAAnalysisFilter_SetInput_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkPCAAnalysisFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  int temp0;
  vtkPointSet *tempr;
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
      tempr = op->vtkPCAAnalysisFilter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetParameterisedShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterisedShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  vtkFloatArray *temp0 = NULL;
  vtkPointSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->GetParameterisedShape(temp0, temp1);
      }
    else
      {
      op->vtkPCAAnalysisFilter::GetParameterisedShape(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetShapeParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  vtkPointSet *temp0 = NULL;
  vtkFloatArray *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetVTKObject(temp1, "vtkFloatArray") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetShapeParameters(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPCAAnalysisFilter::GetShapeParameters(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetModesRequiredFor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModesRequiredFor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  double temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModesRequiredFor(temp0);
      }
    else
      {
      tempr = op->vtkPCAAnalysisFilter::GetModesRequiredFor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPCAAnalysisFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPCAAnalysisFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPCAAnalysisFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPCAAnalysisFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPCAAnalysisFilter\nC++: vtkPCAAnalysisFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPCAAnalysisFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPCAAnalysisFilter\nC++: vtkPCAAnalysisFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEvals", PyvtkPCAAnalysisFilter_GetEvals, 1,
   (char*)"V.GetEvals() -> vtkFloatArray\nC++: vtkFloatArray *GetEvals()\n\nGet the vector of eigenvalues sorted in descending order\n"},
  {(char*)"SetNumberOfInputs", PyvtkPCAAnalysisFilter_SetNumberOfInputs, 1,
   (char*)"V.SetNumberOfInputs(int)\nC++: void SetNumberOfInputs(int n)\n\nSpecify how many pointsets are going to be given as input.\n"},
  {(char*)"SetInput", PyvtkPCAAnalysisFilter_SetInput, 1,
   (char*)"V.SetInput(int, vtkPointSet)\nC++: void SetInput(int idx, vtkPointSet *p)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int idx, vtkDataObject *input)\n\nSpecify the input pointset with index idx. Call SetNumberOfInputs\nbefore calling this function.\n"},
  {(char*)"GetInput", PyvtkPCAAnalysisFilter_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkPointSet\nC++: vtkPointSet *GetInput(int idx)\n\nRetrieve the input with index idx (usually only used for pipeline\ntracing).\n"},
  {(char*)"GetParameterisedShape", PyvtkPCAAnalysisFilter_GetParameterisedShape, 1,
   (char*)"V.GetParameterisedShape(vtkFloatArray, vtkPointSet)\nC++: void GetParameterisedShape(vtkFloatArray *b,\n    vtkPointSet *shape)\n\nFills the shape with:\n\nmean + b[0] * sqrt(eigenvalue[0]) * eigenvector[0]\n     + b[1] * sqrt(eigenvalue[1]) * eigenvector[1] ...\n     + b[sizeb-1] * sqrt(eigenvalue[bsize-1]) *\neigenvector[bsize-1]\n\nhere b are the parameters expressed in standard deviations bsize\nis the number of parameters in the b vector This function assumes\nthat shape is allready allocated with the right size, it just\nmoves the points.\n"},
  {(char*)"GetShapeParameters", PyvtkPCAAnalysisFilter_GetShapeParameters, 1,
   (char*)"V.GetShapeParameters(vtkPointSet, vtkFloatArray, int)\nC++: void GetShapeParameters(vtkPointSet *shape, vtkFloatArray *b,\n     int bsize)\n\nReturn the bsize parameters b that best model the given shape (in\nstandard deviations). That is that the given shape will be\napproximated by:\n\nshape ~ mean + b[0] * sqrt(eigenvalue[0]) * eigenvector[0]\n             + b[1] * sqrt(eigenvalue[1]) * eigenvector[1]\n        ...\n             + b[bsize-1] * sqrt(eigenvalue[bsize-1]) *\neigenvector[bsize-1]\n"},
  {(char*)"GetModesRequiredFor", PyvtkPCAAnalysisFilter_GetModesRequiredFor, 1,
   (char*)"V.GetModesRequiredFor(float) -> int\nC++: int GetModesRequiredFor(double proportion)\n\nRetrieve how many modes are necessary to model the given\nproportion of the variation. proportion should be between 0 and 1\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPCAAnalysisFilter_StaticNew()
{
  return vtkPCAAnalysisFilter::New();
}

PyObject *PyVTKClass_vtkPCAAnalysisFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPCAAnalysisFilter_StaticNew,
    PyvtkPCAAnalysisFilter_Methods,
    "vtkPCAAnalysisFilter", modulename,
    NULL, NULL,
    PyvtkPCAAnalysisFilter_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPCAAnalysisFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPCAAnalysisFilter - Performs principal component analysis of a set\nof aligned pointsets\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkPCAAnalysisFilter is a filter that takes as input a set of aligned\npointsets (any object derived from vtkPointSet) and performs a\nprincipal component analysis of the coordinates. This can be used to\nvisualise the major or minor modes of variation seen in a set of\nsimilar biological objects with corresponding landmarks.\nvtkPCAAnalysisFilter is designed to work with the output from the\nvtkProcrus",
    "tesAnalysisFilter\n\nCall SetNumberOfInputs(n) before calling SetInput(0) ...\nSetInput(n-1). Retrieve the outputs using GetOutput(0) ...\nGetOutput(n-1).\n\nvtkPCAAnalysisFilter is an implementation of (for example):\n\nT. Cootes et al. : Active Shape Models - their training and\napplication. Computer Vision and Image Understanding, 61(1):38-59,\n1995.\n\nThe material can also be found in Tim Cootes' ever-ch",
    "anging online\nreport published at his website: http://www.isbe.man.ac.uk/~bim/\n\nCaveats:\n\nAll of the input pointsets must have the same number of points.\n\nThanks:\n\nRasmus Paulsen and Tim Hutton who developed and contributed this\nclass\n\nSee Also:\n\nvtkProcrustesAlignmentFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPCAAnalysisFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPCAAnalysisFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPCAAnalysisFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

