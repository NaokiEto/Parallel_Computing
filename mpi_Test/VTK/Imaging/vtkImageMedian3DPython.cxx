// python wrapper for vtkImageMedian3D
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
#include "vtkImageMedian3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMedian3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMedian3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMedian3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMedian3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageMedian3D_Doc();


static PyObject *
PyvtkImageMedian3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMedian3D *op = static_cast<vtkImageMedian3D *>(vp);

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
      tempr = op->vtkImageMedian3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMedian3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMedian3D *op = static_cast<vtkImageMedian3D *>(vp);

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
      tempr = op->vtkImageMedian3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMedian3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMedian3D *op = static_cast<vtkImageMedian3D *>(vp);

  vtkImageMedian3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMedian3D::NewInstance();
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
PyvtkImageMedian3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMedian3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMedian3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMedian3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMedian3D *op = static_cast<vtkImageMedian3D *>(vp);

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
      op->vtkImageMedian3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMedian3D_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMedian3D *op = static_cast<vtkImageMedian3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElements();
      }
    else
      {
      tempr = op->vtkImageMedian3D::GetNumberOfElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMedian3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMedian3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMedian3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMedian3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMedian3D\nC++: vtkImageMedian3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMedian3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMedian3D\nC++: vtkImageMedian3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetKernelSize", PyvtkImageMedian3D_SetKernelSize, 1,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood\n"},
  {(char*)"GetNumberOfElements", PyvtkImageMedian3D_GetNumberOfElements, 1,
   (char*)"V.GetNumberOfElements() -> int\nC++: int GetNumberOfElements()\n\nReturn the number of elements in the median mask\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMedian3D_StaticNew()
{
  return vtkImageMedian3D::New();
}

PyObject *PyVTKClass_vtkImageMedian3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMedian3D_StaticNew,
    PyvtkImageMedian3D_Methods,
    "vtkImageMedian3D", modulename,
    NULL, NULL,
    PyvtkImageMedian3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMedian3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageMedian3D - Median Filter\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageMedian3D a Median filter that replaces each pixel with the\nmedian value from a rectangular neighborhood around that pixel.\nNeighborhoods can be no more than 3 dimensional.  Setting one axis of\nthe neighborhood kernelSize to 1 changes the filter into a 2D median.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMedian3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMedian3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMedian3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

