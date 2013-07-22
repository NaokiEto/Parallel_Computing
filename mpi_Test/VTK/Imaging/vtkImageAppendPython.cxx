// python wrapper for vtkImageAppend
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
#include "vtkImageAppend.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageAppend(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageAppend(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageAppendNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageAppendNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageAppend_Doc();


static PyObject *
PyvtkImageAppend_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

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
      tempr = op->vtkImageAppend::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

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
      tempr = op->vtkImageAppend::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  vtkImageAppend *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageAppend::NewInstance();
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
PyvtkImageAppend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageAppend *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageAppend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_ReplaceNthInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceNthInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->ReplaceNthInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkImageAppend::ReplaceNthInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkImageAppend::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAppend_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImageAppend::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAppend_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageAppend_SetInput_s1(self, args);
    case 1:
      return PyvtkImageAppend_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkImageAppend_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput(temp0);
      }
    else
      {
      tempr = op->vtkImageAppend::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAppend_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImageAppend::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAppend_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageAppend_GetInput_s1(self, args);
    case 0:
      return PyvtkImageAppend_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkImageAppend_GetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

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
      tempr = op->vtkImageAppend::GetNumberOfInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_SetAppendAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAppendAxis(temp0);
      }
    else
      {
      op->vtkImageAppend::SetAppendAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_GetAppendAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAppendAxis();
      }
    else
      {
      tempr = op->vtkImageAppend::GetAppendAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_SetPreserveExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreserveExtents(temp0);
      }
    else
      {
      op->vtkImageAppend::SetPreserveExtents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_GetPreserveExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreserveExtents();
      }
    else
      {
      tempr = op->vtkImageAppend::GetPreserveExtents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_PreserveExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveExtentsOn();
      }
    else
      {
      op->vtkImageAppend::PreserveExtentsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppend_PreserveExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppend *op = static_cast<vtkImageAppend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveExtentsOff();
      }
    else
      {
      op->vtkImageAppend::PreserveExtentsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageAppend_Methods[] = {
  {(char*)"GetClassName", PyvtkImageAppend_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageAppend_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageAppend_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageAppend\nC++: vtkImageAppend *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageAppend_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageAppend\nC++: vtkImageAppend *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReplaceNthInputConnection", PyvtkImageAppend_ReplaceNthInputConnection, 1,
   (char*)"V.ReplaceNthInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void ReplaceNthInputConnection(int idx,\n    vtkAlgorithmOutput *input)\n\nReplace one of the input connections with a new input.  You can\nonly replace input connections that you previously created with\nAddInputConnection() or, in the case of the first input, with\nSetInputConnection().\n"},
  {(char*)"SetInput", PyvtkImageAppend_SetInput, 1,
   (char*)"V.SetInput(int, vtkDataObject)\nC++: void SetInput(int num, vtkDataObject *input)\nV.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *input)\n\nSet an Input of this filter.  This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse SetInputConnection(), AddInputConnection(), and\nReplaceNthInputConnection() instead.\n"},
  {(char*)"GetInput", PyvtkImageAppend_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int num)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet one input to this filter. This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse vtkAlgorithm::GetInputConnection(0, num).\n"},
  {(char*)"GetNumberOfInputs", PyvtkImageAppend_GetNumberOfInputs, 1,
   (char*)"V.GetNumberOfInputs() -> int\nC++: int GetNumberOfInputs()\n\nGet the number of inputs to this filter. This method is only for\nsupport of old-style pipeline connections.  When writing new code\nyou should use vtkAlgorithm::GetNumberOfInputConnections(0).\n"},
  {(char*)"SetAppendAxis", PyvtkImageAppend_SetAppendAxis, 1,
   (char*)"V.SetAppendAxis(int)\nC++: void SetAppendAxis(int a)\n\nThis axis is expanded to hold the multiple images. The default\nAppendAxis is the X axis. If you want to create a volue from a\nseries of XY images, then you should set the AppendAxis to 2 (Z\naxis).\n"},
  {(char*)"GetAppendAxis", PyvtkImageAppend_GetAppendAxis, 1,
   (char*)"V.GetAppendAxis() -> int\nC++: int GetAppendAxis()\n\nThis axis is expanded to hold the multiple images. The default\nAppendAxis is the X axis. If you want to create a volue from a\nseries of XY images, then you should set the AppendAxis to 2 (Z\naxis).\n"},
  {(char*)"SetPreserveExtents", PyvtkImageAppend_SetPreserveExtents, 1,
   (char*)"V.SetPreserveExtents(int)\nC++: void SetPreserveExtents(int a)\n\nBy default \"PreserveExtents\" is off and the append axis is used.\nWhen \"PreseveExtents\" is on, the extent of the inputs is used to\nplace the image in the output.  The whole extent of the output is\nthe union of the input whole extents.  Any portion of the output\nnot covered by the inputs is set to zero.  The origin and spacing\nis taken from the first input.\n"},
  {(char*)"GetPreserveExtents", PyvtkImageAppend_GetPreserveExtents, 1,
   (char*)"V.GetPreserveExtents() -> int\nC++: int GetPreserveExtents()\n\nBy default \"PreserveExtents\" is off and the append axis is used.\nWhen \"PreseveExtents\" is on, the extent of the inputs is used to\nplace the image in the output.  The whole extent of the output is\nthe union of the input whole extents.  Any portion of the output\nnot covered by the inputs is set to zero.  The origin and spacing\nis taken from the first input.\n"},
  {(char*)"PreserveExtentsOn", PyvtkImageAppend_PreserveExtentsOn, 1,
   (char*)"V.PreserveExtentsOn()\nC++: void PreserveExtentsOn()\n\nBy default \"PreserveExtents\" is off and the append axis is used.\nWhen \"PreseveExtents\" is on, the extent of the inputs is used to\nplace the image in the output.  The whole extent of the output is\nthe union of the input whole extents.  Any portion of the output\nnot covered by the inputs is set to zero.  The origin and spacing\nis taken from the first input.\n"},
  {(char*)"PreserveExtentsOff", PyvtkImageAppend_PreserveExtentsOff, 1,
   (char*)"V.PreserveExtentsOff()\nC++: void PreserveExtentsOff()\n\nBy default \"PreserveExtents\" is off and the append axis is used.\nWhen \"PreseveExtents\" is on, the extent of the inputs is used to\nplace the image in the output.  The whole extent of the output is\nthe union of the input whole extents.  Any portion of the output\nnot covered by the inputs is set to zero.  The origin and spacing\nis taken from the first input.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageAppend_StaticNew()
{
  return vtkImageAppend::New();
}

PyObject *PyVTKClass_vtkImageAppendNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageAppend_StaticNew,
    PyvtkImageAppend_Methods,
    "vtkImageAppend", modulename,
    NULL, NULL,
    PyvtkImageAppend_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageAppend_Doc()
{
  static const char *docstring[] = {
    "vtkImageAppend - Collects data from multiple inputs into one image.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageAppend takes the components from multiple inputs and merges\nthem into one output. The output images are append along the\n\"AppendAxis\". Except for the append axis, all inputs must have the\nsame extent. All inputs must have the same number of scalar\ncomponents. A future extension might be to pad or clip inputs to have\nthe same extent. The output has the same origin and spacing as the\nfirst i",
    "nput. The origin and spacing of all other inputs are ignored. \nAll inputs must have the same scalar type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageAppend(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageAppendNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageAppend", o) != 0)
    {
    Py_DECREF(o);
    }

}

