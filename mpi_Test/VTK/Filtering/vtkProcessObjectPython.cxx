// python wrapper for vtkProcessObject
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
#include "vtkProcessObject.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProcessObject(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProcessObject(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProcessObjectNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProcessObjectNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkProcessObject_Doc();


static PyObject *
PyvtkProcessObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

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
      tempr = op->vtkProcessObject::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

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
      tempr = op->vtkProcessObject::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  vtkProcessObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProcessObject::NewInstance();
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
PyvtkProcessObject_GetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInputs();
      }
    else
      {
      tempr = op->vtkProcessObject::GetNumberOfInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessObject_SqueezeInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SqueezeInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SqueezeInputArray();
      }
    else
      {
      op->vtkProcessObject::SqueezeInputArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessObject_RemoveAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllInputs();
      }
    else
      {
      op->vtkProcessObject::RemoveAllInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessObject_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkProcessObject::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProcessObject_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkProcessObject::SetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProcessObject_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkProcessObject_SetInputConnection_s1(self, args);
    case 2:
      return PyvtkProcessObject_SetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return NULL;
}



static PyObject *
PyvtkProcessObject_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkProcessObject::AddInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProcessObject_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0);
      }
    else
      {
      op->vtkProcessObject::AddInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProcessObject_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkProcessObject_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkProcessObject_AddInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return NULL;
}



static PyObject *
PyvtkProcessObject_RemoveInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkProcessObject::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessObject_SetNthInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  int temp0;
  int temp1;
  vtkAlgorithmOutput *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetNthInputConnection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProcessObject::SetNthInputConnection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessObject_SetNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessObject *op = static_cast<vtkProcessObject *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfInputConnections(temp0, temp1);
      }
    else
      {
      op->vtkProcessObject::SetNumberOfInputConnections(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProcessObject_Methods[] = {
  {(char*)"GetClassName", PyvtkProcessObject_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProcessObject_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProcessObject_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProcessObject\nC++: vtkProcessObject *NewInstance()\n\n"},
  {(char*)"GetNumberOfInputs", PyvtkProcessObject_GetNumberOfInputs, 1,
   (char*)"V.GetNumberOfInputs() -> int\nC++: int GetNumberOfInputs()\n\nReturn an array with all the inputs of this process object. This\nis useful for tracing back in the pipeline to construct graphs\netc.\n"},
  {(char*)"SqueezeInputArray", PyvtkProcessObject_SqueezeInputArray, 1,
   (char*)"V.SqueezeInputArray()\nC++: void SqueezeInputArray()\n\nThis method will rearrange the input array so that all NULL\nentries are removed.\n"},
  {(char*)"RemoveAllInputs", PyvtkProcessObject_RemoveAllInputs, 1,
   (char*)"V.RemoveAllInputs()\nC++: void RemoveAllInputs()\n\nRemove all the input data.\n"},
  {(char*)"SetInputConnection", PyvtkProcessObject_SetInputConnection, 1,
   (char*)"V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\nV.SetInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\n\nReimplemented from vtkAlgorithm to maintain backward\ncompatibility for vtkProcessObject.\n"},
  {(char*)"AddInputConnection", PyvtkProcessObject_AddInputConnection, 1,
   (char*)"V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(vtkAlgorithmOutput *input)\n\nReimplemented from vtkAlgorithm to maintain backward\ncompatibility for vtkProcessObject.\n"},
  {(char*)"RemoveInputConnection", PyvtkProcessObject_RemoveInputConnection, 1,
   (char*)"V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input)\n\nReimplemented from vtkAlgorithm to maintain backward\ncompatibility for vtkProcessObject.\n"},
  {(char*)"SetNthInputConnection", PyvtkProcessObject_SetNthInputConnection, 1,
   (char*)"V.SetNthInputConnection(int, int, vtkAlgorithmOutput)\nC++: virtual void SetNthInputConnection(int port, int index,\n    vtkAlgorithmOutput *input)\n\nReimplemented from vtkAlgorithm to maintain backward\ncompatibility for vtkProcessObject.\n"},
  {(char*)"SetNumberOfInputConnections", PyvtkProcessObject_SetNumberOfInputConnections, 1,
   (char*)"V.SetNumberOfInputConnections(int, int)\nC++: virtual void SetNumberOfInputConnections(int port, int n)\n\nReimplemented from vtkAlgorithm to maintain backward\ncompatibility for vtkProcessObject.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkProcessObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkProcessObject_Methods,
    "vtkProcessObject", modulename,
    NULL, NULL,
    PyvtkProcessObject_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProcessObject_Doc()
{
  static const char *docstring[] = {
    "vtkProcessObject - abstract class specifies interface for\nvisualization filters\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkProcessObject is an abstract object that specifies behavior and\ninterface of visualization network process objects (sources, filters,\nmappers). Source objects are creators of visualization data; filters\ninput, process, and output visualization data; and mappers transform\ndata into another form (like rendering primitives or write data to a\nfile).\n\nvtkProcessObject fires events for Start and End ",
    "events before and\nafter object execution (via Execute()). These events can be used for\nany purpose (e.g., debugging info, highlighting/notifying user\ninterface, etc.)\n\nAnother event, Progress, can be observed. Some filters fire this\nevent periodically during their execution. The use is similar to that\nof Start and End events. Filters may also check their AbortExecute\nflag to determine whether to p",
    "rematurely end their execution.\n\nAn important feature of subclasses of vtkProcessObject is that it is\npossible to control the memory-management model (i.e., retain output\nversus delete output data). If enabled the ReleaseDataFlag enables\nthe deletion of the output data once the downstream process object\nfinishes processing the data (please see text).\n\nSee Also:\n\nvtkDataObject vtkSource vtkFilter v",
    "tkMapper vtkWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProcessObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProcessObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProcessObject", o) != 0)
    {
    Py_DECREF(o);
    }

}

