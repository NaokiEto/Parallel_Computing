// python wrapper for vtkTransformTextureCoords
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
#include "vtkTransformTextureCoords.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransformTextureCoords(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransformTextureCoords(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransformTextureCoordsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransformTextureCoordsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkTransformTextureCoords_Doc();


static PyObject *
PyvtkTransformTextureCoords_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      tempr = op->vtkTransformTextureCoords::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      tempr = op->vtkTransformTextureCoords::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  vtkTransformTextureCoords *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransformTextureCoords::NewInstance();
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
PyvtkTransformTextureCoords_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransformTextureCoords *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransformTextureCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTransformTextureCoords::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkTransformTextureCoords::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTransformTextureCoords_SetPosition_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkTransformTextureCoords_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkTransformTextureCoords::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_AddPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->AddPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTransformTextureCoords::AddPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_AddPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->AddPosition(temp0);
      }
    else
      {
      op->vtkTransformTextureCoords::AddPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_AddPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTransformTextureCoords_AddPosition_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_AddPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPosition");
  return NULL;
}



static PyObject *
PyvtkTransformTextureCoords_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTransformTextureCoords::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkTransformTextureCoords::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTransformTextureCoords_SetScale_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return NULL;
}



static PyObject *
PyvtkTransformTextureCoords_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale();
      }
    else
      {
      tempr = op->vtkTransformTextureCoords::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTransformTextureCoords::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkTransformTextureCoords::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTransformTextureCoords_SetOrigin_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkTransformTextureCoords_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkTransformTextureCoords::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlipR(temp0);
      }
    else
      {
      op->vtkTransformTextureCoords::SetFlipR(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlipR();
      }
    else
      {
      tempr = op->vtkTransformTextureCoords::GetFlipR();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipROn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipROn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipROn();
      }
    else
      {
      op->vtkTransformTextureCoords::FlipROn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipROff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipROff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipROff();
      }
    else
      {
      op->vtkTransformTextureCoords::FlipROff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlipS(temp0);
      }
    else
      {
      op->vtkTransformTextureCoords::SetFlipS(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlipS();
      }
    else
      {
      tempr = op->vtkTransformTextureCoords::GetFlipS();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipSOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipSOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipSOn();
      }
    else
      {
      op->vtkTransformTextureCoords::FlipSOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipSOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipSOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipSOff();
      }
    else
      {
      op->vtkTransformTextureCoords::FlipSOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlipT(temp0);
      }
    else
      {
      op->vtkTransformTextureCoords::SetFlipT(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlipT();
      }
    else
      {
      tempr = op->vtkTransformTextureCoords::GetFlipT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipTOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipTOn();
      }
    else
      {
      op->vtkTransformTextureCoords::FlipTOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipTOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipTOff();
      }
    else
      {
      op->vtkTransformTextureCoords::FlipTOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformTextureCoords_Methods[] = {
  {(char*)"GetClassName", PyvtkTransformTextureCoords_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransformTextureCoords_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransformTextureCoords_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransformTextureCoords\nC++: vtkTransformTextureCoords *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransformTextureCoords_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransformTextureCoords\nC++: vtkTransformTextureCoords *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkTransformTextureCoords_SetPosition, 1,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {(char*)"GetPosition", PyvtkTransformTextureCoords_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nSet/Get the position of the texture map. Setting the position\ntranslates the texture map by the amount specified.\n"},
  {(char*)"AddPosition", PyvtkTransformTextureCoords_AddPosition, 1,
   (char*)"V.AddPosition(float, float, float)\nC++: void AddPosition(double deltaR, double deltaS, double deltaT)\nV.AddPosition([float, float, float])\nC++: void AddPosition(double deltaPosition[3])\n\nIncrementally change the position of the texture map (i.e., does\na translate or shift of the texture coordinates).\n"},
  {(char*)"SetScale", PyvtkTransformTextureCoords_SetScale, 1,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {(char*)"GetScale", PyvtkTransformTextureCoords_GetScale, 1,
   (char*)"V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nSet/Get the scale of the texture map. Scaling in performed\nindependently on the r, s and t axes.\n"},
  {(char*)"SetOrigin", PyvtkTransformTextureCoords_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkTransformTextureCoords_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSet/Get the origin of the texture map. This is the point about\nwhich the texture map is flipped (e.g., rotated). Since a typical\ntexture map ranges from (0,1) in the r-s-t coordinates, the\ndefault origin is set at (0.5,0.5,0.5).\n"},
  {(char*)"SetFlipR", PyvtkTransformTextureCoords_SetFlipR, 1,
   (char*)"V.SetFlipR(int)\nC++: void SetFlipR(int a)\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"GetFlipR", PyvtkTransformTextureCoords_GetFlipR, 1,
   (char*)"V.GetFlipR() -> int\nC++: int GetFlipR()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"FlipROn", PyvtkTransformTextureCoords_FlipROn, 1,
   (char*)"V.FlipROn()\nC++: void FlipROn()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"FlipROff", PyvtkTransformTextureCoords_FlipROff, 1,
   (char*)"V.FlipROff()\nC++: void FlipROff()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"SetFlipS", PyvtkTransformTextureCoords_SetFlipS, 1,
   (char*)"V.SetFlipS(int)\nC++: void SetFlipS(int a)\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"GetFlipS", PyvtkTransformTextureCoords_GetFlipS, 1,
   (char*)"V.GetFlipS() -> int\nC++: int GetFlipS()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"FlipSOn", PyvtkTransformTextureCoords_FlipSOn, 1,
   (char*)"V.FlipSOn()\nC++: void FlipSOn()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"FlipSOff", PyvtkTransformTextureCoords_FlipSOff, 1,
   (char*)"V.FlipSOff()\nC++: void FlipSOff()\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"SetFlipT", PyvtkTransformTextureCoords_SetFlipT, 1,
   (char*)"V.SetFlipT(int)\nC++: void SetFlipT(int a)\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"GetFlipT", PyvtkTransformTextureCoords_GetFlipT, 1,
   (char*)"V.GetFlipT() -> int\nC++: int GetFlipT()\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"FlipTOn", PyvtkTransformTextureCoords_FlipTOn, 1,
   (char*)"V.FlipTOn()\nC++: void FlipTOn()\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {(char*)"FlipTOff", PyvtkTransformTextureCoords_FlipTOff, 1,
   (char*)"V.FlipTOff()\nC++: void FlipTOff()\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransformTextureCoords_StaticNew()
{
  return vtkTransformTextureCoords::New();
}

PyObject *PyVTKClass_vtkTransformTextureCoordsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransformTextureCoords_StaticNew,
    PyvtkTransformTextureCoords_Methods,
    "vtkTransformTextureCoords", modulename,
    NULL, NULL,
    PyvtkTransformTextureCoords_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransformTextureCoords_Doc()
{
  static const char *docstring[] = {
    "vtkTransformTextureCoords - transform (scale, rotate, translate)\ntexture coordinates\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkTransformTextureCoords is a filter that operates on texture\ncoordinates. It ingests any type of dataset, and outputs a dataset of\nthe same type. The filter lets you scale, translate, and rotate\ntexture coordinates. For example, by using the the Scale ivar, you\ncan shift texture coordinates that range from (0->1) to range from\n(0->10) (useful for repeated patterns).\n\nThe filter operates on textu",
    "re coordinates of dimension 1->3. The\ntexture coordinates are referred to as r-s-t. If the texture map is\ntwo dimensional, the t-coordinate (and operations on the\nt-coordinate) are ignored.\n\nSee Also:\n\nvtkTextureMapToPlane  vtkTextureMapToCylinder vtkTextureMapToSphere\nvtkThresholdTextureCoords vtkTexture\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransformTextureCoords(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformTextureCoordsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformTextureCoords", o) != 0)
    {
    Py_DECREF(o);
    }

}

