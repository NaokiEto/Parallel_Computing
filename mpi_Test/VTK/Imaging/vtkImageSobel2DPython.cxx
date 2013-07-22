// python wrapper for vtkImageSobel2D
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
#include "vtkImageSobel2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageSobel2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageSobel2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageSobel2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageSobel2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageSobel2D_Doc();


static PyObject *
PyvtkImageSobel2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSobel2D *op = static_cast<vtkImageSobel2D *>(vp);

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
      tempr = op->vtkImageSobel2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSobel2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSobel2D *op = static_cast<vtkImageSobel2D *>(vp);

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
      tempr = op->vtkImageSobel2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSobel2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSobel2D *op = static_cast<vtkImageSobel2D *>(vp);

  vtkImageSobel2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageSobel2D::NewInstance();
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
PyvtkImageSobel2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageSobel2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageSobel2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSobel2D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSobel2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSobel2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSobel2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageSobel2D\nC++: vtkImageSobel2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSobel2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSobel2D\nC++: vtkImageSobel2D *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSobel2D_StaticNew()
{
  return vtkImageSobel2D::New();
}

PyObject *PyVTKClass_vtkImageSobel2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSobel2D_StaticNew,
    PyvtkImageSobel2D_Methods,
    "vtkImageSobel2D", modulename,
    NULL, NULL,
    PyvtkImageSobel2D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageSobel2D_Doc()
{
  static const char *docstring[] = {
    "vtkImageSobel2D - Computes a vector field using sobel functions.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageSobel2D computes a vector field from a scalar field by using\nSobel functions.  The number of vector components is 2 because the\ninput is an image.  Output is always doubles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSobel2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSobel2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSobel2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

