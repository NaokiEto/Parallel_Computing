// python wrapper for vtkImageContinuousErode3D
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
#include "vtkImageContinuousErode3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageContinuousErode3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageContinuousErode3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageContinuousErode3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageContinuousErode3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageContinuousErode3D_Doc();


static PyObject *
PyvtkImageContinuousErode3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousErode3D *op = static_cast<vtkImageContinuousErode3D *>(vp);

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
      tempr = op->vtkImageContinuousErode3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousErode3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousErode3D *op = static_cast<vtkImageContinuousErode3D *>(vp);

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
      tempr = op->vtkImageContinuousErode3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousErode3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousErode3D *op = static_cast<vtkImageContinuousErode3D *>(vp);

  vtkImageContinuousErode3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageContinuousErode3D::NewInstance();
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
PyvtkImageContinuousErode3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageContinuousErode3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageContinuousErode3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousErode3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousErode3D *op = static_cast<vtkImageContinuousErode3D *>(vp);

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
      op->vtkImageContinuousErode3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageContinuousErode3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageContinuousErode3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an instance of vtkImageContinuousErode3D filter. By\ndefault zero values are eroded.\n"},
  {(char*)"IsA", PyvtkImageContinuousErode3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an instance of vtkImageContinuousErode3D filter. By\ndefault zero values are eroded.\n"},
  {(char*)"NewInstance", PyvtkImageContinuousErode3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageContinuousErode3D\nC++: vtkImageContinuousErode3D *NewInstance()\n\nConstruct an instance of vtkImageContinuousErode3D filter. By\ndefault zero values are eroded.\n"},
  {(char*)"SafeDownCast", PyvtkImageContinuousErode3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageContinuousErode3D\nC++: vtkImageContinuousErode3D *SafeDownCast(vtkObject* o)\n\nConstruct an instance of vtkImageContinuousErode3D filter. By\ndefault zero values are eroded.\n"},
  {(char*)"SetKernelSize", PyvtkImageContinuousErode3D_SetKernelSize, 1,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the elliptical\nfoot print.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageContinuousErode3D_StaticNew()
{
  return vtkImageContinuousErode3D::New();
}

PyObject *PyVTKClass_vtkImageContinuousErode3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageContinuousErode3D_StaticNew,
    PyvtkImageContinuousErode3D_Methods,
    "vtkImageContinuousErode3D", modulename,
    NULL, NULL,
    PyvtkImageContinuousErode3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageContinuousErode3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageContinuousErode3D - Erosion implemented as a minimum.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageContinuousErode3D replaces a pixel with the minimum over an\nellipsoidal neighborhood.  If KernelSize of an axis is 1, no\nprocessing is done on that axis.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageContinuousErode3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageContinuousErode3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageContinuousErode3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

