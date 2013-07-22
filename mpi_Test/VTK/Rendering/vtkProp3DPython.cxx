// python wrapper for vtkProp3D
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
#include "vtkProp3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProp3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProp3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPropNew
extern "C" { PyObject *PyVTKClass_vtkPropNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropNew
#endif

static const char **PyvtkProp3D_Doc();


static PyObject *
PyvtkProp3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      tempr = op->vtkProp3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      tempr = op->vtkProp3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkProp3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProp3D::NewInstance();
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
PyvtkProp3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkProp3D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkProp3D::SetPosition(temp0);
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
PyvtkProp3D_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProp3D_SetPosition_s1(self, args);
    case 1:
      return PyvtkProp3D_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkProp3D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      tempr = op->vtkProp3D::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_AddPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::AddPosition(temp0);
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
PyvtkProp3D_AddPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::AddPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_AddPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkProp3D_AddPosition_s1(self, args);
    case 3:
      return PyvtkProp3D_AddPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPosition");
  return NULL;
}



static PyObject *
PyvtkProp3D_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkProp3D::SetOrigin(temp0);
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
PyvtkProp3D_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProp3D_SetOrigin_s1(self, args);
    case 1:
      return PyvtkProp3D_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkProp3D_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      tempr = op->vtkProp3D::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetScale(temp0);
      }
    else
      {
      op->vtkProp3D::SetScale(temp0);
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
PyvtkProp3D_SetScale_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkProp3D::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProp3D_SetScale_Methods[] = {
  {NULL, PyvtkProp3D_SetScale_s2, 1,
   (char*)"@O *d"},
  {NULL, PyvtkProp3D_SetScale_s3, 1,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProp3D_SetScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProp3D_SetScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProp3D_SetScale_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return NULL;
}



static PyObject *
PyvtkProp3D_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      tempr = op->vtkProp3D::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkLinearTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLinearTransform"))
    {
    if (ap.IsBound())
      {
      op->SetUserTransform(temp0);
      }
    else
      {
      op->vtkProp3D::SetUserTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkLinearTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserTransform();
      }
    else
      {
      tempr = op->vtkProp3D::GetUserTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_SetUserMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetUserMatrix(temp0);
      }
    else
      {
      op->vtkProp3D::SetUserMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetUserMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserMatrix();
      }
    else
      {
      tempr = op->vtkProp3D::GetUserMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->GetMatrix(temp0);
      }
    else
      {
      op->vtkProp3D::GetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_GetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double temp0[16];
  double save0[16];
  const int size0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetMatrix(temp0);
      }
    else
      {
      op->vtkProp3D::GetMatrix(temp0);
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
PyvtkProp3D_GetMatrix_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMatrix();
      }
    else
      {
      tempr = op->vtkProp3D::GetMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProp3D_GetMatrix_Methods[] = {
  {NULL, PyvtkProp3D_GetMatrix_s1, 1,
   (char*)"@O *vtkMatrix4x4"},
  {NULL, PyvtkProp3D_GetMatrix_s2, 1,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProp3D_GetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProp3D_GetMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkProp3D_GetMatrix_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrix");
  return NULL;
}



static PyObject *
PyvtkProp3D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkProp3D::GetBounds(temp0);
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
PyvtkProp3D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetBounds();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkProp3D_GetBounds_s1(self, args);
    case 0:
      return PyvtkProp3D_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkProp3D_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      tempr = op->vtkProp3D::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetXRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXRange();
      }
    else
      {
      tempr = op->vtkProp3D::GetXRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetYRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYRange();
      }
    else
      {
      tempr = op->vtkProp3D::GetYRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetZRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZRange();
      }
    else
      {
      tempr = op->vtkProp3D::GetZRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLength();
      }
    else
      {
      tempr = op->vtkProp3D::GetLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_RotateX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateX(temp0);
      }
    else
      {
      op->vtkProp3D::RotateX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_RotateY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateY(temp0);
      }
    else
      {
      op->vtkProp3D::RotateY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_RotateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RotateZ(temp0);
      }
    else
      {
      op->vtkProp3D::RotateZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_RotateWXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->RotateWXYZ(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkProp3D::RotateWXYZ(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_SetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProp3D::SetOrientation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_SetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkProp3D::SetOrientation(temp0);
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
PyvtkProp3D_SetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProp3D_SetOrientation_s1(self, args);
    case 1:
      return PyvtkProp3D_SetOrientation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientation");
  return NULL;
}



static PyObject *
PyvtkProp3D_GetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientation();
      }
    else
      {
      tempr = op->vtkProp3D::GetOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_GetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->GetOrientation(temp0);
      }
    else
      {
      op->vtkProp3D::GetOrientation(temp0);
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
PyvtkProp3D_GetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkProp3D_GetOrientation_s1(self, args);
    case 1:
      return PyvtkProp3D_GetOrientation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrientation");
  return NULL;
}



static PyObject *
PyvtkProp3D_GetOrientationWXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationWXYZ();
      }
    else
      {
      tempr = op->vtkProp3D::GetOrientationWXYZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_AddOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->AddOrientation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProp3D::AddOrientation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProp3D_AddOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->AddOrientation(temp0);
      }
    else
      {
      op->vtkProp3D::AddOrientation(temp0);
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
PyvtkProp3D_AddOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProp3D_AddOrientation_s1(self, args);
    case 1:
      return PyvtkProp3D_AddOrientation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddOrientation");
  return NULL;
}



static PyObject *
PyvtkProp3D_PokeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PokeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->PokeMatrix(temp0);
      }
    else
      {
      op->vtkProp3D::PokeMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitPathTraversal();
      }
    else
      {
      op->vtkProp3D::InitPathTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkProp3D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetUserTransformMatrixMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserTransformMatrixMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserTransformMatrixMTime();
      }
    else
      {
      tempr = op->vtkProp3D::GetUserTransformMatrixMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_ComputeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMatrix();
      }
    else
      {
      op->vtkProp3D::ComputeMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3D_GetIsIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsIdentity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIsIdentity();
      }
    else
      {
      tempr = op->vtkProp3D::GetIsIdentity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProp3D_Methods[] = {
  {(char*)"GetClassName", PyvtkProp3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProp3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProp3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProp3D\nC++: vtkProp3D *NewInstance()\n\n"},
  {(char*)"ShallowCopy", PyvtkProp3D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of this vtkProp3D.\n"},
  {(char*)"SetPosition", PyvtkProp3D_SetPosition, 1,
   (char*)"V.SetPosition(float, float, float)\nC++: virtual void SetPosition(double _arg1, double _arg2,\n    double _arg3)\nV.SetPosition([float, float, float])\nC++: virtual void SetPosition(double _arg[3])\n\nSet/Get/Add the position of the Prop3D in world coordinates.\n"},
  {(char*)"GetPosition", PyvtkProp3D_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nSet/Get/Add the position of the Prop3D in world coordinates.\n"},
  {(char*)"AddPosition", PyvtkProp3D_AddPosition, 1,
   (char*)"V.AddPosition([float, float, float])\nC++: void AddPosition(double deltaPosition[3])\nV.AddPosition(float, float, float)\nC++: void AddPosition(double deltaX, double deltaY, double deltaZ)\n\nSet/Get/Add the position of the Prop3D in world coordinates.\n"},
  {(char*)"SetOrigin", PyvtkProp3D_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nV.SetOrigin([float, float, float])\nC++: virtual void SetOrigin(double _arg[3])\n\nSet/Get the origin of the Prop3D. This is the point about which\nall rotations take place.\n"},
  {(char*)"GetOrigin", PyvtkProp3D_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSet/Get the origin of the Prop3D. This is the point about which\nall rotations take place.\n"},
  {(char*)"SetScale", PyvtkProp3D_SetScale, 1,
   (char*)"V.SetScale(float, float, float)\nC++: virtual void SetScale(double _arg1, double _arg2,\n    double _arg3)\nV.SetScale([float, float, float])\nC++: virtual void SetScale(double _arg[3])\nV.SetScale(float)\nC++: void SetScale(double s)\n\nSet/Get the scale of the actor. Scaling in performed\nindependently on the X, Y and Z axis. A scale of zero is illegal\nand will be replaced with one.\n"},
  {(char*)"GetScale", PyvtkProp3D_GetScale, 1,
   (char*)"V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nSet/Get the scale of the actor. Scaling in performed\nindependently on the X, Y and Z axis. A scale of zero is illegal\nand will be replaced with one.\n"},
  {(char*)"SetUserTransform", PyvtkProp3D_SetUserTransform, 1,
   (char*)"V.SetUserTransform(vtkLinearTransform)\nC++: void SetUserTransform(vtkLinearTransform *transform)\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use.  This transformation is concatenated with the actor's\ninternal transformation, which you implicitly create through the\nuse of SetPosition(), SetOrigin() and SetOrientation().\n\nIf the internal transformation is identity (i.e. if you don't set\nthe Position, Origin, or Orientation) then the actors final\ntransformation will be the UserTransform, concatenated with the\nUserMatrix if the UserMatrix is present.\n"},
  {(char*)"GetUserTransform", PyvtkProp3D_GetUserTransform, 1,
   (char*)"V.GetUserTransform() -> vtkLinearTransform\nC++: vtkLinearTransform *GetUserTransform()\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use.  This transformation is concatenated with the actor's\ninternal transformation, which you implicitly create through the\nuse of SetPosition(), SetOrigin() and SetOrientation().\n\nIf the internal transformation is identity (i.e. if you don't set\nthe Position, Origin, or Orientation) then the actors final\ntransformation will be the UserTransform, concatenated with the\nUserMatrix if the UserMatrix is present.\n"},
  {(char*)"SetUserMatrix", PyvtkProp3D_SetUserMatrix, 1,
   (char*)"V.SetUserMatrix(vtkMatrix4x4)\nC++: void SetUserMatrix(vtkMatrix4x4 *matrix)\n\nThe UserMatrix can be used in place of UserTransform.\n"},
  {(char*)"GetUserMatrix", PyvtkProp3D_GetUserMatrix, 1,
   (char*)"V.GetUserMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetUserMatrix()\n\nThe UserMatrix can be used in place of UserTransform.\n"},
  {(char*)"GetMatrix", PyvtkProp3D_GetMatrix, 1,
   (char*)"V.GetMatrix(vtkMatrix4x4)\nC++: virtual void GetMatrix(vtkMatrix4x4 *m)\nV.GetMatrix([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float])\nC++: virtual void GetMatrix(double m[16])\nV.GetMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMatrix()\n\nReturn a reference to the Prop3D's 4x4 composite matrix. Get the\nmatrix from the position, origin, scale and orientation This\nmatrix is cached, so multiple GetMatrix() calls will be\nefficient.\n"},
  {(char*)"GetBounds", PyvtkProp3D_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nGet the bounds for this Prop3D as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"GetCenter", PyvtkProp3D_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nGet the center of the bounding box in world coordinates.\n"},
  {(char*)"GetXRange", PyvtkProp3D_GetXRange, 1,
   (char*)"V.GetXRange() -> (float, float)\nC++: double *GetXRange()\n\nGet the Prop3D's x range in world coordinates.\n"},
  {(char*)"GetYRange", PyvtkProp3D_GetYRange, 1,
   (char*)"V.GetYRange() -> (float, float)\nC++: double *GetYRange()\n\nGet the Prop3D's y range in world coordinates.\n"},
  {(char*)"GetZRange", PyvtkProp3D_GetZRange, 1,
   (char*)"V.GetZRange() -> (float, float)\nC++: double *GetZRange()\n\nGet the Prop3D's z range in world coordinates.\n"},
  {(char*)"GetLength", PyvtkProp3D_GetLength, 1,
   (char*)"V.GetLength() -> float\nC++: double GetLength()\n\nGet the length of the diagonal of the bounding box.\n"},
  {(char*)"RotateX", PyvtkProp3D_RotateX, 1,
   (char*)"V.RotateX(float)\nC++: void RotateX(double)\n\nRotate the Prop3D in degrees about the X axis using the right\nhand rule. The axis is the Prop3D's X axis, which can change as\nother rotations are performed.  To rotate about the world X axis\nuse RotateWXYZ (angle, 1, 0, 0). This rotation is applied before\nall others in the current transformation matrix.\n"},
  {(char*)"RotateY", PyvtkProp3D_RotateY, 1,
   (char*)"V.RotateY(float)\nC++: void RotateY(double)\n\nRotate the Prop3D in degrees about the Y axis using the right\nhand rule. The axis is the Prop3D's Y axis, which can change as\nother rotations are performed.  To rotate about the world Y axis\nuse RotateWXYZ (angle, 0, 1, 0). This rotation is applied before\nall others in the current transformation matrix.\n"},
  {(char*)"RotateZ", PyvtkProp3D_RotateZ, 1,
   (char*)"V.RotateZ(float)\nC++: void RotateZ(double)\n\nRotate the Prop3D in degrees about the Z axis using the right\nhand rule. The axis is the Prop3D's Z axis, which can change as\nother rotations are performed.  To rotate about the world Z axis\nuse RotateWXYZ (angle, 0, 0, 1). This rotation is applied before\nall others in the current transformation matrix.\n"},
  {(char*)"RotateWXYZ", PyvtkProp3D_RotateWXYZ, 1,
   (char*)"V.RotateWXYZ(float, float, float, float)\nC++: void RotateWXYZ(double, double, double, double)\n\nRotate the Prop3D in degrees about an arbitrary axis specified by\nthe last three arguments. The axis is specified in world\ncoordinates. To rotate an about its model axes, use RotateX,\nRotateY, RotateZ.\n"},
  {(char*)"SetOrientation", PyvtkProp3D_SetOrientation, 1,
   (char*)"V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\nV.SetOrientation([float, float, float])\nC++: void SetOrientation(double a[3])\n\nSets the orientation of the Prop3D.  Orientation is specified as\nX,Y and Z rotations in that order, but they are performed as\nRotateZ, RotateX, and finally RotateY.\n"},
  {(char*)"GetOrientation", PyvtkProp3D_GetOrientation, 1,
   (char*)"V.GetOrientation() -> (float, float, float)\nC++: double *GetOrientation()\nV.GetOrientation([float, float, float])\nC++: void GetOrientation(double o[3])\n\nReturns the orientation of the Prop3D as s vector of X,Y and Z\nrotation. The ordering in which these rotations must be done to\ngenerate the same matrix is RotateZ, RotateX, and finally\nRotateY. See also SetOrientation.\n"},
  {(char*)"GetOrientationWXYZ", PyvtkProp3D_GetOrientationWXYZ, 1,
   (char*)"V.GetOrientationWXYZ() -> (float, float, float, float)\nC++: double *GetOrientationWXYZ()\n\nReturns the WXYZ orientation of the Prop3D.\n"},
  {(char*)"AddOrientation", PyvtkProp3D_AddOrientation, 1,
   (char*)"V.AddOrientation(float, float, float)\nC++: void AddOrientation(double, double, double)\nV.AddOrientation([float, float, float])\nC++: void AddOrientation(double a[3])\n\nAdd to the current orientation. See SetOrientation and\nGetOrientation for more details. This basically does a\nGetOrientation, adds the passed in arguments, and then calls\nSetOrientation.\n"},
  {(char*)"PokeMatrix", PyvtkProp3D_PokeMatrix, 1,
   (char*)"V.PokeMatrix(vtkMatrix4x4)\nC++: void PokeMatrix(vtkMatrix4x4 *matrix)\n\nThis method modifies the vtkProp3D so that its transformation\nstate is set to the matrix specified. The method does this by\nsetting appropriate transformation-related ivars to initial\nvalues (i.e., not transformed), and placing the user-supplied\nmatrix into the UserMatrix of this vtkProp3D. If the method is\ncalled again with a NULL matrix, then the original state of the\nvtkProp3D will be restored. This method is used to support\npicking and assembly structures.\n"},
  {(char*)"InitPathTraversal", PyvtkProp3D_InitPathTraversal, 1,
   (char*)"V.InitPathTraversal()\nC++: void InitPathTraversal()\n\nOverload vtkProp's method for setting up assembly paths. See the\ndocumentation for vtkProp.\n"},
  {(char*)"GetMTime", PyvtkProp3D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the vtkProp3D's mtime\n"},
  {(char*)"GetUserTransformMatrixMTime", PyvtkProp3D_GetUserTransformMatrixMTime, 1,
   (char*)"V.GetUserTransformMatrixMTime() -> int\nC++: unsigned long GetUserTransformMatrixMTime()\n\nGet the modified time of the user matrix or user transform.\n"},
  {(char*)"ComputeMatrix", PyvtkProp3D_ComputeMatrix, 1,
   (char*)"V.ComputeMatrix()\nC++: virtual void ComputeMatrix()\n\nGenerate the matrix based on ivars\n"},
  {(char*)"GetIsIdentity", PyvtkProp3D_GetIsIdentity, 1,
   (char*)"V.GetIsIdentity() -> int\nC++: int GetIsIdentity()\n\nIs the matrix for this actor identity\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkProp3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkProp3D_Methods,
    "vtkProp3D", modulename,
    NULL, NULL,
    PyvtkProp3D_Doc(),
    PyVTKClass_vtkPropNew(modulename));
  return cls;
}

const char **PyvtkProp3D_Doc()
{
  static const char *docstring[] = {
    "vtkProp3D - represents an 3D object for placement in a rendered scene \n\n",
    "Superclass: vtkProp\n\n",
    "vtkProp3D is an abstract class used to represent an entity in a\nrendering scene (i.e., vtkProp3D is a vtkProp with an associated\ntransformation matrix).  It handles functions related to the\nposition, orientation and scaling. It combines these instance\nvariables into one 4x4 transformation matrix as follows: [x y z 1] =\n[x y z 1] Translate(-origin) Scale(scale) Rot(y) Rot(x) Rot (z)\nTrans(origin) T",
    "rans(position). Both vtkActor and vtkVolume are\nspecializations of class vtkProp.  The constructor defaults to:\norigin(0,0,0) position=(0,0,0) orientation=(0,0,0), no user defined\nmatrix or transform, and no texture map.\n\nSee Also:\n\nvtkProp vtkActor vtkAssembly vtkVolume\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProp3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProp3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProp3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

