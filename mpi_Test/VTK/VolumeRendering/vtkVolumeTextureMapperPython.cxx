// python wrapper for vtkVolumeTextureMapper
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
#include "vtkVolumeTextureMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeTextureMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeTextureMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeTextureMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeTextureMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkVolumeTextureMapper_Doc();


static PyObject *
PyvtkVolumeTextureMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

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
      tempr = op->vtkVolumeTextureMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

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
      tempr = op->vtkVolumeTextureMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  vtkVolumeTextureMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::NewInstance();
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
PyvtkVolumeTextureMapper_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkVolumeTextureMapper::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_SetGradientEstimator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientEstimator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  vtkEncodedGradientEstimator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEncodedGradientEstimator"))
    {
    if (ap.IsBound())
      {
      op->SetGradientEstimator(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper::SetGradientEstimator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGradientEstimator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientEstimator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  vtkEncodedGradientEstimator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientEstimator();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetGradientEstimator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGradientShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  vtkEncodedGradientShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientShader();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetGradientShader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetShade(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShade();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetShade();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderWindow();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetRenderWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataOrigin();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetDataOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSpacing();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetDataSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeScale();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetGradientMagnitudeScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  int temp0;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeScale(temp0);
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetGradientMagnitudeScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVolumeTextureMapper_GetGradientMagnitudeScale_s1(self, args);
    case 1:
      return PyvtkVolumeTextureMapper_GetGradientMagnitudeScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeScale");
  return NULL;
}



static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeBias_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeBias();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetGradientMagnitudeBias();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeBias_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper *op = static_cast<vtkVolumeTextureMapper *>(vp);

  int temp0;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeBias(temp0);
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper::GetGradientMagnitudeBias(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVolumeTextureMapper_GetGradientMagnitudeBias_s1(self, args);
    case 1:
      return PyvtkVolumeTextureMapper_GetGradientMagnitudeBias_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeBias");
  return NULL;
}


static PyMethodDef PyvtkVolumeTextureMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeTextureMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeTextureMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeTextureMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeTextureMapper\nC++: vtkVolumeTextureMapper *NewInstance()\n\n"},
  {(char*)"Update", PyvtkVolumeTextureMapper_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the volume rendering pipeline by updating the scalar input\n"},
  {(char*)"SetGradientEstimator", PyvtkVolumeTextureMapper_SetGradientEstimator, 1,
   (char*)"V.SetGradientEstimator(vtkEncodedGradientEstimator)\nC++: virtual void SetGradientEstimator(\n    vtkEncodedGradientEstimator *gradest)\n\nSet / Get the gradient estimator used to estimate normals\n"},
  {(char*)"GetGradientEstimator", PyvtkVolumeTextureMapper_GetGradientEstimator, 1,
   (char*)"V.GetGradientEstimator() -> vtkEncodedGradientEstimator\nC++: vtkEncodedGradientEstimator *GetGradientEstimator()\n\nSet / Get the gradient estimator used to estimate normals\n"},
  {(char*)"GetGradientShader", PyvtkVolumeTextureMapper_GetGradientShader, 1,
   (char*)"V.GetGradientShader() -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *GetGradientShader()\n\nGet the gradient shader.\n"},
  {(char*)"GetShade", PyvtkVolumeTextureMapper_GetShade, 1,
   (char*)"V.GetShade() -> int\nC++: int GetShade()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetRenderWindow", PyvtkVolumeTextureMapper_GetRenderWindow, 1,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetDataOrigin", PyvtkVolumeTextureMapper_GetDataOrigin, 1,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"GetDataSpacing", PyvtkVolumeTextureMapper_GetDataSpacing, 1,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\nAllow access to the arrays / variables from the templated\nfunctions in the subclasses.\n"},
  {(char*)"Render", PyvtkVolumeTextureMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"GetGradientMagnitudeScale", PyvtkVolumeTextureMapper_GetGradientMagnitudeScale, 1,
   (char*)"V.GetGradientMagnitudeScale() -> float\nC++: virtual float GetGradientMagnitudeScale()\nV.GetGradientMagnitudeScale(int) -> float\nC++: virtual float GetGradientMagnitudeScale(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Values\nneeded by the volume\n"},
  {(char*)"GetGradientMagnitudeBias", PyvtkVolumeTextureMapper_GetGradientMagnitudeBias, 1,
   (char*)"V.GetGradientMagnitudeBias() -> float\nC++: virtual float GetGradientMagnitudeBias()\nV.GetGradientMagnitudeBias(int) -> float\nC++: virtual float GetGradientMagnitudeBias(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Values\nneeded by the volume\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkVolumeTextureMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkVolumeTextureMapper_Methods,
    "vtkVolumeTextureMapper", modulename,
    NULL, NULL,
    PyvtkVolumeTextureMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkVolumeTextureMapper_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeTextureMapper - Abstract class for a volume mapper\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "vtkVolumeTextureMapper is the abstract definition of a volume mapper\nthat uses a texture mapping approach.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeTextureMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeTextureMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeTextureMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

