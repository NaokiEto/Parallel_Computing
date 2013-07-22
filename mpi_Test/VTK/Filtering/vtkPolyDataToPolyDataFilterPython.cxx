// python wrapper for vtkPolyDataToPolyDataFilter
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
#include "vtkPolyDataToPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataToPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataToPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataToPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataToPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceNew
#endif

static const char **PyvtkPolyDataToPolyDataFilter_Doc();


static PyObject *
PyvtkPolyDataToPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToPolyDataFilter *op = static_cast<vtkPolyDataToPolyDataFilter *>(vp);

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
      tempr = op->vtkPolyDataToPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToPolyDataFilter *op = static_cast<vtkPolyDataToPolyDataFilter *>(vp);

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
      tempr = op->vtkPolyDataToPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToPolyDataFilter *op = static_cast<vtkPolyDataToPolyDataFilter *>(vp);

  vtkPolyDataToPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataToPolyDataFilter::NewInstance();
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
PyvtkPolyDataToPolyDataFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToPolyDataFilter *op = static_cast<vtkPolyDataToPolyDataFilter *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPolyDataToPolyDataFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToPolyDataFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToPolyDataFilter *op = static_cast<vtkPolyDataToPolyDataFilter *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkPolyDataToPolyDataFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataToPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataToPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataToPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataToPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataToPolyDataFilter\nC++: vtkPolyDataToPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkPolyDataToPolyDataFilter_SetInput, 1,
   (char*)"V.SetInput(vtkPolyData)\nC++: virtual void SetInput(vtkPolyData *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkPolyDataToPolyDataFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nSet / get the input data or filter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPolyDataToPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPolyDataToPolyDataFilter_Methods,
    "vtkPolyDataToPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkPolyDataToPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataSourceNew(modulename));
  return cls;
}

const char **PyvtkPolyDataToPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataToPolyDataFilter - abstract filter class\n\n",
    "Superclass: vtkPolyDataSource\n\n",
    "vtkPolyDataToPolyDataFilter is an abstract filter class whose\nsubclasses take as input polygonal data and generate polygonal data\non output.\n\nWarning:\n\nThis used to be the parent class for most polydata filter in VTK4.x,\nnow this role has been replaced by vtkPolyDataAlgorithm. You should\nconsider using vtkPolyDataAlgorithm instead of this class, when\nwriting filter for VTK5 and above. This class w",
    "as kept to ensure full\nbackward compatibility.\n\nSee Also:\n\nvtkCleanPolyData vtkDecimate vtkFeatureEdges vtkMaskPolyData\nvtkPolyDataNormals vtkSmoothPolyDataFilter vtkStripper\nvtkTransformPolyDataFilter vtkTriangleFilter vtkTubeFilter\nvtkLinearExtrusionFilter vtkRibbonFilter vtkRotationalExtrusionFilter\nvtkShrinkPolyData vtkPolyDataAlgorithm\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataToPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataToPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataToPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

