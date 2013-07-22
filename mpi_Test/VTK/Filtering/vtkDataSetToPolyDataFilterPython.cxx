// python wrapper for vtkDataSetToPolyDataFilter
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
#include "vtkDataSetToPolyDataFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetToPolyDataFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetToPolyDataFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetToPolyDataFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetToPolyDataFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceNew
#endif

static const char **PyvtkDataSetToPolyDataFilter_Doc();


static PyObject *
PyvtkDataSetToPolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToPolyDataFilter *op = static_cast<vtkDataSetToPolyDataFilter *>(vp);

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
      tempr = op->vtkDataSetToPolyDataFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToPolyDataFilter *op = static_cast<vtkDataSetToPolyDataFilter *>(vp);

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
      tempr = op->vtkDataSetToPolyDataFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToPolyDataFilter *op = static_cast<vtkDataSetToPolyDataFilter *>(vp);

  vtkDataSetToPolyDataFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetToPolyDataFilter::NewInstance();
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
PyvtkDataSetToPolyDataFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToPolyDataFilter *op = static_cast<vtkDataSetToPolyDataFilter *>(vp);

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
      op->vtkDataSetToPolyDataFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToPolyDataFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToPolyDataFilter *op = static_cast<vtkDataSetToPolyDataFilter *>(vp);

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
      tempr = op->vtkDataSetToPolyDataFilter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetToPolyDataFilter_ComputeInputUpdateExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInputUpdateExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToPolyDataFilter *op = static_cast<vtkDataSetToPolyDataFilter *>(vp);

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
      op->vtkDataSetToPolyDataFilter::ComputeInputUpdateExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetToPolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetToPolyDataFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetToPolyDataFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetToPolyDataFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetToPolyDataFilter\nC++: vtkDataSetToPolyDataFilter *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkDataSetToPolyDataFilter_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *input)\n\nSet / get the input data or filter.\n"},
  {(char*)"GetInput", PyvtkDataSetToPolyDataFilter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nSet / get the input data or filter.\n"},
  {(char*)"ComputeInputUpdateExtents", PyvtkDataSetToPolyDataFilter_ComputeInputUpdateExtents, 1,
   (char*)"V.ComputeInputUpdateExtents(vtkDataObject)\nC++: virtual void ComputeInputUpdateExtents(vtkDataObject *output)\n\nDo not let images return more than requested.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataSetToPolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataSetToPolyDataFilter_Methods,
    "vtkDataSetToPolyDataFilter", modulename,
    NULL, NULL,
    PyvtkDataSetToPolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataSourceNew(modulename));
  return cls;
}

const char **PyvtkDataSetToPolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetToPolyDataFilter - abstract filter class\n\n",
    "Superclass: vtkPolyDataSource\n\n",
    "vtkDataSetToPolyDataFilter is an abstract filter class whose\nsubclasses take as input any dataset and generate polygonal data on\noutput.\n\nSee Also:\n\nvtkContourFilter vtkCutter vtkEdgePoints vtkExtractEdges\nvtkGeometryFilter vtkGlyph3D vtkHedgeHog vtkHyperStreamline\nvtkMaskPoints vtkOutlineFilter vtkStreamer vtkTensorGlyph\nvtkThresholdPoints vtkVectorTopology\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetToPolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetToPolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetToPolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

