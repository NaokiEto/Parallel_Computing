// python wrapper for vtkSource
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
#include "vtkSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProcessObjectNew
extern "C" { PyObject *PyVTKClass_vtkProcessObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkProcessObjectNew
#endif

static const char **PyvtkSource_Doc();


static PyObject *
PyvtkSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

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
      tempr = op->vtkSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

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
      tempr = op->vtkSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  vtkSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSource::NewInstance();
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
PyvtkSource_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkSource::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateWholeExtent();
      }
    else
      {
      op->vtkSource::UpdateWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateInformation();
      }
    else
      {
      op->vtkSource::UpdateInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_PropagateUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->PropagateUpdateExtent(temp0);
      }
    else
      {
      op->vtkSource::PropagateUpdateExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_TriggerAsynchronousUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerAsynchronousUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriggerAsynchronousUpdate();
      }
    else
      {
      op->vtkSource::TriggerAsynchronousUpdate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_UpdateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->UpdateData(temp0);
      }
    else
      {
      op->vtkSource::UpdateData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_ComputeInputUpdateExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInputUpdateExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

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
      op->vtkSource::ComputeInputUpdateExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_SetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReleaseDataFlag(temp0);
      }
    else
      {
      op->vtkSource::SetReleaseDataFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_GetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReleaseDataFlag();
      }
    else
      {
      tempr = op->vtkSource::GetReleaseDataFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSource_ReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseDataFlagOn();
      }
    else
      {
      op->vtkSource::ReleaseDataFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_ReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseDataFlagOff();
      }
    else
      {
      op->vtkSource::ReleaseDataFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_GetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOutputs();
      }
    else
      {
      tempr = op->vtkSource::GetNumberOfOutputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSource_UnRegisterAllOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterAllOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UnRegisterAllOutputs();
      }
    else
      {
      op->vtkSource::UnRegisterAllOutputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSource_GetOutputIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  vtkDataObject *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputIndex(temp0);
      }
    else
      {
      tempr = op->vtkSource::GetOutputIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSource_SetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSource *op = static_cast<vtkSource *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->SetExecutive(temp0);
      }
    else
      {
      op->vtkSource::SetExecutive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSource\nC++: vtkSource *NewInstance()\n\n"},
  {(char*)"Update", PyvtkSource_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nBring object up-to-date before execution. Update() checks\nmodified time against last execution time, and re-executes object\nif necessary.\n"},
  {(char*)"UpdateWholeExtent", PyvtkSource_UpdateWholeExtent, 1,
   (char*)"V.UpdateWholeExtent()\nC++: virtual void UpdateWholeExtent()\n\nLike update, but make sure the update extent is the whole extent\nin the output.\n"},
  {(char*)"UpdateInformation", PyvtkSource_UpdateInformation, 1,
   (char*)"V.UpdateInformation()\nC++: virtual void UpdateInformation()\n\nUpdates any global information about the data (like spacing for\nimages)\n"},
  {(char*)"PropagateUpdateExtent", PyvtkSource_PropagateUpdateExtent, 1,
   (char*)"V.PropagateUpdateExtent(vtkDataObject)\nC++: virtual void PropagateUpdateExtent(vtkDataObject *output)\n\nWARNING: INTERNAL METHOD - NOT FOR GENERAL USE. THIS METHOD IS\nPART OF THE PIPELINE UPDATE FUNCTIONALITY. The update extent for\nthis object is propagated up the pipeline. This propagation may\nearly terminate based on the PipelineMTime.\n"},
  {(char*)"TriggerAsynchronousUpdate", PyvtkSource_TriggerAsynchronousUpdate, 1,
   (char*)"V.TriggerAsynchronousUpdate()\nC++: virtual void TriggerAsynchronousUpdate()\n\nWARNING: INTERNAL METHOD - NOT FOR GENERAL USE. THIS METHOD IS\nPART OF THE PIPELINE UPDATE FUNCTIONALITY. Propagate back up the\npipeline for ports and trigger the update on the other side of\nthe port to allow for asynchronous parallel processing in the\npipeline. This propagation may early terminate based on the\nPipelineMTime.\n"},
  {(char*)"UpdateData", PyvtkSource_UpdateData, 1,
   (char*)"V.UpdateData(vtkDataObject)\nC++: virtual void UpdateData(vtkDataObject *output)\n\nWARNING: INTERNAL METHOD - NOT FOR GENERAL USE. THIS METHOD IS\nPART OF THE PIPELINE UPDATE FUNCTIONALITY. Propagate the update\nback up the pipeline, and perform the actual work of updating on\nthe way down. When the propagate arrives at a port, block and\nwait for the asynchronous update to finish on the other side.\nThis propagation may early terminate based on the PipelineMTime.\n"},
  {(char*)"ComputeInputUpdateExtents", PyvtkSource_ComputeInputUpdateExtents, 1,
   (char*)"V.ComputeInputUpdateExtents(vtkDataObject)\nC++: virtual void ComputeInputUpdateExtents(vtkDataObject *output)\n\nWhat is the input update extent that is required to produce the\ndesired output? By default, the whole input is always required\nbut this is overridden in many subclasses.\n"},
  {(char*)"SetReleaseDataFlag", PyvtkSource_SetReleaseDataFlag, 1,
   (char*)"V.SetReleaseDataFlag(int)\nC++: virtual void SetReleaseDataFlag(int)\n\nTurn on/off flag to control whether this object's data is\nreleased after being used by a source.\n"},
  {(char*)"GetReleaseDataFlag", PyvtkSource_GetReleaseDataFlag, 1,
   (char*)"V.GetReleaseDataFlag() -> int\nC++: virtual int GetReleaseDataFlag()\n\nTurn on/off flag to control whether this object's data is\nreleased after being used by a source.\n"},
  {(char*)"ReleaseDataFlagOn", PyvtkSource_ReleaseDataFlagOn, 1,
   (char*)"V.ReleaseDataFlagOn()\nC++: void ReleaseDataFlagOn()\n\nTurn on/off flag to control whether this object's data is\nreleased after being used by a source.\n"},
  {(char*)"ReleaseDataFlagOff", PyvtkSource_ReleaseDataFlagOff, 1,
   (char*)"V.ReleaseDataFlagOff()\nC++: void ReleaseDataFlagOff()\n\nTurn on/off flag to control whether this object's data is\nreleased after being used by a source.\n"},
  {(char*)"GetNumberOfOutputs", PyvtkSource_GetNumberOfOutputs, 1,
   (char*)"V.GetNumberOfOutputs() -> int\nC++: int GetNumberOfOutputs()\n\nReturn an array with all the inputs of this process object. This\nis useful for tracing back in the pipeline to construct graphs\netc.\n"},
  {(char*)"UnRegisterAllOutputs", PyvtkSource_UnRegisterAllOutputs, 1,
   (char*)"V.UnRegisterAllOutputs()\nC++: void UnRegisterAllOutputs(void)\n\nRelease/disconnect all outputs of this source. This is intended\nto be called prior to Delete() if the user is concerned about\noutputs holding on to the filter/source.\n"},
  {(char*)"GetOutputIndex", PyvtkSource_GetOutputIndex, 1,
   (char*)"V.GetOutputIndex(vtkDataObject) -> int\nC++: int GetOutputIndex(vtkDataObject *out)\n\nReturn what index output the passed in output is, return -1 if it\ndoes not match any of the outputs\n"},
  {(char*)"SetExecutive", PyvtkSource_SetExecutive, 1,
   (char*)"V.SetExecutive(vtkExecutive)\nC++: virtual void SetExecutive(vtkExecutive *executive)\n\nSet this algorithm's executive.  This algorithm is removed from\nany executive to which it has previously been assigned and then\nassigned to the given executive.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSource_Methods,
    "vtkSource", modulename,
    NULL, NULL,
    PyvtkSource_Doc(),
    PyVTKClass_vtkProcessObjectNew(modulename));
  return cls;
}

const char **PyvtkSource_Doc()
{
  static const char *docstring[] = {
    "vtkSource - abstract class specifies interface for visualization\nnetwork source\n\n",
    "Superclass: vtkProcessObject\n\n",
    "vtkSource is an abstract object that specifies behavior and interface\nof source objects. Source objects are objects that begin\nvisualization pipeline. Sources include readers (read data from file\nor communications port) and procedural sources (generate data\nprogrammatically). vtkSource objects are also objects that generate\noutput data. In this sense vtkSource is used as a superclass to\nvtkFilter.",
    "\n\nConcrete subclasses of vtkSource must define Update() and Execute()\nmethods. The public method Update() invokes network execution and\nwill bring the network up-to-date. The protected Execute() method\nactually does the work of data creation/generation. The difference\nbetween the two methods is that Update() implements input consistency\nchecks and modified time comparisons and then invokes the Exe",
    "cute()\nwhich is an implementation of a particular algorithm.\n\nAn important feature of subclasses of vtkSource is that it is\npossible to control the memory-management model (i.e., retain output\nversus delete output data). If enabled the ReleaseDataFlag enables\nthe deletion of the output data once the downstream process object\nfinishes processing the data (please see text).\n\nSee Also:\n\nvtkProcessObj",
    "ect vtkDataSetReader vtkFilter vtkPolyDataSource\nvtkStructuredGridSource vtkStructuredPointsSource\nvtkUnstructuredGridSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

