// python wrapper for vtkPlaneSource
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
#include "vtkPlaneSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlaneSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlaneSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlaneSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlaneSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPlaneSource_Doc();


static PyObject *
PyvtkPlaneSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      tempr = op->vtkPlaneSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      tempr = op->vtkPlaneSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  vtkPlaneSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlaneSource::NewInstance();
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
PyvtkPlaneSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlaneSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlaneSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetXResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXResolution(temp0);
      }
    else
      {
      op->vtkPlaneSource::SetXResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetXResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXResolution();
      }
    else
      {
      tempr = op->vtkPlaneSource::GetXResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetYResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYResolution(temp0);
      }
    else
      {
      op->vtkPlaneSource::SetYResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetYResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYResolution();
      }
    else
      {
      tempr = op->vtkPlaneSource::GetYResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0, temp1);
      }
    else
      {
      op->vtkPlaneSource::SetResolution(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetResolution(temp0, temp1);
      }
    else
      {
      op->vtkPlaneSource::GetResolution(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->vtkPlaneSource::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->vtkPlaneSource::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneSource_SetOrigin_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkPlaneSource_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      tempr = op->vtkPlaneSource::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlaneSource::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkPlaneSource::SetPoint1(temp0);
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
PyvtkPlaneSource_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneSource_SetPoint1_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkPlaneSource_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1();
      }
    else
      {
      tempr = op->vtkPlaneSource::GetPoint1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlaneSource::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkPlaneSource::SetPoint2(temp0);
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
PyvtkPlaneSource_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneSource_SetPoint2_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkPlaneSource_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2();
      }
    else
      {
      tempr = op->vtkPlaneSource::GetPoint2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlaneSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkPlaneSource::SetCenter(temp0);
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
PyvtkPlaneSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkPlaneSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkPlaneSource::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlaneSource::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkPlaneSource::SetNormal(temp0);
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
PyvtkPlaneSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPlaneSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkPlaneSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormal();
      }
    else
      {
      tempr = op->vtkPlaneSource::GetNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPlaneSource_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Push(temp0);
      }
    else
      {
      op->vtkPlaneSource::Push(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlaneSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPlaneSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlaneSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlaneSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlaneSource\nC++: vtkPlaneSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlaneSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlaneSource\nC++: vtkPlaneSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetXResolution", PyvtkPlaneSource_SetXResolution, 1,
   (char*)"V.SetXResolution(int)\nC++: void SetXResolution(int a)\n\nSpecify the resolution of the plane along the first axes.\n"},
  {(char*)"GetXResolution", PyvtkPlaneSource_GetXResolution, 1,
   (char*)"V.GetXResolution() -> int\nC++: int GetXResolution()\n\nSpecify the resolution of the plane along the first axes.\n"},
  {(char*)"SetYResolution", PyvtkPlaneSource_SetYResolution, 1,
   (char*)"V.SetYResolution(int)\nC++: void SetYResolution(int a)\n\nSpecify the resolution of the plane along the second axes.\n"},
  {(char*)"GetYResolution", PyvtkPlaneSource_GetYResolution, 1,
   (char*)"V.GetYResolution() -> int\nC++: int GetYResolution()\n\nSpecify the resolution of the plane along the second axes.\n"},
  {(char*)"SetResolution", PyvtkPlaneSource_SetResolution, 1,
   (char*)"V.SetResolution(int, int)\nC++: void SetResolution(const int xR, const int yR)\n\nSet the number of x-y subdivisions in the plane.\n"},
  {(char*)"GetResolution", PyvtkPlaneSource_GetResolution, 1,
   (char*)"V.GetResolution(int, int)\nC++: void GetResolution(int &xR, int &yR)\n\nSet the number of x-y subdivisions in the plane.\n"},
  {(char*)"SetOrigin", PyvtkPlaneSource_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkPlaneSource_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSpecify a point defining the origin of the plane.\n"},
  {(char*)"SetPoint1", PyvtkPlaneSource_SetPoint1, 1,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double x, double y, double z)\nV.SetPoint1([float, float, float])\nC++: void SetPoint1(double pnt[3])\n\nSpecify a point defining the first axis of the plane.\n"},
  {(char*)"GetPoint1", PyvtkPlaneSource_GetPoint1, 1,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSpecify a point defining the first axis of the plane.\n"},
  {(char*)"SetPoint2", PyvtkPlaneSource_SetPoint2, 1,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double x, double y, double z)\nV.SetPoint2([float, float, float])\nC++: void SetPoint2(double pnt[3])\n\nSpecify a point defining the second axis of the plane.\n"},
  {(char*)"GetPoint2", PyvtkPlaneSource_GetPoint2, 1,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSpecify a point defining the second axis of the plane.\n"},
  {(char*)"SetCenter", PyvtkPlaneSource_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double x, double y, double z)\nV.SetCenter([float, float, float])\nC++: void SetCenter(double center[3])\n\nSet/Get the center of the plane. Works in conjunction with the\nplane normal to position the plane. Don't use this method to\ndefine the plane. Instead, use it to move the plane to a new\ncenter point.\n"},
  {(char*)"GetCenter", PyvtkPlaneSource_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet/Get the center of the plane. Works in conjunction with the\nplane normal to position the plane. Don't use this method to\ndefine the plane. Instead, use it to move the plane to a new\ncenter point.\n"},
  {(char*)"SetNormal", PyvtkPlaneSource_SetNormal, 1,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double nx, double ny, double nz)\nV.SetNormal([float, float, float])\nC++: void SetNormal(double n[3])\n\nSet/Get the plane normal. Works in conjunction with the plane\ncenter to orient the plane. Don't use this method to define the\nplane. Instead, use it to rotate the plane around the current\ncenter point.\n"},
  {(char*)"GetNormal", PyvtkPlaneSource_GetNormal, 1,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSet/Get the plane normal. Works in conjunction with the plane\ncenter to orient the plane. Don't use this method to define the\nplane. Instead, use it to rotate the plane around the current\ncenter point.\n"},
  {(char*)"Push", PyvtkPlaneSource_Push, 1,
   (char*)"V.Push(float)\nC++: void Push(double distance)\n\nTranslate the plane in the direction of the normal by the\ndistance specified.  Negative values move the plane in the\nopposite direction.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlaneSource_StaticNew()
{
  return vtkPlaneSource::New();
}

PyObject *PyVTKClass_vtkPlaneSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlaneSource_StaticNew,
    PyvtkPlaneSource_Methods,
    "vtkPlaneSource", modulename,
    NULL, NULL,
    PyvtkPlaneSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPlaneSource_Doc()
{
  static const char *docstring[] = {
    "vtkPlaneSource - create an array of quadrilaterals located in a plane\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPlaneSource creates an m x n array of quadrilaterals arranged as a\nregular tiling in a plane. The plane is defined by specifying an\norigin point, and then two other points that, together with the\norigin, define two axes for the plane. These axes do not have to be\northogonal - so you can create a parallelogram. (The axes must not be\nparallel.) The resolution of the plane (i.e., number of subdivi",
    "sions)\nis controlled by the ivars XResolution and YResolution.\n\nBy default, the plane is centered at the origin and perpendicular to\nthe z-axis, with width and height of length 1 and resolutions set to\n1.\n\nThere are three convenience methods that allow you to easily move the\nplane.  The first, SetNormal(), allows you to specify the plane\nnormal. The effect of this method is to rotate the plane aro",
    "und the\ncenter of the plane, aligning the plane normal with the specified\nnormal. The rotation is about the axis defined by the cross product\nof the current normal with the new normal. The second, SetCenter(),\ntranslates the center of the plane to the specified center point. The\nthird method, Push(), allows you to translate the plane along the\nplane normal by the distance specified. (Negative Push",
    " values\ntranslate the plane in the negative normal direction.)  Note that the\nSetNormal(), SetCenter() and Push() methods modify the Origin,\nPoint1, and/or Point2 instance variables.\n\nCaveats:\n\nThe normal to the plane will point in the direction of the cross\nproduct of the first axis (Origin->Point1) with the second\n(Origin->Point2). This also affects the normals to the generated\npolygons.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlaneSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlaneSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlaneSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

