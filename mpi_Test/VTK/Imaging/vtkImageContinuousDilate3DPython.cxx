// python wrapper for vtkImageContinuousDilate3D
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
#include "vtkImageContinuousDilate3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageContinuousDilate3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageContinuousDilate3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageContinuousDilate3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageContinuousDilate3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageContinuousDilate3D_Doc();


static PyObject *
PyvtkImageContinuousDilate3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

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
      tempr = op->vtkImageContinuousDilate3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

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
      tempr = op->vtkImageContinuousDilate3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

  vtkImageContinuousDilate3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageContinuousDilate3D::NewInstance();
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
PyvtkImageContinuousDilate3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageContinuousDilate3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageContinuousDilate3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetKernelSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageContinuousDilate3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageContinuousDilate3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageContinuousDilate3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {(char*)"IsA", PyvtkImageContinuousDilate3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {(char*)"NewInstance", PyvtkImageContinuousDilate3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageContinuousDilate3D\nC++: vtkImageContinuousDilate3D *NewInstance()\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {(char*)"SafeDownCast", PyvtkImageContinuousDilate3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageContinuousDilate3D\nC++: vtkImageContinuousDilate3D *SafeDownCast(vtkObject* o)\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {(char*)"SetKernelSize", PyvtkImageContinuousDilate3D_SetKernelSize, 1,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the elliptical\nfoot print.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageContinuousDilate3D_StaticNew()
{
  return vtkImageContinuousDilate3D::New();
}

PyObject *PyVTKClass_vtkImageContinuousDilate3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageContinuousDilate3D_StaticNew,
    PyvtkImageContinuousDilate3D_Methods,
    "vtkImageContinuousDilate3D", modulename,
    NULL, NULL,
    PyvtkImageContinuousDilate3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageContinuousDilate3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageContinuousDilate3D - Dilate implemented as a maximum.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageContinuousDilate3D replaces a pixel with the maximum over an\nellipsoidal neighborhood.  If KernelSize of an axis is 1, no\nprocessing is done on that axis.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageContinuousDilate3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageContinuousDilate3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageContinuousDilate3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

