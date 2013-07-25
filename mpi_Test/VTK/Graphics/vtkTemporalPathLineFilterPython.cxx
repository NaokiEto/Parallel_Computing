// python wrapper for vtkTemporalPathLineFilter
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
#include "vtkTemporalPathLineFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTemporalPathLineFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTemporalPathLineFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTemporalPathLineFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTemporalPathLineFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTemporalPathLineFilter_Doc();


static PyObject *
PyvtkTemporalPathLineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

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
      tempr = op->vtkTemporalPathLineFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

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
      tempr = op->vtkTemporalPathLineFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  vtkTemporalPathLineFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTemporalPathLineFilter::NewInstance();
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
PyvtkTemporalPathLineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTemporalPathLineFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTemporalPathLineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskPoints(temp0);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetMaskPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaskPoints();
      }
    else
      {
      tempr = op->vtkTemporalPathLineFilter::GetMaskPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetMaxTrackLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxTrackLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxTrackLength(temp0);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetMaxTrackLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetMaxTrackLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxTrackLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxTrackLength();
      }
    else
      {
      tempr = op->vtkTemporalPathLineFilter::GetMaxTrackLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetIdChannelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdChannelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIdChannelArray(temp0);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetIdChannelArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetIdChannelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdChannelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIdChannelArray();
      }
    else
      {
      tempr = op->vtkTemporalPathLineFilter::GetIdChannelArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTemporalPathLineFilter_SetScalarArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarArray(temp0);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetScalarArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkTemporalPathLineFilter_GetScalarArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarArray();
      }
    else
      {
      tempr = op->vtkTemporalPathLineFilter::GetScalarArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMaxStepDistance(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetMaxStepDistance(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMaxStepDistance(temp0);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetMaxStepDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTemporalPathLineFilter_SetMaxStepDistance_s1(self, args);
    case 1:
      return PyvtkTemporalPathLineFilter_SetMaxStepDistance_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxStepDistance");
  return NULL;
}



static PyObject *
PyvtkTemporalPathLineFilter_GetMaxStepDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxStepDistance();
      }
    else
      {
      tempr = op->vtkTemporalPathLineFilter::GetMaxStepDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetKeepDeadTrails(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepDeadTrails");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeepDeadTrails(temp0);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetKeepDeadTrails(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetKeepDeadTrails(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepDeadTrails");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeepDeadTrails();
      }
    else
      {
      tempr = op->vtkTemporalPathLineFilter::GetKeepDeadTrails();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_Flush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Flush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Flush();
      }
    else
      {
      op->vtkTemporalPathLineFilter::Flush();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionConnection(temp0);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetSelectionConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0);
      }
    else
      {
      op->vtkTemporalPathLineFilter::SetSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalPathLineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalPathLineFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard Type-Macro\n"},
  {(char*)"IsA", PyvtkTemporalPathLineFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard Type-Macro\n"},
  {(char*)"NewInstance", PyvtkTemporalPathLineFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTemporalPathLineFilter\nC++: vtkTemporalPathLineFilter *NewInstance()\n\nStandard Type-Macro\n"},
  {(char*)"SafeDownCast", PyvtkTemporalPathLineFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalPathLineFilter\nC++: vtkTemporalPathLineFilter *SafeDownCast(vtkObject* o)\n\nStandard Type-Macro\n"},
  {(char*)"SetMaskPoints", PyvtkTemporalPathLineFilter_SetMaskPoints, 1,
   (char*)"V.SetMaskPoints(int)\nC++: void SetMaskPoints(int a)\n\nSet the number of particles to track as a ratio of the input\nexample: setting MaskPoints to 10 will track every 10th point\n"},
  {(char*)"GetMaskPoints", PyvtkTemporalPathLineFilter_GetMaskPoints, 1,
   (char*)"V.GetMaskPoints() -> int\nC++: int GetMaskPoints()\n\nSet the number of particles to track as a ratio of the input\nexample: setting MaskPoints to 10 will track every 10th point\n"},
  {(char*)"SetMaxTrackLength", PyvtkTemporalPathLineFilter_SetMaxTrackLength, 1,
   (char*)"V.SetMaxTrackLength(int)\nC++: void SetMaxTrackLength(unsigned int a)\n\nIf the Particles being traced animate for a long time, the trails\nor traces will become long and stringy. Setting the\nMaxTraceTimeLength will limit how much of the trace is displayed.\nTracks longer then the Max will disappear and the trace will\napppear like a snake of fixed length which progresses as the\nparticle moves\n"},
  {(char*)"GetMaxTrackLength", PyvtkTemporalPathLineFilter_GetMaxTrackLength, 1,
   (char*)"V.GetMaxTrackLength() -> int\nC++: unsigned int GetMaxTrackLength()\n\nIf the Particles being traced animate for a long time, the trails\nor traces will become long and stringy. Setting the\nMaxTraceTimeLength will limit how much of the trace is displayed.\nTracks longer then the Max will disappear and the trace will\napppear like a snake of fixed length which progresses as the\nparticle moves\n"},
  {(char*)"SetIdChannelArray", PyvtkTemporalPathLineFilter_SetIdChannelArray, 1,
   (char*)"V.SetIdChannelArray(string)\nC++: void SetIdChannelArray(char *)\n\nSpecify the name of a scalar array which will be used to fetch\nthe index of each point. This is necessary only if the particles\nchange position (Id order) on each time step. The Id can be used\nto identify particles at each step and hence track them properly.\nIf this array is NULL, the global point ids are used.  If an Id\narray cannot otherwise be found, the point index is used as the\nID.\n"},
  {(char*)"GetIdChannelArray", PyvtkTemporalPathLineFilter_GetIdChannelArray, 1,
   (char*)"V.GetIdChannelArray() -> string\nC++: char *GetIdChannelArray()\n\nSpecify the name of a scalar array which will be used to fetch\nthe index of each point. This is necessary only if the particles\nchange position (Id order) on each time step. The Id can be used\nto identify particles at each step and hence track them properly.\nIf this array is NULL, the global point ids are used.  If an Id\narray cannot otherwise be found, the point index is used as the\nID.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetScalarArray", PyvtkTemporalPathLineFilter_SetScalarArray, 1,
   (char*)"V.SetScalarArray(string)\nC++: void SetScalarArray(const char *)\n\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetScalarArray", PyvtkTemporalPathLineFilter_GetScalarArray, 1,
   (char*)"V.GetScalarArray() -> string\nC++: const char *GetScalarArray()\n\n"},
#endif
  {(char*)"SetMaxStepDistance", PyvtkTemporalPathLineFilter_SetMaxStepDistance, 1,
   (char*)"V.SetMaxStepDistance(float, float, float)\nC++: void SetMaxStepDistance(double, double, double)\nV.SetMaxStepDistance((float, float, float))\nC++: void SetMaxStepDistance(double a[3])\n\n"},
  {(char*)"GetMaxStepDistance", PyvtkTemporalPathLineFilter_GetMaxStepDistance, 1,
   (char*)"V.GetMaxStepDistance() -> (float, float, float)\nC++: double *GetMaxStepDistance()\n\n"},
  {(char*)"SetKeepDeadTrails", PyvtkTemporalPathLineFilter_SetKeepDeadTrails, 1,
   (char*)"V.SetKeepDeadTrails(int)\nC++: void SetKeepDeadTrails(int a)\n\nWhen a particle 'disappears', the trail belonging to it is\nremoved from the list. When this flag is enabled, dead trails\nwill persist until the next time the list is cleared. Use\ncarefully as it may cause excessive memory consumption if left on\nby mistake.\n"},
  {(char*)"GetKeepDeadTrails", PyvtkTemporalPathLineFilter_GetKeepDeadTrails, 1,
   (char*)"V.GetKeepDeadTrails() -> int\nC++: int GetKeepDeadTrails()\n\nWhen a particle 'disappears', the trail belonging to it is\nremoved from the list. When this flag is enabled, dead trails\nwill persist until the next time the list is cleared. Use\ncarefully as it may cause excessive memory consumption if left on\nby mistake.\n"},
  {(char*)"Flush", PyvtkTemporalPathLineFilter_Flush, 1,
   (char*)"V.Flush()\nC++: void Flush()\n\nFlush will wipe any existing data so that traces can be restarted\nfrom whatever time step is next supplied.\n"},
  {(char*)"SetSelectionConnection", PyvtkTemporalPathLineFilter_SetSelectionConnection, 1,
   (char*)"V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nSet a second input which is a selection. Particles with the same\nId in the selection as the primary input will be chosen for\npathlines Note that you must have the same IdChannelArray in the\nselection as the input\n"},
  {(char*)"SetSelection", PyvtkTemporalPathLineFilter_SetSelection, 1,
   (char*)"V.SetSelection(vtkDataSet)\nC++: void SetSelection(vtkDataSet *input)\n\nSet a second input which is a selection. Particles with the same\nId in the selection as the primary input will be chosen for\npathlines Note that you must have the same IdChannelArray in the\nselection as the input\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalPathLineFilter_StaticNew()
{
  return vtkTemporalPathLineFilter::New();
}

PyObject *PyVTKClass_vtkTemporalPathLineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalPathLineFilter_StaticNew,
    PyvtkTemporalPathLineFilter_Methods,
    "vtkTemporalPathLineFilter", modulename,
    NULL, NULL,
    PyvtkTemporalPathLineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTemporalPathLineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalPathLineFilter - Generate a Polydata Pointset from any\nDataset.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTemporalPathLineFilter takes any dataset as input, it extracts the\npoint locations of all cells over time to build up a polyline trail.\nThe point number (index) is used as the 'key' if the points are\nrandomly changing their respective order in the points list, then you\nshould specify a scalar that represents the unique ID. This is\nintended to handle the output of a filter such as the\nTemporalSt",
    "reamTracer.\n\nSee Also:\n\nvtkTemporalStreamTracer\n\nThanks:\n\nJohn Bidiscombe of CSCS - Swiss National Supercomputing Centre for\ncreating and contributing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalPathLineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalPathLineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalPathLineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}
