// python wrapper for vtkPolyDataToImageStencil
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
#include "vtkPolyDataToImageStencil.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataToImageStencil(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataToImageStencil(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataToImageStencilNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataToImageStencilNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageStencilSourceNew
extern "C" { PyObject *PyVTKClass_vtkImageStencilSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageStencilSourceNew
#endif

static const char **PyvtkPolyDataToImageStencil_Doc();


static PyObject *
PyvtkPolyDataToImageStencil_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

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
      tempr = op->vtkPolyDataToImageStencil::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToImageStencil_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

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
      tempr = op->vtkPolyDataToImageStencil::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToImageStencil_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

  vtkPolyDataToImageStencil *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataToImageStencil::NewInstance();
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
PyvtkPolyDataToImageStencil_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataToImageStencil *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataToImageStencil::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToImageStencil_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPolyDataToImageStencil::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToImageStencil_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkPolyDataToImageStencil::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToImageStencil_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkPolyDataToImageStencil::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToImageStencil_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkPolyDataToImageStencil::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToImageStencil_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkPolyDataToImageStencil::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataToImageStencil_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToImageStencil *op = static_cast<vtkPolyDataToImageStencil *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkPolyDataToImageStencil::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataToImageStencil_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataToImageStencil_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataToImageStencil_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataToImageStencil_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataToImageStencil\nC++: vtkPolyDataToImageStencil *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataToImageStencil_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataToImageStencil\nC++: vtkPolyDataToImageStencil *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkPolyDataToImageStencil_SetInput, 1,
   (char*)"V.SetInput(vtkPolyData)\nC++: virtual void SetInput(vtkPolyData *)\n\nSpecify the implicit function to convert into a stencil.\n"},
  {(char*)"GetInput", PyvtkPolyDataToImageStencil_GetInput, 1,
   (char*)"V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nSpecify the implicit function to convert into a stencil.\n"},
  {(char*)"SetTolerance", PyvtkPolyDataToImageStencil_SetTolerance, 1,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nThe tolerance to apply in when determining whether a voxel is\ninside the stencil, given as a fraction of a voxel. Only used in\nX and Y, not in Z.\n"},
  {(char*)"GetToleranceMinValue", PyvtkPolyDataToImageStencil_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nThe tolerance to apply in when determining whether a voxel is\ninside the stencil, given as a fraction of a voxel. Only used in\nX and Y, not in Z.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkPolyDataToImageStencil_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nThe tolerance to apply in when determining whether a voxel is\ninside the stencil, given as a fraction of a voxel. Only used in\nX and Y, not in Z.\n"},
  {(char*)"GetTolerance", PyvtkPolyDataToImageStencil_GetTolerance, 1,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nThe tolerance to apply in when determining whether a voxel is\ninside the stencil, given as a fraction of a voxel. Only used in\nX and Y, not in Z.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataToImageStencil_StaticNew()
{
  return vtkPolyDataToImageStencil::New();
}

PyObject *PyVTKClass_vtkPolyDataToImageStencilNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataToImageStencil_StaticNew,
    PyvtkPolyDataToImageStencil_Methods,
    "vtkPolyDataToImageStencil", modulename,
    NULL, NULL,
    PyvtkPolyDataToImageStencil_Doc(),
    PyVTKClass_vtkImageStencilSourceNew(modulename));
  return cls;
}

const char **PyvtkPolyDataToImageStencil_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataToImageStencil - use polydata to mask an image\n\n",
    "Superclass: vtkImageStencilSource\n\n",
    "The vtkPolyDataToImageStencil class will convert polydata into an\nimage stencil.  The polydata can either be a closed surface mesh or a\nseries of polyline contours (one contour per slice).\n\nCaveats:\n\nIf contours are provided, the contours must be aligned with the Z\nplanes.  Other contour orientations are not supported.\n\nSee Also:\n\nvtkImageStencil vtkImageAccumulate vtkImageBlend vtkImageReslice\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataToImageStencil(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataToImageStencilNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataToImageStencil", o) != 0)
    {
    Py_DECREF(o);
    }

}

