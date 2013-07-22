// python wrapper for vtkAreaContourSpectrumFilter
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
#include "vtkAreaContourSpectrumFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAreaContourSpectrumFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAreaContourSpectrumFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAreaContourSpectrumFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAreaContourSpectrumFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkAreaContourSpectrumFilter_Doc();


static PyObject *
PyvtkAreaContourSpectrumFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

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
      tempr = op->vtkAreaContourSpectrumFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

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
      tempr = op->vtkAreaContourSpectrumFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  vtkAreaContourSpectrumFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAreaContourSpectrumFilter::NewInstance();
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
PyvtkAreaContourSpectrumFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAreaContourSpectrumFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAreaContourSpectrumFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_SetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArcId(temp0);
      }
    else
      {
      op->vtkAreaContourSpectrumFilter::SetArcId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArcId();
      }
    else
      {
      tempr = op->vtkAreaContourSpectrumFilter::GetArcId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSamples(temp0);
      }
    else
      {
      op->vtkAreaContourSpectrumFilter::SetNumberOfSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSamples();
      }
    else
      {
      tempr = op->vtkAreaContourSpectrumFilter::GetNumberOfSamples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldId(temp0);
      }
    else
      {
      op->vtkAreaContourSpectrumFilter::SetFieldId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldId();
      }
    else
      {
      tempr = op->vtkAreaContourSpectrumFilter::GetFieldId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkAreaContourSpectrumFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAreaContourSpectrumFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAreaContourSpectrumFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAreaContourSpectrumFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAreaContourSpectrumFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAreaContourSpectrumFilter\nC++: vtkAreaContourSpectrumFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAreaContourSpectrumFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAreaContourSpectrumFilter\nC++: vtkAreaContourSpectrumFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetArcId", PyvtkAreaContourSpectrumFilter_SetArcId, 1,
   (char*)"V.SetArcId(int)\nC++: void SetArcId(vtkIdType a)\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {(char*)"GetArcId", PyvtkAreaContourSpectrumFilter_GetArcId, 1,
   (char*)"V.GetArcId() -> int\nC++: vtkIdType GetArcId()\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {(char*)"SetNumberOfSamples", PyvtkAreaContourSpectrumFilter_SetNumberOfSamples, 1,
   (char*)"V.SetNumberOfSamples(int)\nC++: void SetNumberOfSamples(int a)\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {(char*)"GetNumberOfSamples", PyvtkAreaContourSpectrumFilter_GetNumberOfSamples, 1,
   (char*)"V.GetNumberOfSamples() -> int\nC++: int GetNumberOfSamples()\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {(char*)"SetFieldId", PyvtkAreaContourSpectrumFilter_SetFieldId, 1,
   (char*)"V.SetFieldId(int)\nC++: void SetFieldId(vtkIdType a)\n\nSet the scalar field Id Default value: 0\n"},
  {(char*)"GetFieldId", PyvtkAreaContourSpectrumFilter_GetFieldId, 1,
   (char*)"V.GetFieldId() -> int\nC++: vtkIdType GetFieldId()\n\nSet the scalar field Id Default value: 0\n"},
  {(char*)"GetOutput", PyvtkAreaContourSpectrumFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkTable\nC++: vtkTable *GetOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAreaContourSpectrumFilter_StaticNew()
{
  return vtkAreaContourSpectrumFilter::New();
}

PyObject *PyVTKClass_vtkAreaContourSpectrumFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAreaContourSpectrumFilter_StaticNew,
    PyvtkAreaContourSpectrumFilter_Methods,
    "vtkAreaContourSpectrumFilter", modulename,
    NULL, NULL,
    PyvtkAreaContourSpectrumFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAreaContourSpectrumFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAreaContourSpectrumFilter - compute an approximation of the area\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "The filter takes a vtkPolyData as an input (port 0), along with a\nvtkReebGraph (port 1). The Reeb graph arc to consider can be\nspecified with SetArcId() (default: 0). The number of (evenly\ndistributed) samples of the signature can be defined with\nSetNumberOfSamples() (default value: 100). The filter will first try\nto pull as a scalar field the vtkDataArray with Id 'FieldId' of the\nvtkPolyData, see",
    " SetFieldId (default: 0). The filter will abort if\nthis field does not exist.\n\nThe filter outputs a vtkTable with the area contour signature\napproximation, each sample being evenly distributed in the function\nspan of the arc.\n\nThis filter is a typical example for designing your own contour\nsignature filter (with customized metrics). It also shows typical\nvtkReebGraph traversals.\n\nReference: C. Baj",
    "aj, V. Pascucci, D. Schikore, \"The contour\nspectrum\", IEEE Visualization, 167-174, 1997.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAreaContourSpectrumFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAreaContourSpectrumFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAreaContourSpectrumFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

