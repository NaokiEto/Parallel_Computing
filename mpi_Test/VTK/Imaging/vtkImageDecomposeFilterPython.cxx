// python wrapper for vtkImageDecomposeFilter
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
#include "vtkImageDecomposeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageDecomposeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageDecomposeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageIterateFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageIterateFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageIterateFilterNew
#endif

static const char **PyvtkImageDecomposeFilter_Doc();


static PyObject *
PyvtkImageDecomposeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

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
      tempr = op->vtkImageDecomposeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

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
      tempr = op->vtkImageDecomposeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  vtkImageDecomposeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageDecomposeFilter::NewInstance();
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
PyvtkImageDecomposeFilter_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensionality(temp0);
      }
    else
      {
      op->vtkImageDecomposeFilter::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionality();
      }
    else
      {
      tempr = op->vtkImageDecomposeFilter::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDecomposeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDecomposeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {(char*)"IsA", PyvtkImageDecomposeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {(char*)"NewInstance", PyvtkImageDecomposeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageDecomposeFilter\nC++: vtkImageDecomposeFilter *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {(char*)"SetDimensionality", PyvtkImageDecomposeFilter_SetDimensionality, 1,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int dim)\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\n"},
  {(char*)"GetDimensionality", PyvtkImageDecomposeFilter_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageDecomposeFilter_Methods,
    "vtkImageDecomposeFilter", modulename,
    NULL, NULL,
    PyvtkImageDecomposeFilter_Doc(),
    PyVTKClass_vtkImageIterateFilterNew(modulename));
  return cls;
}

const char **PyvtkImageDecomposeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageDecomposeFilter - Filters that execute axes in series.\n\n",
    "Superclass: vtkImageIterateFilter\n\n",
    "This superclass molds the vtkImageIterateFilter superclass so it\niterates over the axes.  The filter uses dimensionality to determine\nhow many axes to execute (starting from x). The filter also provides\nconvenience methods for permuting information retrieved from input,\noutput and vtkImageData.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDecomposeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDecomposeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDecomposeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

