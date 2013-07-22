// python wrapper for vtkVolumeTextureMapper2D
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
#include "vtkVolumeTextureMapper2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeTextureMapper2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeTextureMapper2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeTextureMapper2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeTextureMapper2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVolumeTextureMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeTextureMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeTextureMapperNew
#endif

static const char **PyvtkVolumeTextureMapper2D_Doc();


static PyObject *
PyvtkVolumeTextureMapper2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

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
      tempr = op->vtkVolumeTextureMapper2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

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
      tempr = op->vtkVolumeTextureMapper2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  vtkVolumeTextureMapper2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper2D::NewInstance();
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
PyvtkVolumeTextureMapper2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumeTextureMapper2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumeTextureMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_SetTargetTextureSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTargetTextureSize(temp0, temp1);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::SetTargetTextureSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper2D_SetTargetTextureSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTargetTextureSize(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::SetTargetTextureSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper2D_SetTargetTextureSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeTextureMapper2D_SetTargetTextureSize_s1(self, args);
    case 1:
      return PyvtkVolumeTextureMapper2D_SetTargetTextureSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTargetTextureSize");
  return NULL;
}



static PyObject *
PyvtkVolumeTextureMapper2D_GetTargetTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetTextureSize();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper2D::GetTargetTextureSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_SetMaximumNumberOfPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPlanes(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::SetMaximumNumberOfPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetMaximumNumberOfPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfPlanes();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper2D::GetMaximumNumberOfPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_SetMaximumStorageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumStorageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumStorageSize(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::SetMaximumStorageSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetMaximumStorageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumStorageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumStorageSize();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper2D::GetMaximumStorageSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetInternalSkipFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSkipFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalSkipFactor();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper2D::GetInternalSkipFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetSaveTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSaveTextures();
      }
    else
      {
      tempr = op->vtkVolumeTextureMapper2D::GetSaveTextures();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeTextureMapper2D_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeTextureMapper2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeTextureMapper2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeTextureMapper2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeTextureMapper2D\nC++: vtkVolumeTextureMapper2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeTextureMapper2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeTextureMapper2D\nC++: vtkVolumeTextureMapper2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTargetTextureSize", PyvtkVolumeTextureMapper2D_SetTargetTextureSize, 1,
   (char*)"V.SetTargetTextureSize(int, int)\nC++: void SetTargetTextureSize(int, int)\nV.SetTargetTextureSize((int, int))\nC++: void SetTargetTextureSize(int a[2])\n\n"},
  {(char*)"GetTargetTextureSize", PyvtkVolumeTextureMapper2D_GetTargetTextureSize, 1,
   (char*)"V.GetTargetTextureSize() -> (int, int)\nC++: int *GetTargetTextureSize()\n\n"},
  {(char*)"SetMaximumNumberOfPlanes", PyvtkVolumeTextureMapper2D_SetMaximumNumberOfPlanes, 1,
   (char*)"V.SetMaximumNumberOfPlanes(int)\nC++: void SetMaximumNumberOfPlanes(int a)\n\nThis is the maximum number of planes that will be created for\ntexture mapping the volume. If the volume has more voxels than\nthis along the viewing direction, then planes of the volume will\nbe skipped to ensure that this maximum is not violated. A skip\nfactor is used, and is incremented until the maximum condition is\nsatisfied.\n"},
  {(char*)"GetMaximumNumberOfPlanes", PyvtkVolumeTextureMapper2D_GetMaximumNumberOfPlanes, 1,
   (char*)"V.GetMaximumNumberOfPlanes() -> int\nC++: int GetMaximumNumberOfPlanes()\n\nThis is the maximum number of planes that will be created for\ntexture mapping the volume. If the volume has more voxels than\nthis along the viewing direction, then planes of the volume will\nbe skipped to ensure that this maximum is not violated. A skip\nfactor is used, and is incremented until the maximum condition is\nsatisfied.\n"},
  {(char*)"SetMaximumStorageSize", PyvtkVolumeTextureMapper2D_SetMaximumStorageSize, 1,
   (char*)"V.SetMaximumStorageSize(int)\nC++: void SetMaximumStorageSize(int a)\n\nThis is the maximum size of saved textures in bytes. If this size\nis large enough to hold the RGBA textures for all three\ndirections (XxYxZx3x4 is the approximate value - it is actually a\nbit larger due to wasted space in the textures) then the textures\nwill be saved.\n"},
  {(char*)"GetMaximumStorageSize", PyvtkVolumeTextureMapper2D_GetMaximumStorageSize, 1,
   (char*)"V.GetMaximumStorageSize() -> int\nC++: int GetMaximumStorageSize()\n\nThis is the maximum size of saved textures in bytes. If this size\nis large enough to hold the RGBA textures for all three\ndirections (XxYxZx3x4 is the approximate value - it is actually a\nbit larger due to wasted space in the textures) then the textures\nwill be saved.\n"},
  {(char*)"Render", PyvtkVolumeTextureMapper2D_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"GetInternalSkipFactor", PyvtkVolumeTextureMapper2D_GetInternalSkipFactor, 1,
   (char*)"V.GetInternalSkipFactor() -> int\nC++: int GetInternalSkipFactor()\n\nMade public only for access from the templated method. Not a\nvtkGetMacro to avoid the PrintSelf defect.\n"},
  {(char*)"GetSaveTextures", PyvtkVolumeTextureMapper2D_GetSaveTextures, 1,
   (char*)"V.GetSaveTextures() -> int\nC++: int GetSaveTextures()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeTextureMapper2D_StaticNew()
{
  return vtkVolumeTextureMapper2D::New();
}

PyObject *PyVTKClass_vtkVolumeTextureMapper2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeTextureMapper2D_StaticNew,
    PyvtkVolumeTextureMapper2D_Methods,
    "vtkVolumeTextureMapper2D", modulename,
    NULL, NULL,
    PyvtkVolumeTextureMapper2D_Doc(),
    PyVTKClass_vtkVolumeTextureMapperNew(modulename));
  return cls;
}

const char **PyvtkVolumeTextureMapper2D_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeTextureMapper2D - Abstract class for a volume mapper\n\n",
    "Superclass: vtkVolumeTextureMapper\n\n",
    "vtkVolumeTextureMapper2D renders a volume using 2D texture mapping.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeTextureMapper2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeTextureMapper2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeTextureMapper2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

