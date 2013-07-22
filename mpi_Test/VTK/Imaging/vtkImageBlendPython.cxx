// python wrapper for vtkImageBlend
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
#include "vtkImageBlend.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageBlend(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageBlend(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageBlendNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageBlendNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageBlend_Doc();


static PyObject *
PyvtkImageBlend_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

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
      tempr = op->vtkImageBlend::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

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
      tempr = op->vtkImageBlend::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkImageBlend *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageBlend::NewInstance();
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
PyvtkImageBlend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageBlend *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageBlend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_ReplaceNthInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceNthInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

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
      op->vtkImageBlend::ReplaceNthInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

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
      op->vtkImageBlend::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageBlend_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

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
      op->vtkImageBlend::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageBlend_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageBlend_SetInput_s1(self, args);
    case 1:
      return PyvtkImageBlend_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkImageBlend_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

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
      tempr = op->vtkImageBlend::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageBlend_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

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
      tempr = op->vtkImageBlend::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageBlend_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageBlend_GetInput_s1(self, args);
    case 0:
      return PyvtkImageBlend_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkImageBlend_GetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

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
      tempr = op->vtkImageBlend::GetNumberOfInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0, temp1);
      }
    else
      {
      op->vtkImageBlend::SetOpacity(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacity(temp0);
      }
    else
      {
      tempr = op->vtkImageBlend::GetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->SetStencil(temp0);
      }
    else
      {
      op->vtkImageBlend::SetStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStencil();
      }
    else
      {
      tempr = op->vtkImageBlend::GetStencil();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlendMode(temp0);
      }
    else
      {
      op->vtkImageBlend::SetBlendMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendModeMinValue();
      }
    else
      {
      tempr = op->vtkImageBlend::GetBlendModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendModeMaxValue();
      }
    else
      {
      tempr = op->vtkImageBlend::GetBlendModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendMode();
      }
    else
      {
      tempr = op->vtkImageBlend::GetBlendMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendModeToNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToNormal();
      }
    else
      {
      op->vtkImageBlend::SetBlendModeToNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendModeToCompound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToCompound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToCompound();
      }
    else
      {
      op->vtkImageBlend::SetBlendModeToCompound();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendModeAsString();
      }
    else
      {
      tempr = op->vtkImageBlend::GetBlendModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_SetCompoundThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompoundThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompoundThreshold(temp0);
      }
    else
      {
      op->vtkImageBlend::SetCompoundThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageBlend_GetCompoundThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompoundThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompoundThreshold();
      }
    else
      {
      tempr = op->vtkImageBlend::GetCompoundThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageBlend_Methods[] = {
  {(char*)"GetClassName", PyvtkImageBlend_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageBlend_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageBlend_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageBlend\nC++: vtkImageBlend *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageBlend_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageBlend\nC++: vtkImageBlend *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReplaceNthInputConnection", PyvtkImageBlend_ReplaceNthInputConnection, 1,
   (char*)"V.ReplaceNthInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void ReplaceNthInputConnection(int idx,\n    vtkAlgorithmOutput *input)\n\nReplace one of the input connections with a new input.  You can\nonly replace input connections that you previously created with\nAddInputConnection() or, in the case of the first input, with\nSetInputConnection().\n"},
  {(char*)"SetInput", PyvtkImageBlend_SetInput, 1,
   (char*)"V.SetInput(int, vtkDataObject)\nC++: void SetInput(int num, vtkDataObject *input)\nV.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *input)\n\nSet an Input of this filter.  This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse SetInputConnection(), AddInputConnection(), and\nReplaceNthInputConnection() instead.\n"},
  {(char*)"GetInput", PyvtkImageBlend_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int num)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet one input to this filter. This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse vtkAlgorithm::GetInputConnection(0, num).\n"},
  {(char*)"GetNumberOfInputs", PyvtkImageBlend_GetNumberOfInputs, 1,
   (char*)"V.GetNumberOfInputs() -> int\nC++: int GetNumberOfInputs()\n\nGet the number of inputs to this filter. This method is only for\nsupport of old-style pipeline connections.  When writing new code\nyou should use vtkAlgorithm::GetNumberOfInputConnections(0).\n"},
  {(char*)"SetOpacity", PyvtkImageBlend_SetOpacity, 1,
   (char*)"V.SetOpacity(int, float)\nC++: void SetOpacity(int idx, double opacity)\n\nSet the opacity of an input image: the alpha values of the image\nare multiplied by the opacity.  The opacity of image idx=0 is\nignored.\n"},
  {(char*)"GetOpacity", PyvtkImageBlend_GetOpacity, 1,
   (char*)"V.GetOpacity(int) -> float\nC++: double GetOpacity(int idx)\n\nSet the opacity of an input image: the alpha values of the image\nare multiplied by the opacity.  The opacity of image idx=0 is\nignored.\n"},
  {(char*)"SetStencil", PyvtkImageBlend_SetStencil, 1,
   (char*)"V.SetStencil(vtkImageStencilData)\nC++: void SetStencil(vtkImageStencilData *stencil)\n\nSet a stencil to apply when blending the data.\n"},
  {(char*)"GetStencil", PyvtkImageBlend_GetStencil, 1,
   (char*)"V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nSet a stencil to apply when blending the data.\n"},
  {(char*)"SetBlendMode", PyvtkImageBlend_SetBlendMode, 1,
   (char*)"V.SetBlendMode(int)\nC++: void SetBlendMode(int)\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeMinValue", PyvtkImageBlend_GetBlendModeMinValue, 1,
   (char*)"V.GetBlendModeMinValue() -> int\nC++: int GetBlendModeMinValue()\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeMaxValue", PyvtkImageBlend_GetBlendModeMaxValue, 1,
   (char*)"V.GetBlendModeMaxValue() -> int\nC++: int GetBlendModeMaxValue()\n\nSet the blend mode\n"},
  {(char*)"GetBlendMode", PyvtkImageBlend_GetBlendMode, 1,
   (char*)"V.GetBlendMode() -> int\nC++: int GetBlendMode()\n\nSet the blend mode\n"},
  {(char*)"SetBlendModeToNormal", PyvtkImageBlend_SetBlendModeToNormal, 1,
   (char*)"V.SetBlendModeToNormal()\nC++: void SetBlendModeToNormal()\n\nSet the blend mode\n"},
  {(char*)"SetBlendModeToCompound", PyvtkImageBlend_SetBlendModeToCompound, 1,
   (char*)"V.SetBlendModeToCompound()\nC++: void SetBlendModeToCompound()\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeAsString", PyvtkImageBlend_GetBlendModeAsString, 1,
   (char*)"V.GetBlendModeAsString() -> string\nC++: const char *GetBlendModeAsString(void)\n\nSet the blend mode\n"},
  {(char*)"SetCompoundThreshold", PyvtkImageBlend_SetCompoundThreshold, 1,
   (char*)"V.SetCompoundThreshold(float)\nC++: void SetCompoundThreshold(double a)\n\nSpecify a threshold in compound mode. Pixels with opacity*alpha\nless or equal the threshold are ignored.\n"},
  {(char*)"GetCompoundThreshold", PyvtkImageBlend_GetCompoundThreshold, 1,
   (char*)"V.GetCompoundThreshold() -> float\nC++: double GetCompoundThreshold()\n\nSpecify a threshold in compound mode. Pixels with opacity*alpha\nless or equal the threshold are ignored.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageBlend_StaticNew()
{
  return vtkImageBlend::New();
}

PyObject *PyVTKClass_vtkImageBlendNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageBlend_StaticNew,
    PyvtkImageBlend_Methods,
    "vtkImageBlend", modulename,
    NULL, NULL,
    PyvtkImageBlend_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageBlend_Doc()
{
  static const char *docstring[] = {
    "vtkImageBlend - blend images together using alpha or opacity\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageBlend takes L, LA, RGB, or RGBA images as input and blends\nthem according to the alpha values and/or the opacity setting for\neach input.\n\nThe spacing, origin, extent, and number of components of the output\nare the same as those for the first input.  If the input has an alpha\ncomponent, then this component is copied unchanged into the output.\nIn addition, if the first input has either one c",
    "omponent or two\ncomponents i.e. if it is either L (greyscale) or LA (greyscale +\nalpha) then all other inputs must also be L or LA.\n\nDifferent blending modes are available:\n\nNormal (default) : This is the standard blending mode used by OpenGL\nand other graphics packages.  The output always has the same number\nof components and the same extent as the first input.  The alpha\nvalue of the first input",
    " is not used in the blending computation,\ninstead it is copied directly to the output.\n\noutput <- input[0]\nforeach input i {\n  foreach pixel px {\n    r <- input[i](px)(alpha) * opacity[i]\n    f <- (255 - r)\n    output(px) <- output(px) * f + input(px) * r\n  }\n}\n\nCompound : Images are compounded together and each component is\nscaled by the sum of the alpha/opacity values. Use the\nCompoundThreshold ",
    "method to set specify a threshold in compound mode.\nPixels with opacity*alpha less or equal than this threshold are\nignored. The alpha value of the first input, if present, is NOT\ncopied to the alpha value of the output.  The output always has the\nsame number of components and the same extent as the first input.\n\noutput <- 0\nforeach pixel px {\n  sum <- 0\n  foreach input i {\n    r <- input[i](px)(a",
    "lpha) * opacity(i)\n    sum <- sum + r\n    if r > threshold {\n      output(px) <- output(px) + input(px) * r\n    }\n  }\n  output(px) <- output(px) / sum\n}\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageBlend(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageBlendNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageBlend", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_IMAGE_BLEND_MODE_NORMAL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_IMAGE_BLEND_MODE_COMPOUND", o) != 0)
    {
    Py_DECREF(o);
    }

}

