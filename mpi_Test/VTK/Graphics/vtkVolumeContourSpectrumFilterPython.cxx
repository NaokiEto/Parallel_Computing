// python wrapper for vtkVolumeContourSpectrumFilter
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
#include "vtkVolumeContourSpectrumFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeContourSpectrumFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeContourSpectrumFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeContourSpectrumFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeContourSpectrumFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkVolumeContourSpectrumFilter_Doc();


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      tempr = op->vtkVolumeContourSpectrumFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      tempr = op->vtkVolumeContourSpectrumFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  vtkVolumeContourSpectrumFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeContourSpectrumFilter::NewInstance();
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
PyvtkVolumeContourSpectrumFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumeContourSpectrumFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumeContourSpectrumFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      op->vtkVolumeContourSpectrumFilter::SetArcId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      tempr = op->vtkVolumeContourSpectrumFilter::GetArcId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      op->vtkVolumeContourSpectrumFilter::SetNumberOfSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      tempr = op->vtkVolumeContourSpectrumFilter::GetNumberOfSamples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      op->vtkVolumeContourSpectrumFilter::SetFieldId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      tempr = op->vtkVolumeContourSpectrumFilter::GetFieldId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

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
      tempr = op->vtkVolumeContourSpectrumFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeContourSpectrumFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeContourSpectrumFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeContourSpectrumFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeContourSpectrumFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeContourSpectrumFilter\nC++: vtkVolumeContourSpectrumFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeContourSpectrumFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeContourSpectrumFilter\nC++: vtkVolumeContourSpectrumFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetArcId", PyvtkVolumeContourSpectrumFilter_SetArcId, 1,
   (char*)"V.SetArcId(int)\nC++: void SetArcId(vtkIdType a)\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {(char*)"GetArcId", PyvtkVolumeContourSpectrumFilter_GetArcId, 1,
   (char*)"V.GetArcId() -> int\nC++: vtkIdType GetArcId()\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {(char*)"SetNumberOfSamples", PyvtkVolumeContourSpectrumFilter_SetNumberOfSamples, 1,
   (char*)"V.SetNumberOfSamples(int)\nC++: void SetNumberOfSamples(int a)\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {(char*)"GetNumberOfSamples", PyvtkVolumeContourSpectrumFilter_GetNumberOfSamples, 1,
   (char*)"V.GetNumberOfSamples() -> int\nC++: int GetNumberOfSamples()\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {(char*)"SetFieldId", PyvtkVolumeContourSpectrumFilter_SetFieldId, 1,
   (char*)"V.SetFieldId(int)\nC++: void SetFieldId(vtkIdType a)\n\nSet the scalar field Id Default value: 0\n"},
  {(char*)"GetFieldId", PyvtkVolumeContourSpectrumFilter_GetFieldId, 1,
   (char*)"V.GetFieldId() -> int\nC++: vtkIdType GetFieldId()\n\nSet the scalar field Id Default value: 0\n"},
  {(char*)"GetOutput", PyvtkVolumeContourSpectrumFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkTable\nC++: vtkTable *GetOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeContourSpectrumFilter_StaticNew()
{
  return vtkVolumeContourSpectrumFilter::New();
}

PyObject *PyVTKClass_vtkVolumeContourSpectrumFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeContourSpectrumFilter_StaticNew,
    PyvtkVolumeContourSpectrumFilter_Methods,
    "vtkVolumeContourSpectrumFilter", modulename,
    NULL, NULL,
    PyvtkVolumeContourSpectrumFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVolumeContourSpectrumFilter_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeContourSpectrumFilter - compute an approximation of the\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "The filter takes a vtkUnstructuredGrid as an input (port 0), along\nwith a vtkReebGraph (port 1). The Reeb graph arc to consider can be\nspecified with SetArcId() (default: 0). The number of (evenly\ndistributed) samples of the signature can be defined with\nSetNumberOfSamples() (default value: 100). The filter will first try\nto pull as a scalar field the vtkDataArray with Id 'FieldId' of the\nvtkUnstr",
    "ucturedGrid, see SetFieldId (default: 0). The filter will\nabort if this field does not exist.\n\nThe filter outputs a vtkTable with the volume contour signature\napproximation, each sample being evenly distributed in the function\nspan of the arc.\n\nThis filter is a typical example for designing your own contour\nsignature filter (with customized metrics). It also shows typical\nvtkReebGraph traversals.\n",
    "\nReference: C. Bajaj, V. Pascucci, D. Schikore, \"The contour\nspectrum\", IEEE Visualization, 167-174, 1997.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeContourSpectrumFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeContourSpectrumFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeContourSpectrumFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

