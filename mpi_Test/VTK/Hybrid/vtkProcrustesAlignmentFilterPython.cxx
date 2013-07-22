// python wrapper for vtkProcrustesAlignmentFilter
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
#include "vtkProcrustesAlignmentFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProcrustesAlignmentFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProcrustesAlignmentFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProcrustesAlignmentFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProcrustesAlignmentFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkProcrustesAlignmentFilter_Doc();


static PyObject *
PyvtkProcrustesAlignmentFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

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
      tempr = op->vtkProcrustesAlignmentFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

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
      tempr = op->vtkProcrustesAlignmentFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  vtkProcrustesAlignmentFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProcrustesAlignmentFilter::NewInstance();
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
PyvtkProcrustesAlignmentFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProcrustesAlignmentFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProcrustesAlignmentFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetLandmarkTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLandmarkTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  vtkLandmarkTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLandmarkTransform();
      }
    else
      {
      tempr = op->vtkProcrustesAlignmentFilter::GetLandmarkTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetMeanPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMeanPoints();
      }
    else
      {
      tempr = op->vtkProcrustesAlignmentFilter::GetMeanPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_SetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

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
      op->vtkProcrustesAlignmentFilter::SetNumberOfInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

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
      op->vtkProcrustesAlignmentFilter::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProcrustesAlignmentFilter_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

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
      op->vtkProcrustesAlignmentFilter::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProcrustesAlignmentFilter_SetInput_Methods[] = {
  {NULL, PyvtkProcrustesAlignmentFilter_SetInput_s1, 1,
   (char*)"@iO *vtkPointSet"},
  {NULL, PyvtkProcrustesAlignmentFilter_SetInput_s2, 1,
   (char*)"@iO *vtkDataObject"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProcrustesAlignmentFilter_SetInput(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProcrustesAlignmentFilter_SetInput_Methods;
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
PyvtkProcrustesAlignmentFilter_SetStartFromCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartFromCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartFromCentroid(temp0);
      }
    else
      {
      op->vtkProcrustesAlignmentFilter::SetStartFromCentroid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetStartFromCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartFromCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartFromCentroid();
      }
    else
      {
      tempr = op->vtkProcrustesAlignmentFilter::GetStartFromCentroid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_StartFromCentroidOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFromCentroidOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartFromCentroidOn();
      }
    else
      {
      op->vtkProcrustesAlignmentFilter::StartFromCentroidOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_StartFromCentroidOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFromCentroidOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartFromCentroidOff();
      }
    else
      {
      op->vtkProcrustesAlignmentFilter::StartFromCentroidOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

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
      tempr = op->vtkProcrustesAlignmentFilter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProcrustesAlignmentFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProcrustesAlignmentFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProcrustesAlignmentFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProcrustesAlignmentFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProcrustesAlignmentFilter\nC++: vtkProcrustesAlignmentFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProcrustesAlignmentFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProcrustesAlignmentFilter\nC++: vtkProcrustesAlignmentFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetLandmarkTransform", PyvtkProcrustesAlignmentFilter_GetLandmarkTransform, 1,
   (char*)"V.GetLandmarkTransform() -> vtkLandmarkTransform\nC++: vtkLandmarkTransform *GetLandmarkTransform()\n\nGet the internal landmark transform. Use it to constrain the\nnumber of degrees of freedom of the alignment (i.e. rigid body,\nsimilarity, etc.). The default is a similarity alignment.\n"},
  {(char*)"GetMeanPoints", PyvtkProcrustesAlignmentFilter_GetMeanPoints, 1,
   (char*)"V.GetMeanPoints() -> vtkPoints\nC++: vtkPoints *GetMeanPoints()\n\nGet the estimated mean point cloud\n"},
  {(char*)"SetNumberOfInputs", PyvtkProcrustesAlignmentFilter_SetNumberOfInputs, 1,
   (char*)"V.SetNumberOfInputs(int)\nC++: void SetNumberOfInputs(int n)\n\nSpecify how many pointsets are going to be given as input.\n"},
  {(char*)"SetInput", PyvtkProcrustesAlignmentFilter_SetInput, 1,
   (char*)"V.SetInput(int, vtkPointSet)\nC++: void SetInput(int idx, vtkPointSet *p)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int idx, vtkDataObject *input)\n\nSpecify the input pointset with index idx. Call SetNumberOfInputs\nbefore calling this function.\n"},
  {(char*)"SetStartFromCentroid", PyvtkProcrustesAlignmentFilter_SetStartFromCentroid, 1,
   (char*)"V.SetStartFromCentroid(bool)\nC++: void SetStartFromCentroid(bool a)\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {(char*)"GetStartFromCentroid", PyvtkProcrustesAlignmentFilter_GetStartFromCentroid, 1,
   (char*)"V.GetStartFromCentroid() -> bool\nC++: bool GetStartFromCentroid()\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {(char*)"StartFromCentroidOn", PyvtkProcrustesAlignmentFilter_StartFromCentroidOn, 1,
   (char*)"V.StartFromCentroidOn()\nC++: void StartFromCentroidOn()\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {(char*)"StartFromCentroidOff", PyvtkProcrustesAlignmentFilter_StartFromCentroidOff, 1,
   (char*)"V.StartFromCentroidOff()\nC++: void StartFromCentroidOff()\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {(char*)"GetInput", PyvtkProcrustesAlignmentFilter_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkPointSet\nC++: vtkPointSet *GetInput(int idx)\n\nRetrieve the input point set with index idx (usually only for\npipeline tracing).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProcrustesAlignmentFilter_StaticNew()
{
  return vtkProcrustesAlignmentFilter::New();
}

PyObject *PyVTKClass_vtkProcrustesAlignmentFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProcrustesAlignmentFilter_StaticNew,
    PyvtkProcrustesAlignmentFilter_Methods,
    "vtkProcrustesAlignmentFilter", modulename,
    NULL, NULL,
    PyvtkProcrustesAlignmentFilter_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProcrustesAlignmentFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProcrustesAlignmentFilter - aligns a set of pointsets together\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkProcrustesAlignmentFilter is a filter that takes a set of\npointsets (any object derived from vtkPointSet) and aligns them in a\nleast-squares sense to their mutual mean. The algorithm is iterated\nuntil convergence, as the mean must be recomputed after each\nalignment.\n\nCall SetNumberOfInputs(n) before calling SetInput(0) ...\nSetInput(n-1).\n\nRetrieve the outputs using GetOutput(0) ... GetOutput(n-",
    "1).\n\nThe default (in vtkLandmarkTransform) is for a similarity alignment.\nFor a rigid-body alignment (to build a 'size-and-shape' model) use:\n\n\n   GetLandmarkTransform()->SetModeToRigidBody().\n\nAffine alignments are not normally used but are left in for\ncompleteness:\n\n\n   GetLandmarkTransform()->SetModeToAffine().\n\nvtkProcrustesAlignmentFilter is an implementation of:\n\n\n   J.C. Gower (1975)\n   Gen",
    "eralized Procrustes Analysis. Psychometrika, 40:33-51.\n\nCaveats:\n\nAll of the input pointsets must have the same number of points.\n\nThanks:\n\nTim Hutton and Rasmus Paulsen who developed and contributed this\nclass\n\nSee Also:\n\nvtkLandmarkTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProcrustesAlignmentFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProcrustesAlignmentFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProcrustesAlignmentFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

