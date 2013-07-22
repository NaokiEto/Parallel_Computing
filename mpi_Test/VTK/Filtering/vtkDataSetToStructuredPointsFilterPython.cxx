// python wrapper for vtkDataSetToStructuredPointsFilter
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
#include "vtkDataSetToStructuredPointsFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetToStructuredPointsFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetToStructuredPointsFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetToStructuredPointsFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetToStructuredPointsFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredPointsSourceNew
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredPointsSourceNew
#endif

static const char **PyvtkDataSetToStructuredPointsFilter_Doc();


static PyObject *
PyvtkDataSetToStructuredPointsFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredPointsFilter *op = static_cast<vtkDataSetToStructuredPointsFilter *>(vp);

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
      tempr = op->vtkDataSetToStructuredPointsFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToStructuredPointsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredPointsFilter *op = static_cast<vtkDataSetToStructuredPointsFilter *>(vp);

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
      tempr = op->vtkDataSetToStructuredPointsFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToStructuredPointsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredPointsFilter *op = static_cast<vtkDataSetToStructuredPointsFilter *>(vp);

  vtkDataSetToStructuredPointsFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetToStructuredPointsFilter::NewInstance();
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
PyvtkDataSetToStructuredPointsFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredPointsFilter *op = static_cast<vtkDataSetToStructuredPointsFilter *>(vp);

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
      op->vtkDataSetToStructuredPointsFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToStructuredPointsFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToStructuredPointsFilter *op = static_cast<vtkDataSetToStructuredPointsFilter *>(vp);

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
      tempr = op->vtkDataSetToStructuredPointsFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetToStructuredPointsFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetToStructuredPointsFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetToStructuredPointsFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetToStructuredPointsFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetToStructuredPointsFilter\nC++: vtkDataSetToStructuredPointsFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkDataSetToStructuredPointsFilter_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkDataSetToStructuredPointsFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataSetToStructuredPointsFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataSetToStructuredPointsFilter_Methods,
    "vtkDataSetToStructuredPointsFilter", modulename,
    NULL, NULL,
    PyvtkDataSetToStructuredPointsFilter_Doc(),
    PyVTKClass_vtkStructuredPointsSourceNew(modulename));
  return cls;
}

const char **PyvtkDataSetToStructuredPointsFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetToStructuredPointsFilter - abstract filter class\n\n",
    "Superclass: vtkStructuredPointsSource\n\n",
    "vtkDataSetToStructuredPointsFilter is an abstract filter class whose\nsubclasses take as input any dataset and generate structured points\ndata on output.\n\nSee Also:\n\nvtkGaussianSplatter vtkImplicitModeller vtkShepardMethod\nvtkVoxelModeller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetToStructuredPointsFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetToStructuredPointsFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetToStructuredPointsFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

