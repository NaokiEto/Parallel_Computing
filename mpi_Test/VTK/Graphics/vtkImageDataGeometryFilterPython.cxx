// python wrapper for vtkImageDataGeometryFilter
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
#include "vtkImageDataGeometryFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageDataGeometryFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageDataGeometryFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDataGeometryFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDataGeometryFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkImageDataGeometryFilter_Doc();


static PyObject *
PyvtkImageDataGeometryFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

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
      tempr = op->vtkImageDataGeometryFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

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
      tempr = op->vtkImageDataGeometryFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  vtkImageDataGeometryFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageDataGeometryFilter::NewInstance();
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
PyvtkImageDataGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageDataGeometryFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageDataGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetExtent(temp0);
      }
    else
      {
      op->vtkImageDataGeometryFilter::SetExtent(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageDataGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageDataGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageDataGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageDataGeometryFilter_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageDataGeometryFilter_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkImageDataGeometryFilter_SetThresholdCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThresholdCells(temp0);
      }
    else
      {
      op->vtkImageDataGeometryFilter::SetThresholdCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_GetThresholdCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThresholdCells();
      }
    else
      {
      tempr = op->vtkImageDataGeometryFilter::GetThresholdCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_ThresholdCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThresholdCellsOn();
      }
    else
      {
      op->vtkImageDataGeometryFilter::ThresholdCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_ThresholdCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThresholdCellsOff();
      }
    else
      {
      op->vtkImageDataGeometryFilter::ThresholdCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_SetThresholdValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThresholdValue(temp0);
      }
    else
      {
      op->vtkImageDataGeometryFilter::SetThresholdValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_GetThresholdValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThresholdValue();
      }
    else
      {
      tempr = op->vtkImageDataGeometryFilter::GetThresholdValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_ThresholdValueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdValueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThresholdValueOn();
      }
    else
      {
      op->vtkImageDataGeometryFilter::ThresholdValueOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_ThresholdValueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdValueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThresholdValueOff();
      }
    else
      {
      op->vtkImageDataGeometryFilter::ThresholdValueOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_SetOutputTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTriangles(temp0);
      }
    else
      {
      op->vtkImageDataGeometryFilter::SetOutputTriangles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_GetOutputTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputTriangles();
      }
    else
      {
      tempr = op->vtkImageDataGeometryFilter::GetOutputTriangles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_OutputTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTrianglesOn();
      }
    else
      {
      op->vtkImageDataGeometryFilter::OutputTrianglesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_OutputTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTrianglesOff();
      }
    else
      {
      op->vtkImageDataGeometryFilter::OutputTrianglesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDataGeometryFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDataGeometryFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDataGeometryFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDataGeometryFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageDataGeometryFilter\nC++: vtkImageDataGeometryFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDataGeometryFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDataGeometryFilter\nC++: vtkImageDataGeometryFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExtent", PyvtkImageDataGeometryFilter_SetExtent, 1,
   (char*)"V.SetExtent([int, int, int, int, int, int])\nC++: void SetExtent(int extent[6])\nV.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int iMin, int iMax, int jMin, int jMax,\n    int kMin, int kMax)\n\nSet / get the extent (imin,imax, jmin,jmax, kmin,kmax) indices.\n"},
  {(char*)"SetThresholdCells", PyvtkImageDataGeometryFilter_SetThresholdCells, 1,
   (char*)"V.SetThresholdCells(int)\nC++: void SetThresholdCells(int a)\n\nSet ThresholdCells to true if you wish to skip any voxel/pixels\nwhich have scalar values less than the specified threshold.\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {(char*)"GetThresholdCells", PyvtkImageDataGeometryFilter_GetThresholdCells, 1,
   (char*)"V.GetThresholdCells() -> int\nC++: int GetThresholdCells()\n\nSet ThresholdCells to true if you wish to skip any voxel/pixels\nwhich have scalar values less than the specified threshold.\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {(char*)"ThresholdCellsOn", PyvtkImageDataGeometryFilter_ThresholdCellsOn, 1,
   (char*)"V.ThresholdCellsOn()\nC++: void ThresholdCellsOn()\n\nSet ThresholdCells to true if you wish to skip any voxel/pixels\nwhich have scalar values less than the specified threshold.\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {(char*)"ThresholdCellsOff", PyvtkImageDataGeometryFilter_ThresholdCellsOff, 1,
   (char*)"V.ThresholdCellsOff()\nC++: void ThresholdCellsOff()\n\nSet ThresholdCells to true if you wish to skip any voxel/pixels\nwhich have scalar values less than the specified threshold.\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {(char*)"SetThresholdValue", PyvtkImageDataGeometryFilter_SetThresholdValue, 1,
   (char*)"V.SetThresholdValue(float)\nC++: void SetThresholdValue(double a)\n\nSet ThresholdValue to the scalar value by which to threshhold\ncells when extracting geometry when ThresholdCells is true. Cells\nwith scalar values greater than the threshold will be output.\n"},
  {(char*)"GetThresholdValue", PyvtkImageDataGeometryFilter_GetThresholdValue, 1,
   (char*)"V.GetThresholdValue() -> float\nC++: double GetThresholdValue()\n\nSet ThresholdValue to the scalar value by which to threshhold\ncells when extracting geometry when ThresholdCells is true. Cells\nwith scalar values greater than the threshold will be output.\n"},
  {(char*)"ThresholdValueOn", PyvtkImageDataGeometryFilter_ThresholdValueOn, 1,
   (char*)"V.ThresholdValueOn()\nC++: void ThresholdValueOn()\n\nSet ThresholdValue to the scalar value by which to threshhold\ncells when extracting geometry when ThresholdCells is true. Cells\nwith scalar values greater than the threshold will be output.\n"},
  {(char*)"ThresholdValueOff", PyvtkImageDataGeometryFilter_ThresholdValueOff, 1,
   (char*)"V.ThresholdValueOff()\nC++: void ThresholdValueOff()\n\nSet ThresholdValue to the scalar value by which to threshhold\ncells when extracting geometry when ThresholdCells is true. Cells\nwith scalar values greater than the threshold will be output.\n"},
  {(char*)"SetOutputTriangles", PyvtkImageDataGeometryFilter_SetOutputTriangles, 1,
   (char*)"V.SetOutputTriangles(int)\nC++: void SetOutputTriangles(int a)\n\nSet OutputTriangles to true if you wish to generate triangles\ninstead of quads when extracting cells from 2D imagedata\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {(char*)"GetOutputTriangles", PyvtkImageDataGeometryFilter_GetOutputTriangles, 1,
   (char*)"V.GetOutputTriangles() -> int\nC++: int GetOutputTriangles()\n\nSet OutputTriangles to true if you wish to generate triangles\ninstead of quads when extracting cells from 2D imagedata\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {(char*)"OutputTrianglesOn", PyvtkImageDataGeometryFilter_OutputTrianglesOn, 1,
   (char*)"V.OutputTrianglesOn()\nC++: void OutputTrianglesOn()\n\nSet OutputTriangles to true if you wish to generate triangles\ninstead of quads when extracting cells from 2D imagedata\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {(char*)"OutputTrianglesOff", PyvtkImageDataGeometryFilter_OutputTrianglesOff, 1,
   (char*)"V.OutputTrianglesOff()\nC++: void OutputTrianglesOff()\n\nSet OutputTriangles to true if you wish to generate triangles\ninstead of quads when extracting cells from 2D imagedata\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDataGeometryFilter_StaticNew()
{
  return vtkImageDataGeometryFilter::New();
}

PyObject *PyVTKClass_vtkImageDataGeometryFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDataGeometryFilter_StaticNew,
    PyvtkImageDataGeometryFilter_Methods,
    "vtkImageDataGeometryFilter", modulename,
    NULL, NULL,
    PyvtkImageDataGeometryFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDataGeometryFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageDataGeometryFilter - extract geometry for structured points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkImageDataGeometryFilter is a filter that extracts geometry from a\nstructured points dataset. By specifying appropriate i-j-k indices\n(via the \"Extent\" instance variable), it is possible to extract a\npoint, a line, a plane (i.e., image), or a \"volume\" from dataset.\n(Since the output is of type polydata, the volume is actually a (n x\nm x o) region of points.)\n\nThe extent specification is zero-off",
    "set. That is, the first k-plane\nin a 50x50x50 volume is given by (0,49, 0,49, 0,0).\n\nCaveats:\n\nIf you don't know the dimensions of the input dataset, you can use a\nlarge number to specify extent (the number will be clamped\nappropriately). For example, if the dataset dimensions are 50x50x50,\nand you want a the fifth k-plane, you can use the extents (0,100,\n0,100, 4,4). The 100 will automatically be",
    " clamped to 49.\n\nSee Also:\n\nvtkGeometryFilter vtkStructuredGridSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDataGeometryFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataGeometryFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDataGeometryFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

