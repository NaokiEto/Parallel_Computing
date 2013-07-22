// python wrapper for vtkTexturedSphereSource
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
#include "vtkTexturedSphereSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTexturedSphereSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTexturedSphereSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTexturedSphereSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTexturedSphereSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTexturedSphereSource_Doc();


static PyObject *
PyvtkTexturedSphereSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

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
      tempr = op->vtkTexturedSphereSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

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
      tempr = op->vtkTexturedSphereSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  vtkTexturedSphereSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::NewInstance();
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
PyvtkTexturedSphereSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTexturedSphereSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTexturedSphereSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMinValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaResolution(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetThetaResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThetaResolutionMinValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetThetaResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThetaResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetThetaResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThetaResolution();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetThetaResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiResolution(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetPhiResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPhiResolutionMinValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetPhiResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPhiResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetPhiResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPhiResolution();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetPhiResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTheta(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetTheta(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThetaMinValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetThetaMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThetaMaxValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetThetaMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTheta();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetTheta();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhi(temp0);
      }
    else
      {
      op->vtkTexturedSphereSource::SetPhi(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPhiMinValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetPhiMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPhiMaxValue();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetPhiMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPhi();
      }
    else
      {
      tempr = op->vtkTexturedSphereSource::GetPhi();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTexturedSphereSource_Methods[] = {
  {(char*)"GetClassName", PyvtkTexturedSphereSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTexturedSphereSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTexturedSphereSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTexturedSphereSource\nC++: vtkTexturedSphereSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTexturedSphereSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTexturedSphereSource\nC++: vtkTexturedSphereSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRadius", PyvtkTexturedSphereSource_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet radius of sphere.\n"},
  {(char*)"GetRadiusMinValue", PyvtkTexturedSphereSource_GetRadiusMinValue, 1,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet radius of sphere.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkTexturedSphereSource_GetRadiusMaxValue, 1,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet radius of sphere.\n"},
  {(char*)"GetRadius", PyvtkTexturedSphereSource_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet radius of sphere.\n"},
  {(char*)"SetThetaResolution", PyvtkTexturedSphereSource_SetThetaResolution, 1,
   (char*)"V.SetThetaResolution(int)\nC++: void SetThetaResolution(int)\n\nSet the number of points in the longitude direction.\n"},
  {(char*)"GetThetaResolutionMinValue", PyvtkTexturedSphereSource_GetThetaResolutionMinValue, 1,
   (char*)"V.GetThetaResolutionMinValue() -> int\nC++: int GetThetaResolutionMinValue()\n\nSet the number of points in the longitude direction.\n"},
  {(char*)"GetThetaResolutionMaxValue", PyvtkTexturedSphereSource_GetThetaResolutionMaxValue, 1,
   (char*)"V.GetThetaResolutionMaxValue() -> int\nC++: int GetThetaResolutionMaxValue()\n\nSet the number of points in the longitude direction.\n"},
  {(char*)"GetThetaResolution", PyvtkTexturedSphereSource_GetThetaResolution, 1,
   (char*)"V.GetThetaResolution() -> int\nC++: int GetThetaResolution()\n\nSet the number of points in the longitude direction.\n"},
  {(char*)"SetPhiResolution", PyvtkTexturedSphereSource_SetPhiResolution, 1,
   (char*)"V.SetPhiResolution(int)\nC++: void SetPhiResolution(int)\n\nSet the number of points in the latitude direction.\n"},
  {(char*)"GetPhiResolutionMinValue", PyvtkTexturedSphereSource_GetPhiResolutionMinValue, 1,
   (char*)"V.GetPhiResolutionMinValue() -> int\nC++: int GetPhiResolutionMinValue()\n\nSet the number of points in the latitude direction.\n"},
  {(char*)"GetPhiResolutionMaxValue", PyvtkTexturedSphereSource_GetPhiResolutionMaxValue, 1,
   (char*)"V.GetPhiResolutionMaxValue() -> int\nC++: int GetPhiResolutionMaxValue()\n\nSet the number of points in the latitude direction.\n"},
  {(char*)"GetPhiResolution", PyvtkTexturedSphereSource_GetPhiResolution, 1,
   (char*)"V.GetPhiResolution() -> int\nC++: int GetPhiResolution()\n\nSet the number of points in the latitude direction.\n"},
  {(char*)"SetTheta", PyvtkTexturedSphereSource_SetTheta, 1,
   (char*)"V.SetTheta(float)\nC++: void SetTheta(double)\n\nSet the maximum longitude angle.\n"},
  {(char*)"GetThetaMinValue", PyvtkTexturedSphereSource_GetThetaMinValue, 1,
   (char*)"V.GetThetaMinValue() -> float\nC++: double GetThetaMinValue()\n\nSet the maximum longitude angle.\n"},
  {(char*)"GetThetaMaxValue", PyvtkTexturedSphereSource_GetThetaMaxValue, 1,
   (char*)"V.GetThetaMaxValue() -> float\nC++: double GetThetaMaxValue()\n\nSet the maximum longitude angle.\n"},
  {(char*)"GetTheta", PyvtkTexturedSphereSource_GetTheta, 1,
   (char*)"V.GetTheta() -> float\nC++: double GetTheta()\n\nSet the maximum longitude angle.\n"},
  {(char*)"SetPhi", PyvtkTexturedSphereSource_SetPhi, 1,
   (char*)"V.SetPhi(float)\nC++: void SetPhi(double)\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {(char*)"GetPhiMinValue", PyvtkTexturedSphereSource_GetPhiMinValue, 1,
   (char*)"V.GetPhiMinValue() -> float\nC++: double GetPhiMinValue()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {(char*)"GetPhiMaxValue", PyvtkTexturedSphereSource_GetPhiMaxValue, 1,
   (char*)"V.GetPhiMaxValue() -> float\nC++: double GetPhiMaxValue()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {(char*)"GetPhi", PyvtkTexturedSphereSource_GetPhi, 1,
   (char*)"V.GetPhi() -> float\nC++: double GetPhi()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTexturedSphereSource_StaticNew()
{
  return vtkTexturedSphereSource::New();
}

PyObject *PyVTKClass_vtkTexturedSphereSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTexturedSphereSource_StaticNew,
    PyvtkTexturedSphereSource_Methods,
    "vtkTexturedSphereSource", modulename,
    NULL, NULL,
    PyvtkTexturedSphereSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTexturedSphereSource_Doc()
{
  static const char *docstring[] = {
    "vtkTexturedSphereSource - create a sphere centered at the origin\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTexturedSphereSource creates a polygonal sphere of specified\nradius centered at the origin. The resolution (polygonal\ndiscretization) in both the latitude (phi) and longitude (theta)\ndirections can be specified. It also is possible to create partial\nsphere by specifying maximum phi and theta angles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTexturedSphereSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTexturedSphereSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTexturedSphereSource", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1024);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX_SPHERE_RESOLUTION", o) != 0)
    {
    Py_DECREF(o);
    }

}

