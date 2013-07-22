// python wrapper for vtkReebGraphVolumeSkeletonFilter
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
#include "vtkReebGraphVolumeSkeletonFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkReebGraphVolumeSkeletonFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkReebGraphVolumeSkeletonFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkReebGraphVolumeSkeletonFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkReebGraphVolumeSkeletonFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkReebGraphVolumeSkeletonFilter_Doc();


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

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
      tempr = op->vtkReebGraphVolumeSkeletonFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

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
      tempr = op->vtkReebGraphVolumeSkeletonFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

  vtkReebGraphVolumeSkeletonFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkReebGraphVolumeSkeletonFilter::NewInstance();
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
PyvtkReebGraphVolumeSkeletonFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkReebGraphVolumeSkeletonFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkReebGraphVolumeSkeletonFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

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
      op->vtkReebGraphVolumeSkeletonFilter::SetNumberOfSamples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

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
      tempr = op->vtkReebGraphVolumeSkeletonFilter::GetNumberOfSamples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_SetNumberOfSmoothingIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSmoothingIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSmoothingIterations(temp0);
      }
    else
      {
      op->vtkReebGraphVolumeSkeletonFilter::SetNumberOfSmoothingIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_GetNumberOfSmoothingIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSmoothingIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSmoothingIterations();
      }
    else
      {
      tempr = op->vtkReebGraphVolumeSkeletonFilter::GetNumberOfSmoothingIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

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
      op->vtkReebGraphVolumeSkeletonFilter::SetFieldId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

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
      tempr = op->vtkReebGraphVolumeSkeletonFilter::GetFieldId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphVolumeSkeletonFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphVolumeSkeletonFilter *op = static_cast<vtkReebGraphVolumeSkeletonFilter *>(vp);

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
      tempr = op->vtkReebGraphVolumeSkeletonFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkReebGraphVolumeSkeletonFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkReebGraphVolumeSkeletonFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReebGraphVolumeSkeletonFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReebGraphVolumeSkeletonFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkReebGraphVolumeSkeletonFilter\nC++: vtkReebGraphVolumeSkeletonFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReebGraphVolumeSkeletonFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReebGraphVolumeSkeletonFilter\nC++: vtkReebGraphVolumeSkeletonFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfSamples", PyvtkReebGraphVolumeSkeletonFilter_SetNumberOfSamples, 1,
   (char*)"V.SetNumberOfSamples(int)\nC++: void SetNumberOfSamples(int a)\n\nSet the number of samples along each arc of the Reeb graph\nDefault value: 5\n"},
  {(char*)"GetNumberOfSamples", PyvtkReebGraphVolumeSkeletonFilter_GetNumberOfSamples, 1,
   (char*)"V.GetNumberOfSamples() -> int\nC++: int GetNumberOfSamples()\n\nSet the number of samples along each arc of the Reeb graph\nDefault value: 5\n"},
  {(char*)"SetNumberOfSmoothingIterations", PyvtkReebGraphVolumeSkeletonFilter_SetNumberOfSmoothingIterations, 1,
   (char*)"V.SetNumberOfSmoothingIterations(int)\nC++: void SetNumberOfSmoothingIterations(int a)\n\nSet the number of optional smoothing iterations Default value: 30\n"},
  {(char*)"GetNumberOfSmoothingIterations", PyvtkReebGraphVolumeSkeletonFilter_GetNumberOfSmoothingIterations, 1,
   (char*)"V.GetNumberOfSmoothingIterations() -> int\nC++: int GetNumberOfSmoothingIterations()\n\nSet the number of optional smoothing iterations Default value: 30\n"},
  {(char*)"SetFieldId", PyvtkReebGraphVolumeSkeletonFilter_SetFieldId, 1,
   (char*)"V.SetFieldId(int)\nC++: void SetFieldId(vtkIdType a)\n\nSet the scalar field Id Default value: 0\n"},
  {(char*)"GetFieldId", PyvtkReebGraphVolumeSkeletonFilter_GetFieldId, 1,
   (char*)"V.GetFieldId() -> int\nC++: vtkIdType GetFieldId()\n\nSet the scalar field Id Default value: 0\n"},
  {(char*)"GetOutput", PyvtkReebGraphVolumeSkeletonFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkTable\nC++: vtkTable *GetOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReebGraphVolumeSkeletonFilter_StaticNew()
{
  return vtkReebGraphVolumeSkeletonFilter::New();
}

PyObject *PyVTKClass_vtkReebGraphVolumeSkeletonFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReebGraphVolumeSkeletonFilter_StaticNew,
    PyvtkReebGraphVolumeSkeletonFilter_Methods,
    "vtkReebGraphVolumeSkeletonFilter", modulename,
    NULL, NULL,
    PyvtkReebGraphVolumeSkeletonFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkReebGraphVolumeSkeletonFilter_Doc()
{
  static const char *docstring[] = {
    "vtkReebGraphVolumeSkeletonFilter - compute a skeletal embedding of the\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "The filter takes a vtkUnstructuredGrid as an input (port 0), along\nwith a vtkReebGraph (port 1). The filter samples each arc of the Reeb\ngraph and embeds the samples on the barycenter of the corresponding\nfield contour. The number of (evenly distributed) arc samples  can be\ndefined with SetNumberOfSamples() (default value: 10). The skeleton\ncan be optionally smoothed with SetNumberOfSmoothingItera",
    "tions()\n(default value: 10). The filter will first try to pull as a scalar\nfield the vtkDataArray with Id 'FieldId' of the vtkPolyData, see\nSetFieldId() (default: 0). The filter will abort if this field does\nnot exist.\n\nThe filter outputs a vtkTable of points (double[3]). Each column\ncontains the samples (sorted by function value) of the corresponding\narc. The first and the last entry of the colum",
    "n corresponds to the\ncritical nodes at the extremity of the arc (each column has\nNumberOfSamples + 2 entries).\n\nThe skeleton can be rendered by linking the samples with geometrical\nprimitives (for instance, spheres at critical nodes and cylinders\nbetween intermediary samples, see\nGraphics/Testing/Cxx/TestReebGraph.cxx).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReebGraphVolumeSkeletonFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReebGraphVolumeSkeletonFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReebGraphVolumeSkeletonFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

