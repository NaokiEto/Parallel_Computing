// python wrapper for vtkEncodedGradientShader
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
#include "vtkEncodedGradientShader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEncodedGradientShader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEncodedGradientShader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEncodedGradientShaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEncodedGradientShaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEncodedGradientShader_Doc();


static PyObject *
PyvtkEncodedGradientShader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

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
      tempr = op->vtkEncodedGradientShader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

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
      tempr = op->vtkEncodedGradientShader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkEncodedGradientShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::NewInstance();
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
PyvtkEncodedGradientShader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEncodedGradientShader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEncodedGradientShader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetZeroNormalDiffuseIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalDiffuseIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZeroNormalDiffuseIntensity(temp0);
      }
    else
      {
      op->vtkEncodedGradientShader::SetZeroNormalDiffuseIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZeroNormalDiffuseIntensityMinValue();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZeroNormalDiffuseIntensityMaxValue();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZeroNormalDiffuseIntensity();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetZeroNormalSpecularIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalSpecularIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZeroNormalSpecularIntensity(temp0);
      }
    else
      {
      op->vtkEncodedGradientShader::SetZeroNormalSpecularIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZeroNormalSpecularIntensityMinValue();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZeroNormalSpecularIntensityMaxValue();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZeroNormalSpecularIntensity();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_UpdateShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  vtkEncodedGradientEstimator *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkEncodedGradientEstimator"))
    {
    if (ap.IsBound())
      {
      op->UpdateShadingTable(temp0, temp1, temp2);
      }
    else
      {
      op->vtkEncodedGradientShader::UpdateShadingTable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveComponent(temp0);
      }
    else
      {
      op->vtkEncodedGradientShader::SetActiveComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActiveComponentMinValue();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetActiveComponentMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActiveComponentMaxValue();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetActiveComponentMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActiveComponent();
      }
    else
      {
      tempr = op->vtkEncodedGradientShader::GetActiveComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEncodedGradientShader_Methods[] = {
  {(char*)"GetClassName", PyvtkEncodedGradientShader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEncodedGradientShader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEncodedGradientShader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEncodedGradientShader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetZeroNormalDiffuseIntensity", PyvtkEncodedGradientShader_SetZeroNormalDiffuseIntensity, 1,
   (char*)"V.SetZeroNormalDiffuseIntensity(float)\nC++: void SetZeroNormalDiffuseIntensity(float)\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalDiffuseIntensityMinValue", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMinValue, 1,
   (char*)"V.GetZeroNormalDiffuseIntensityMinValue() -> float\nC++: float GetZeroNormalDiffuseIntensityMinValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalDiffuseIntensityMaxValue", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMaxValue, 1,
   (char*)"V.GetZeroNormalDiffuseIntensityMaxValue() -> float\nC++: float GetZeroNormalDiffuseIntensityMaxValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalDiffuseIntensity", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensity, 1,
   (char*)"V.GetZeroNormalDiffuseIntensity() -> float\nC++: float GetZeroNormalDiffuseIntensity()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"SetZeroNormalSpecularIntensity", PyvtkEncodedGradientShader_SetZeroNormalSpecularIntensity, 1,
   (char*)"V.SetZeroNormalSpecularIntensity(float)\nC++: void SetZeroNormalSpecularIntensity(float)\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalSpecularIntensityMinValue", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMinValue, 1,
   (char*)"V.GetZeroNormalSpecularIntensityMinValue() -> float\nC++: float GetZeroNormalSpecularIntensityMinValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalSpecularIntensityMaxValue", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMaxValue, 1,
   (char*)"V.GetZeroNormalSpecularIntensityMaxValue() -> float\nC++: float GetZeroNormalSpecularIntensityMaxValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"GetZeroNormalSpecularIntensity", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensity, 1,
   (char*)"V.GetZeroNormalSpecularIntensity() -> float\nC++: float GetZeroNormalSpecularIntensity()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {(char*)"UpdateShadingTable", PyvtkEncodedGradientShader_UpdateShadingTable, 1,
   (char*)"V.UpdateShadingTable(vtkRenderer, vtkVolume,\n    vtkEncodedGradientEstimator)\nC++: void UpdateShadingTable(vtkRenderer *ren, vtkVolume *vol,\n    vtkEncodedGradientEstimator *gradest)\n\nCause the shading table to be updated\n"},
  {(char*)"SetActiveComponent", PyvtkEncodedGradientShader_SetActiveComponent, 1,
   (char*)"V.SetActiveComponent(int)\nC++: void SetActiveComponent(int)\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {(char*)"GetActiveComponentMinValue", PyvtkEncodedGradientShader_GetActiveComponentMinValue, 1,
   (char*)"V.GetActiveComponentMinValue() -> int\nC++: int GetActiveComponentMinValue()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {(char*)"GetActiveComponentMaxValue", PyvtkEncodedGradientShader_GetActiveComponentMaxValue, 1,
   (char*)"V.GetActiveComponentMaxValue() -> int\nC++: int GetActiveComponentMaxValue()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {(char*)"GetActiveComponent", PyvtkEncodedGradientShader_GetActiveComponent, 1,
   (char*)"V.GetActiveComponent() -> int\nC++: int GetActiveComponent()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEncodedGradientShader_StaticNew()
{
  return vtkEncodedGradientShader::New();
}

PyObject *PyVTKClass_vtkEncodedGradientShaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEncodedGradientShader_StaticNew,
    PyvtkEncodedGradientShader_Methods,
    "vtkEncodedGradientShader", modulename,
    NULL, NULL,
    PyvtkEncodedGradientShader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEncodedGradientShader_Doc()
{
  static const char *docstring[] = {
    "vtkEncodedGradientShader - Compute shading tables for encoded normals.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkEncodedGradientShader computes shading tables for encoded normals\nthat indicates the amount of diffuse and specular illumination that\nis received from all light sources at a surface location with that\nnormal. For diffuse illumination this is accurate, but for specular\nillumination it is approximate for perspective projections since the\ncenter view direction is always used as the view direction.",
    " Since the\nshading table is dependent on the volume (for the transformation that\nmust be applied to the normals to put them into world coordinates)\nthere is a shading table per volume. This is necessary because\nmultiple volumes can share a volume mapper.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEncodedGradientShader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEncodedGradientShaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEncodedGradientShader", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(100);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX_SHADING_TABLES", o) != 0)
    {
    Py_DECREF(o);
    }

}

