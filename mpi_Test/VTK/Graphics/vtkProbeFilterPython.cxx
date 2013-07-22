// python wrapper for vtkProbeFilter
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
#include "vtkProbeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProbeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProbeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProbeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProbeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkProbeFilter_Doc();


static PyObject *
PyvtkProbeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

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
      tempr = op->vtkProbeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

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
      tempr = op->vtkProbeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkProbeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProbeFilter::NewInstance();
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
PyvtkProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProbeFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkProbeFilter::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetSpatialMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpatialMatch(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetSpatialMatch(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetSpatialMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpatialMatch();
      }
    else
      {
      tempr = op->vtkProbeFilter::GetSpatialMatch();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SpatialMatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpatialMatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpatialMatchOn();
      }
    else
      {
      op->vtkProbeFilter::SpatialMatchOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SpatialMatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpatialMatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SpatialMatchOff();
      }
    else
      {
      op->vtkProbeFilter::SpatialMatchOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetValidPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValidPoints();
      }
    else
      {
      tempr = op->vtkProbeFilter::GetValidPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValidPointMaskArrayName(temp0);
      }
    else
      {
      op->vtkProbeFilter::SetValidPointMaskArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValidPointMaskArrayName();
      }
    else
      {
      tempr = op->vtkProbeFilter::GetValidPointMaskArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProbeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProbeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProbeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProbeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProbeFilter\nC++: vtkProbeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProbeFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProbeFilter\nC++: vtkProbeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSource", PyvtkProbeFilter_SetSource, 1,
   (char*)"V.SetSource(vtkDataObject)\nC++: void SetSource(vtkDataObject *source)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. Old style. Do not use unless for backwards\ncompatibility.\n"},
  {(char*)"GetSource", PyvtkProbeFilter_GetSource, 1,
   (char*)"V.GetSource() -> vtkDataObject\nC++: vtkDataObject *GetSource()\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. Old style. Do not use unless for backwards\ncompatibility.\n"},
  {(char*)"SetSourceConnection", PyvtkProbeFilter_SetSourceConnection, 1,
   (char*)"V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. New style. Equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {(char*)"SetSpatialMatch", PyvtkProbeFilter_SetSpatialMatch, 1,
   (char*)"V.SetSpatialMatch(int)\nC++: void SetSpatialMatch(int a)\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {(char*)"GetSpatialMatch", PyvtkProbeFilter_GetSpatialMatch, 1,
   (char*)"V.GetSpatialMatch() -> int\nC++: int GetSpatialMatch()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {(char*)"SpatialMatchOn", PyvtkProbeFilter_SpatialMatchOn, 1,
   (char*)"V.SpatialMatchOn()\nC++: void SpatialMatchOn()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {(char*)"SpatialMatchOff", PyvtkProbeFilter_SpatialMatchOff, 1,
   (char*)"V.SpatialMatchOff()\nC++: void SpatialMatchOff()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {(char*)"GetValidPoints", PyvtkProbeFilter_GetValidPoints, 1,
   (char*)"V.GetValidPoints() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetValidPoints()\n\nGet the list of point ids in the output that contain attribute\ndata interpolated from the source.\n"},
  {(char*)"SetValidPointMaskArrayName", PyvtkProbeFilter_SetValidPointMaskArrayName, 1,
   (char*)"V.SetValidPointMaskArrayName(string)\nC++: void SetValidPointMaskArrayName(char *)\n\nReturns the name of the char array added to the output with\nvalues 1 for valid points and 0 for invalid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {(char*)"GetValidPointMaskArrayName", PyvtkProbeFilter_GetValidPointMaskArrayName, 1,
   (char*)"V.GetValidPointMaskArrayName() -> string\nC++: char *GetValidPointMaskArrayName()\n\nReturns the name of the char array added to the output with\nvalues 1 for valid points and 0 for invalid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProbeFilter_StaticNew()
{
  return vtkProbeFilter::New();
}

PyObject *PyVTKClass_vtkProbeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProbeFilter_StaticNew,
    PyvtkProbeFilter_Methods,
    "vtkProbeFilter", modulename,
    NULL, NULL,
    PyvtkProbeFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProbeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProbeFilter - sample data values at specified point locations\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkProbeFilter is a filter that computes point attributes (e.g.,\nscalars, vectors, etc.) at specified point positions. The filter has\ntwo inputs: the Input and Source. The Input geometric structure is\npassed through the filter. The point attributes are computed at the\nInput point positions by interpolating into the source data. For\nexample, we can compute data values on a plane (plane specified as",
    "\nInput) from a volume (Source). The cell data of the source data is\ncopied to the output based on in which source cell each input point\nis. If an array of the same name exists both in source's point and\ncell data, only the one from the point data is probed.\n\nThis filter can be used to resample data, or convert one dataset form\ninto another. For example, an unstructured grid (vtkUnstructuredGrid)\nc",
    "an be probed with a volume (three-dimensional vtkImageData), and\nthen volume rendering techniques can be used to visualize the\nresults. Another example: a line or curve can be used to probe data\nto produce x-y plots along that line or curve.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProbeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProbeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProbeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

