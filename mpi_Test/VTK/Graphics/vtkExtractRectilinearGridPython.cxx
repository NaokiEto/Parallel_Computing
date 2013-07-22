// python wrapper for vtkExtractRectilinearGrid
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
#include "vtkExtractRectilinearGrid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractRectilinearGrid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractRectilinearGrid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractRectilinearGridNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractRectilinearGridNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
#endif

static const char **PyvtkExtractRectilinearGrid_Doc();


static PyObject *
PyvtkExtractRectilinearGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

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
      tempr = op->vtkExtractRectilinearGrid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

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
      tempr = op->vtkExtractRectilinearGrid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  vtkExtractRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractRectilinearGrid::NewInstance();
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
PyvtkExtractRectilinearGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractRectilinearGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

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
      op->SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtractRectilinearGrid::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractRectilinearGrid_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVOI(temp0);
      }
    else
      {
      op->vtkExtractRectilinearGrid::SetVOI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractRectilinearGrid_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtractRectilinearGrid_SetVOI_s1(self, args);
    case 1:
      return PyvtkExtractRectilinearGrid_SetVOI_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return NULL;
}



static PyObject *
PyvtkExtractRectilinearGrid_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVOI();
      }
    else
      {
      tempr = op->vtkExtractRectilinearGrid::GetVOI();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_SetSampleRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSampleRate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExtractRectilinearGrid::SetSampleRate(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractRectilinearGrid_SetSampleRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSampleRate(temp0);
      }
    else
      {
      op->vtkExtractRectilinearGrid::SetSampleRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtractRectilinearGrid_SetSampleRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkExtractRectilinearGrid_SetSampleRate_s1(self, args);
    case 1:
      return PyvtkExtractRectilinearGrid_SetSampleRate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleRate");
  return NULL;
}



static PyObject *
PyvtkExtractRectilinearGrid_GetSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSampleRate();
      }
    else
      {
      tempr = op->vtkExtractRectilinearGrid::GetSampleRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_SetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIncludeBoundary(temp0);
      }
    else
      {
      op->vtkExtractRectilinearGrid::SetIncludeBoundary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_GetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIncludeBoundary();
      }
    else
      {
      tempr = op->vtkExtractRectilinearGrid::GetIncludeBoundary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_IncludeBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeBoundaryOn();
      }
    else
      {
      op->vtkExtractRectilinearGrid::IncludeBoundaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_IncludeBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IncludeBoundaryOff();
      }
    else
      {
      op->vtkExtractRectilinearGrid::IncludeBoundaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractRectilinearGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractRectilinearGrid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractRectilinearGrid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractRectilinearGrid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractRectilinearGrid\nC++: vtkExtractRectilinearGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractRectilinearGrid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractRectilinearGrid\nC++: vtkExtractRectilinearGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVOI", PyvtkExtractRectilinearGrid_SetVOI, 1,
   (char*)"V.SetVOI(int, int, int, int, int, int)\nC++: void SetVOI(int, int, int, int, int, int)\nV.SetVOI((int, int, int, int, int, int))\nC++: void SetVOI(int a[6])\n\n"},
  {(char*)"GetVOI", PyvtkExtractRectilinearGrid_GetVOI, 1,
   (char*)"V.GetVOI() -> (int, int, int, int, int, int)\nC++: int *GetVOI()\n\nSpecify i-j-k (min,max) pairs to extract. The resulting\nstructured grid dataset can be of any topological dimension\n(i.e., point, line, plane, or 3D grid).\n"},
  {(char*)"SetSampleRate", PyvtkExtractRectilinearGrid_SetSampleRate, 1,
   (char*)"V.SetSampleRate(int, int, int)\nC++: void SetSampleRate(int, int, int)\nV.SetSampleRate((int, int, int))\nC++: void SetSampleRate(int a[3])\n\n"},
  {(char*)"GetSampleRate", PyvtkExtractRectilinearGrid_GetSampleRate, 1,
   (char*)"V.GetSampleRate() -> (int, int, int)\nC++: int *GetSampleRate()\n\nSet the sampling rate in the i, j, and k directions. If the rate\nis > 1, then the resulting VOI will be subsampled representation\nof the input. For example, if the SampleRate=(2,2,2), every other\npoint will be selected, resulting in a volume 1/8th the original\nsize. Initial value is (1,1,1).\n"},
  {(char*)"SetIncludeBoundary", PyvtkExtractRectilinearGrid_SetIncludeBoundary, 1,
   (char*)"V.SetIncludeBoundary(int)\nC++: void SetIncludeBoundary(int a)\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"GetIncludeBoundary", PyvtkExtractRectilinearGrid_GetIncludeBoundary, 1,
   (char*)"V.GetIncludeBoundary() -> int\nC++: int GetIncludeBoundary()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"IncludeBoundaryOn", PyvtkExtractRectilinearGrid_IncludeBoundaryOn, 1,
   (char*)"V.IncludeBoundaryOn()\nC++: void IncludeBoundaryOn()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {(char*)"IncludeBoundaryOff", PyvtkExtractRectilinearGrid_IncludeBoundaryOff, 1,
   (char*)"V.IncludeBoundaryOff()\nC++: void IncludeBoundaryOff()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractRectilinearGrid_StaticNew()
{
  return vtkExtractRectilinearGrid::New();
}

PyObject *PyVTKClass_vtkExtractRectilinearGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractRectilinearGrid_StaticNew,
    PyvtkExtractRectilinearGrid_Methods,
    "vtkExtractRectilinearGrid", modulename,
    NULL, NULL,
    PyvtkExtractRectilinearGrid_Doc(),
    PyVTKClass_vtkRectilinearGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractRectilinearGrid_Doc()
{
  static const char *docstring[] = {
    "vtkExtractRectilinearGrid - Extract a sub grid (VOI) from the\nstructured rectilinear dataset.\n\n",
    "Superclass: vtkRectilinearGridAlgorithm\n\n",
    "vtkExtractRectilinearGrid rounds out the set of filters that extract\na subgrid out of a larger structured data set.  RIght now, this\nfilter only supports extracting a VOI.  In the future, it might\nsupport strides like the vtkExtract grid filter.\n\nSee Also:\n\nvtkExtractGrid vtkImageClip vtkGeometryFilter vtkExtractGeometry\nvtkExtractVOI vtkStructuredGridGeometryFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractRectilinearGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractRectilinearGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractRectilinearGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

