// python wrapper for vtkLODProp3D
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
#include "vtkLODProp3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLODProp3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLODProp3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLODProp3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLODProp3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkLODProp3D_Doc();


static PyObject *
PyvtkLODProp3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

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
      tempr = op->vtkLODProp3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

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
      tempr = op->vtkLODProp3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkLODProp3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLODProp3D::NewInstance();
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
PyvtkLODProp3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLODProp3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLODProp3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

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
      op->vtkLODProp3D::GetBounds(temp0);
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
PyvtkLODProp3D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLODProp3D_GetBounds_s1(self, args);
    case 1:
      return PyvtkLODProp3D_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkLODProp3D_AddLOD_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = NULL;
  vtkProperty *temp1 = NULL;
  vtkProperty *temp2 = NULL;
  vtkTexture *temp3 = NULL;
  double temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkProperty") &&
      ap.GetVTKObject(temp2, "vtkProperty") &&
      ap.GetVTKObject(temp3, "vtkTexture") &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLOD(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkLODProp3D::AddLOD(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = NULL;
  vtkProperty *temp1 = NULL;
  vtkTexture *temp2 = NULL;
  double temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkProperty") &&
      ap.GetVTKObject(temp2, "vtkTexture") &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLOD(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkLODProp3D::AddLOD(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = NULL;
  vtkProperty *temp1 = NULL;
  vtkProperty *temp2 = NULL;
  double temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkProperty") &&
      ap.GetVTKObject(temp2, "vtkProperty") &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLOD(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkLODProp3D::AddLOD(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = NULL;
  vtkProperty *temp1 = NULL;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkProperty") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLOD(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkLODProp3D::AddLOD(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = NULL;
  vtkTexture *temp1 = NULL;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkTexture") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLOD(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkLODProp3D::AddLOD(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkMapper *temp0 = NULL;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLOD(temp0, temp1);
      }
    else
      {
      tempr = op->vtkLODProp3D::AddLOD(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkAbstractVolumeMapper *temp0 = NULL;
  vtkVolumeProperty *temp1 = NULL;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLOD(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkLODProp3D::AddLOD(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_AddLOD_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkAbstractVolumeMapper *temp0 = NULL;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->AddLOD(temp0, temp1);
      }
    else
      {
      tempr = op->vtkLODProp3D::AddLOD(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLODProp3D_AddLOD_Methods[] = {
  {NULL, PyvtkLODProp3D_AddLOD_s2, 1,
   (char*)"@OOOd *vtkMapper *vtkProperty *vtkTexture"},
  {NULL, PyvtkLODProp3D_AddLOD_s3, 1,
   (char*)"@OOOd *vtkMapper *vtkProperty *vtkProperty"},
  {NULL, PyvtkLODProp3D_AddLOD_s4, 1,
   (char*)"@OOd *vtkMapper *vtkProperty"},
  {NULL, PyvtkLODProp3D_AddLOD_s5, 1,
   (char*)"@OOd *vtkMapper *vtkTexture"},
  {NULL, PyvtkLODProp3D_AddLOD_s6, 1,
   (char*)"@Od *vtkMapper"},
  {NULL, PyvtkLODProp3D_AddLOD_s7, 1,
   (char*)"@OOd *vtkAbstractVolumeMapper *vtkVolumeProperty"},
  {NULL, PyvtkLODProp3D_AddLOD_s8, 1,
   (char*)"@Od *vtkAbstractVolumeMapper"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLODProp3D_AddLOD(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLODProp3D_AddLOD_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkLODProp3D_AddLOD_s1(self, args);
    case 2:
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddLOD");
  return NULL;
}



static PyObject *
PyvtkLODProp3D_GetNumberOfLODs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLODs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLODs();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetNumberOfLODs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetCurrentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentIndex();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetCurrentIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_RemoveLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveLOD(temp0);
      }
    else
      {
      op->vtkLODProp3D::RemoveLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetLODProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkProperty *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLODProperty(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::SetLODProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_SetLODProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkVolumeProperty *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLODProperty(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::SetLODProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLODProp3D_SetLODProperty_Methods[] = {
  {NULL, PyvtkLODProp3D_SetLODProperty_s1, 1,
   (char*)"@iO *vtkProperty"},
  {NULL, PyvtkLODProp3D_SetLODProperty_s2, 1,
   (char*)"@iO *vtkVolumeProperty"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLODProp3D_SetLODProperty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLODProp3D_SetLODProperty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLODProperty");
  return NULL;
}



static PyObject *
PyvtkLODProp3D_SetLODMapper_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkMapper *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->SetLODMapper(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::SetLODMapper(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLODProp3D_SetLODMapper_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkAbstractVolumeMapper *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractVolumeMapper"))
    {
    if (ap.IsBound())
      {
      op->SetLODMapper(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::SetLODMapper(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLODProp3D_SetLODMapper_Methods[] = {
  {NULL, PyvtkLODProp3D_SetLODMapper_s1, 1,
   (char*)"@iO *vtkMapper"},
  {NULL, PyvtkLODProp3D_SetLODMapper_s2, 1,
   (char*)"@iO *vtkAbstractVolumeMapper"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLODProp3D_SetLODMapper(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLODProp3D_SetLODMapper_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLODMapper");
  return NULL;
}



static PyObject *
PyvtkLODProp3D_GetLODMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkAbstractMapper3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLODMapper(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::GetLODMapper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetLODBackfaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODBackfaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkProperty *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLODBackfaceProperty(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::SetLODBackfaceProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetLODTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  vtkTexture *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetLODTexture(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::SetLODTexture(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_EnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableLOD(temp0);
      }
    else
      {
      op->vtkLODProp3D::EnableLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_DisableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisableLOD(temp0);
      }
    else
      {
      op->vtkLODProp3D::DisableLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_IsLODEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLODEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLODEnabled(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::IsLODEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetLODLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLODLevel(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::SetLODLevel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLODLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLODLevel(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::GetLODLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLODIndexLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODIndexLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLODIndexLevel(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::GetLODIndexLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLODEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLODEstimatedRenderTime(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::GetLODEstimatedRenderTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLODIndexEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODIndexEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLODIndexEstimatedRenderTime(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::GetLODIndexEstimatedRenderTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetAutomaticLODSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticLODSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticLODSelection(temp0);
      }
    else
      {
      op->vtkLODProp3D::SetAutomaticLODSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticLODSelectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLODSelectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticLODSelectionMinValue();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetAutomaticLODSelectionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticLODSelectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLODSelectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticLODSelectionMaxValue();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetAutomaticLODSelectionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticLODSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLODSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticLODSelection();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetAutomaticLODSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_AutomaticLODSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLODSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticLODSelectionOn();
      }
    else
      {
      op->vtkLODProp3D::AutomaticLODSelectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_AutomaticLODSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLODSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticLODSelectionOff();
      }
    else
      {
      op->vtkLODProp3D::AutomaticLODSelectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetSelectedLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedLODID(temp0);
      }
    else
      {
      op->vtkLODProp3D::SetSelectedLODID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetSelectedLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedLODID();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetSelectedLODID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetLastRenderedLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderedLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastRenderedLODID();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetLastRenderedLODID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetPickLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickLODID();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetPickLODID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkLODProp3D::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetVolumes(temp0);
      }
    else
      {
      op->vtkLODProp3D::GetVolumes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetSelectedPickLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPickLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedPickLODID(temp0);
      }
    else
      {
      op->vtkLODProp3D::SetSelectedPickLODID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetSelectedPickLODID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPickLODID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedPickLODID();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetSelectedPickLODID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetAutomaticPickLODSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticPickLODSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticPickLODSelection(temp0);
      }
    else
      {
      op->vtkLODProp3D::SetAutomaticPickLODSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticPickLODSelectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPickLODSelectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticPickLODSelectionMinValue();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetAutomaticPickLODSelectionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticPickLODSelectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPickLODSelectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticPickLODSelectionMaxValue();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetAutomaticPickLODSelectionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_GetAutomaticPickLODSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPickLODSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticPickLODSelection();
      }
    else
      {
      tempr = op->vtkLODProp3D::GetAutomaticPickLODSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_AutomaticPickLODSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPickLODSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticPickLODSelectionOn();
      }
    else
      {
      op->vtkLODProp3D::AutomaticPickLODSelectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_AutomaticPickLODSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPickLODSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticPickLODSelectionOff();
      }
    else
      {
      op->vtkLODProp3D::AutomaticPickLODSelectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

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
      op->vtkLODProp3D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderVolumetricGeometry(temp0);
      }
    else
      {
      tempr = op->vtkLODProp3D::RenderVolumetricGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkLODProp3D::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkLODProp3D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_SetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  double temp0;
  vtkViewport *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetAllocatedRenderTime(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::SetAllocatedRenderTime(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_RestoreEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestoreEstimatedRenderTime();
      }
    else
      {
      op->vtkLODProp3D::RestoreEstimatedRenderTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLODProp3D_AddEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODProp3D *op = static_cast<vtkLODProp3D *>(vp);

  double temp0;
  vtkViewport *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->AddEstimatedRenderTime(temp0, temp1);
      }
    else
      {
      op->vtkLODProp3D::AddEstimatedRenderTime(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLODProp3D_Methods[] = {
  {(char*)"GetClassName", PyvtkLODProp3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLODProp3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLODProp3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLODProp3D\nC++: vtkLODProp3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLODProp3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLODProp3D\nC++: vtkLODProp3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkLODProp3D_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nStandard vtkProp method to get 3D bounds of a 3D prop\n"},
  {(char*)"AddLOD", PyvtkLODProp3D_AddLOD, 1,
   (char*)"V.AddLOD(vtkMapper, vtkProperty, vtkProperty, vtkTexture, float)\n    -> int\nC++: int AddLOD(vtkMapper *m, vtkProperty *p, vtkProperty *back,\n    vtkTexture *t, double time)\nV.AddLOD(vtkMapper, vtkProperty, vtkTexture, float) -> int\nC++: int AddLOD(vtkMapper *m, vtkProperty *p, vtkTexture *t,\n    double time)\nV.AddLOD(vtkMapper, vtkProperty, vtkProperty, float) -> int\nC++: int AddLOD(vtkMapper *m, vtkProperty *p, vtkProperty *back,\n    double time)\nV.AddLOD(vtkMapper, vtkProperty, float) -> int\nC++: int AddLOD(vtkMapper *m, vtkProperty *p, double time)\nV.AddLOD(vtkMapper, vtkTexture, float) -> int\nC++: int AddLOD(vtkMapper *m, vtkTexture *t, double time)\nV.AddLOD(vtkMapper, float) -> int\nC++: int AddLOD(vtkMapper *m, double time)\nV.AddLOD(vtkAbstractVolumeMapper, vtkVolumeProperty, float) -> int\nC++: int AddLOD(vtkAbstractVolumeMapper *m, vtkVolumeProperty *p,\n    double time)\nV.AddLOD(vtkAbstractVolumeMapper, float) -> int\nC++: int AddLOD(vtkAbstractVolumeMapper *m, double time)\n\nAdd a level of detail with a given mapper, property, backface\nproperty, texture, and guess of rendering time.  The property and\ntexture fields can be set to NULL (the other methods are included\nfor script access where null variables are not allowed). The time\nfield can be set to 0.0 indicating that no initial guess for\nrendering time is being supplied. The returned integer value is\nan ID that can be used later to delete this LOD, or set it as the\nselected LOD.\n"},
  {(char*)"GetNumberOfLODs", PyvtkLODProp3D_GetNumberOfLODs, 1,
   (char*)"V.GetNumberOfLODs() -> int\nC++: int GetNumberOfLODs()\n\nGet the current number of LODs.\n"},
  {(char*)"GetCurrentIndex", PyvtkLODProp3D_GetCurrentIndex, 1,
   (char*)"V.GetCurrentIndex() -> int\nC++: int GetCurrentIndex()\n\nGet the current index, used to determine the ID of the next LOD\nthat is added.  Useful for guessing what IDs have been used (with\nNumberOfLODs, without depending on the constructor initialization\nto 1000.\n"},
  {(char*)"RemoveLOD", PyvtkLODProp3D_RemoveLOD, 1,
   (char*)"V.RemoveLOD(int)\nC++: void RemoveLOD(int id)\n\nDelete a level of detail given an ID. This is the ID returned by\nthe AddLOD method\n"},
  {(char*)"SetLODProperty", PyvtkLODProp3D_SetLODProperty, 1,
   (char*)"V.SetLODProperty(int, vtkProperty)\nC++: void SetLODProperty(int id, vtkProperty *p)\nV.SetLODProperty(int, vtkVolumeProperty)\nC++: void SetLODProperty(int id, vtkVolumeProperty *p)\n\nMethods to set / get the property of an LOD. Since the LOD could\nbe a volume or an actor, you have to pass in the pointer to the\nproperty to get it. The returned property will be NULL if the id\nis not valid, or the property is of the wrong type for the\ncorresponding Prop3D.\n"},
  {(char*)"SetLODMapper", PyvtkLODProp3D_SetLODMapper, 1,
   (char*)"V.SetLODMapper(int, vtkMapper)\nC++: void SetLODMapper(int id, vtkMapper *m)\nV.SetLODMapper(int, vtkAbstractVolumeMapper)\nC++: void SetLODMapper(int id, vtkAbstractVolumeMapper *m)\n\nMethods to set / get the mapper of an LOD. Since the LOD could be\na volume or an actor, you have to pass in the pointer to the\nmapper to get it. The returned mapper will be NULL if the id is\nnot valid, or the mapper is of the wrong type for the\ncorresponding Prop3D.\n"},
  {(char*)"GetLODMapper", PyvtkLODProp3D_GetLODMapper, 1,
   (char*)"V.GetLODMapper(int) -> vtkAbstractMapper3D\nC++: vtkAbstractMapper3D *GetLODMapper(int id)\n\nGet the LODMapper as an vtkAbstractMapper3D.  It is the user's\nrespondibility to safe down cast this to a vtkMapper or\nvtkVolumeMapper as appropriate.\n"},
  {(char*)"SetLODBackfaceProperty", PyvtkLODProp3D_SetLODBackfaceProperty, 1,
   (char*)"V.SetLODBackfaceProperty(int, vtkProperty)\nC++: void SetLODBackfaceProperty(int id, vtkProperty *t)\n\nMethods to set / get the backface property of an LOD. This method\nis only valid for LOD ids that are Actors (not Volumes)\n"},
  {(char*)"SetLODTexture", PyvtkLODProp3D_SetLODTexture, 1,
   (char*)"V.SetLODTexture(int, vtkTexture)\nC++: void SetLODTexture(int id, vtkTexture *t)\n\nMethods to set / get the texture of an LOD. This method is only\nvalid for LOD ids that are Actors (not Volumes)\n"},
  {(char*)"EnableLOD", PyvtkLODProp3D_EnableLOD, 1,
   (char*)"V.EnableLOD(int)\nC++: void EnableLOD(int id)\n\nEnable / disable a particular LOD. If it is disabled, it will not\nbe used during automatic selection, but can be selected as the\nLOD if automatic LOD selection is off.\n"},
  {(char*)"DisableLOD", PyvtkLODProp3D_DisableLOD, 1,
   (char*)"V.DisableLOD(int)\nC++: void DisableLOD(int id)\n\nEnable / disable a particular LOD. If it is disabled, it will not\nbe used during automatic selection, but can be selected as the\nLOD if automatic LOD selection is off.\n"},
  {(char*)"IsLODEnabled", PyvtkLODProp3D_IsLODEnabled, 1,
   (char*)"V.IsLODEnabled(int) -> int\nC++: int IsLODEnabled(int id)\n\nEnable / disable a particular LOD. If it is disabled, it will not\nbe used during automatic selection, but can be selected as the\nLOD if automatic LOD selection is off.\n"},
  {(char*)"SetLODLevel", PyvtkLODProp3D_SetLODLevel, 1,
   (char*)"V.SetLODLevel(int, float)\nC++: void SetLODLevel(int id, double level)\n\nSet the level of a particular LOD. When a LOD is selected for\nrendering because it has the largest render time that fits within\nthe allocated time, all LOD are then checked to see if any one\ncan render faster but has a lower (more resolution/better) level.\nThis quantity is a double to ensure that a level can be inserted\nbetween 2 and 3.\n"},
  {(char*)"GetLODLevel", PyvtkLODProp3D_GetLODLevel, 1,
   (char*)"V.GetLODLevel(int) -> float\nC++: double GetLODLevel(int id)\n\nSet the level of a particular LOD. When a LOD is selected for\nrendering because it has the largest render time that fits within\nthe allocated time, all LOD are then checked to see if any one\ncan render faster but has a lower (more resolution/better) level.\nThis quantity is a double to ensure that a level can be inserted\nbetween 2 and 3.\n"},
  {(char*)"GetLODIndexLevel", PyvtkLODProp3D_GetLODIndexLevel, 1,
   (char*)"V.GetLODIndexLevel(int) -> float\nC++: double GetLODIndexLevel(int index)\n\nSet the level of a particular LOD. When a LOD is selected for\nrendering because it has the largest render time that fits within\nthe allocated time, all LOD are then checked to see if any one\ncan render faster but has a lower (more resolution/better) level.\nThis quantity is a double to ensure that a level can be inserted\nbetween 2 and 3.\n"},
  {(char*)"GetLODEstimatedRenderTime", PyvtkLODProp3D_GetLODEstimatedRenderTime, 1,
   (char*)"V.GetLODEstimatedRenderTime(int) -> float\nC++: double GetLODEstimatedRenderTime(int id)\n\nAccess method that can be used to find out the estimated render\ntime (the thing used to select an LOD) for a given LOD ID or\nindex. Value is returned in seconds.\n"},
  {(char*)"GetLODIndexEstimatedRenderTime", PyvtkLODProp3D_GetLODIndexEstimatedRenderTime, 1,
   (char*)"V.GetLODIndexEstimatedRenderTime(int) -> float\nC++: double GetLODIndexEstimatedRenderTime(int index)\n\nAccess method that can be used to find out the estimated render\ntime (the thing used to select an LOD) for a given LOD ID or\nindex. Value is returned in seconds.\n"},
  {(char*)"SetAutomaticLODSelection", PyvtkLODProp3D_SetAutomaticLODSelection, 1,
   (char*)"V.SetAutomaticLODSelection(int)\nC++: void SetAutomaticLODSelection(int)\n\nTurn on / off automatic selection of LOD. This is on by default.\nIf it is off, then the SelectedLODID is rendered regardless of\nrendering time or desired update rate.\n"},
  {(char*)"GetAutomaticLODSelectionMinValue", PyvtkLODProp3D_GetAutomaticLODSelectionMinValue, 1,
   (char*)"V.GetAutomaticLODSelectionMinValue() -> int\nC++: int GetAutomaticLODSelectionMinValue()\n\nTurn on / off automatic selection of LOD. This is on by default.\nIf it is off, then the SelectedLODID is rendered regardless of\nrendering time or desired update rate.\n"},
  {(char*)"GetAutomaticLODSelectionMaxValue", PyvtkLODProp3D_GetAutomaticLODSelectionMaxValue, 1,
   (char*)"V.GetAutomaticLODSelectionMaxValue() -> int\nC++: int GetAutomaticLODSelectionMaxValue()\n\nTurn on / off automatic selection of LOD. This is on by default.\nIf it is off, then the SelectedLODID is rendered regardless of\nrendering time or desired update rate.\n"},
  {(char*)"GetAutomaticLODSelection", PyvtkLODProp3D_GetAutomaticLODSelection, 1,
   (char*)"V.GetAutomaticLODSelection() -> int\nC++: int GetAutomaticLODSelection()\n\nTurn on / off automatic selection of LOD. This is on by default.\nIf it is off, then the SelectedLODID is rendered regardless of\nrendering time or desired update rate.\n"},
  {(char*)"AutomaticLODSelectionOn", PyvtkLODProp3D_AutomaticLODSelectionOn, 1,
   (char*)"V.AutomaticLODSelectionOn()\nC++: void AutomaticLODSelectionOn()\n\nTurn on / off automatic selection of LOD. This is on by default.\nIf it is off, then the SelectedLODID is rendered regardless of\nrendering time or desired update rate.\n"},
  {(char*)"AutomaticLODSelectionOff", PyvtkLODProp3D_AutomaticLODSelectionOff, 1,
   (char*)"V.AutomaticLODSelectionOff()\nC++: void AutomaticLODSelectionOff()\n\nTurn on / off automatic selection of LOD. This is on by default.\nIf it is off, then the SelectedLODID is rendered regardless of\nrendering time or desired update rate.\n"},
  {(char*)"SetSelectedLODID", PyvtkLODProp3D_SetSelectedLODID, 1,
   (char*)"V.SetSelectedLODID(int)\nC++: void SetSelectedLODID(int a)\n\nSet the id of the LOD that is to be drawn when automatic LOD\nselection is turned off.\n"},
  {(char*)"GetSelectedLODID", PyvtkLODProp3D_GetSelectedLODID, 1,
   (char*)"V.GetSelectedLODID() -> int\nC++: int GetSelectedLODID()\n\nSet the id of the LOD that is to be drawn when automatic LOD\nselection is turned off.\n"},
  {(char*)"GetLastRenderedLODID", PyvtkLODProp3D_GetLastRenderedLODID, 1,
   (char*)"V.GetLastRenderedLODID() -> int\nC++: int GetLastRenderedLODID()\n\nGet the ID of the previously (during the last render) selected\nLOD index\n"},
  {(char*)"GetPickLODID", PyvtkLODProp3D_GetPickLODID, 1,
   (char*)"V.GetPickLODID() -> int\nC++: int GetPickLODID(void)\n\nGet the ID of the appropriate pick LOD index\n"},
  {(char*)"GetActors", PyvtkLODProp3D_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"GetVolumes", PyvtkLODProp3D_GetVolumes, 1,
   (char*)"V.GetVolumes(vtkPropCollection)\nC++: virtual void GetVolumes(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {(char*)"SetSelectedPickLODID", PyvtkLODProp3D_SetSelectedPickLODID, 1,
   (char*)"V.SetSelectedPickLODID(int)\nC++: void SetSelectedPickLODID(int id)\n\nSet the id of the LOD that is to be used for picking when \nautomatic LOD pick selection is turned off.\n"},
  {(char*)"GetSelectedPickLODID", PyvtkLODProp3D_GetSelectedPickLODID, 1,
   (char*)"V.GetSelectedPickLODID() -> int\nC++: int GetSelectedPickLODID()\n\nSet the id of the LOD that is to be used for picking when \nautomatic LOD pick selection is turned off.\n"},
  {(char*)"SetAutomaticPickLODSelection", PyvtkLODProp3D_SetAutomaticPickLODSelection, 1,
   (char*)"V.SetAutomaticPickLODSelection(int)\nC++: void SetAutomaticPickLODSelection(int)\n\nTurn on / off automatic selection of picking LOD. This is on by\ndefault. If it is off, then the SelectedLODID is rendered\nregardless of rendering time or desired update rate.\n"},
  {(char*)"GetAutomaticPickLODSelectionMinValue", PyvtkLODProp3D_GetAutomaticPickLODSelectionMinValue, 1,
   (char*)"V.GetAutomaticPickLODSelectionMinValue() -> int\nC++: int GetAutomaticPickLODSelectionMinValue()\n\nTurn on / off automatic selection of picking LOD. This is on by\ndefault. If it is off, then the SelectedLODID is rendered\nregardless of rendering time or desired update rate.\n"},
  {(char*)"GetAutomaticPickLODSelectionMaxValue", PyvtkLODProp3D_GetAutomaticPickLODSelectionMaxValue, 1,
   (char*)"V.GetAutomaticPickLODSelectionMaxValue() -> int\nC++: int GetAutomaticPickLODSelectionMaxValue()\n\nTurn on / off automatic selection of picking LOD. This is on by\ndefault. If it is off, then the SelectedLODID is rendered\nregardless of rendering time or desired update rate.\n"},
  {(char*)"GetAutomaticPickLODSelection", PyvtkLODProp3D_GetAutomaticPickLODSelection, 1,
   (char*)"V.GetAutomaticPickLODSelection() -> int\nC++: int GetAutomaticPickLODSelection()\n\nTurn on / off automatic selection of picking LOD. This is on by\ndefault. If it is off, then the SelectedLODID is rendered\nregardless of rendering time or desired update rate.\n"},
  {(char*)"AutomaticPickLODSelectionOn", PyvtkLODProp3D_AutomaticPickLODSelectionOn, 1,
   (char*)"V.AutomaticPickLODSelectionOn()\nC++: void AutomaticPickLODSelectionOn()\n\nTurn on / off automatic selection of picking LOD. This is on by\ndefault. If it is off, then the SelectedLODID is rendered\nregardless of rendering time or desired update rate.\n"},
  {(char*)"AutomaticPickLODSelectionOff", PyvtkLODProp3D_AutomaticPickLODSelectionOff, 1,
   (char*)"V.AutomaticPickLODSelectionOff()\nC++: void AutomaticPickLODSelectionOff()\n\nTurn on / off automatic selection of picking LOD. This is on by\ndefault. If it is off, then the SelectedLODID is rendered\nregardless of rendering time or desired update rate.\n"},
  {(char*)"ShallowCopy", PyvtkLODProp3D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of this vtkLODProp3D.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLODProp3D_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkLODProp3D_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(\n    vtkViewport *ren)\n\nSupport the standard render methods.\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkLODProp3D_RenderVolumetricGeometry, 1,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *ren)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkLODProp3D_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLODProp3D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetAllocatedRenderTime", PyvtkLODProp3D_SetAllocatedRenderTime, 1,
   (char*)"V.SetAllocatedRenderTime(float, vtkViewport)\nC++: void SetAllocatedRenderTime(double t, vtkViewport *vp)\n\nUsed by the culler / renderer to set the allocated render time\nfor this prop. This is based on the desired update rate, and\npossibly some other properties such as potential screen coverage\nof this prop.\n"},
  {(char*)"RestoreEstimatedRenderTime", PyvtkLODProp3D_RestoreEstimatedRenderTime, 1,
   (char*)"V.RestoreEstimatedRenderTime()\nC++: void RestoreEstimatedRenderTime()\n\nUsed when the render process is aborted to restore the previous\nestimated render time. Overridden here to allow previous time for\na particular LOD to be restored - otherwise the time for the last\nrendered LOD will be copied into the currently selected LOD.\n"},
  {(char*)"AddEstimatedRenderTime", PyvtkLODProp3D_AddEstimatedRenderTime, 1,
   (char*)"V.AddEstimatedRenderTime(float, vtkViewport)\nC++: virtual void AddEstimatedRenderTime(double t,\n    vtkViewport *vp)\n\nOverride method from vtkProp in order to push this call down to\nthe selected LOD as well.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLODProp3D_StaticNew()
{
  return vtkLODProp3D::New();
}

PyObject *PyVTKClass_vtkLODProp3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLODProp3D_StaticNew,
    PyvtkLODProp3D_Methods,
    "vtkLODProp3D", modulename,
    NULL, NULL,
    PyvtkLODProp3D_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkLODProp3D_Doc()
{
  static const char *docstring[] = {
    "vtkLODProp3D - level of detail 3D prop\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkLODProp3D is a class to support level of detail rendering for\nProp3D. Any number of mapper/property/texture items can be added to\nthis object. Render time will be measured, and will be used to select\na LOD based on the AllocatedRenderTime of this Prop3D. Depending on\nthe type of the mapper/property, a vtkActor or a vtkVolume will be\ncreated behind the scenes.\n\nSee Also:\n\nvtkProp3D vtkActor vtkV",
    "olume vtkLODActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLODProp3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLODProp3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLODProp3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

