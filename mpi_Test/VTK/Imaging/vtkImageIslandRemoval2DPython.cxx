// python wrapper for vtkImageIslandRemoval2D
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
#include "vtkImageIslandRemoval2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageIslandRemoval2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageIslandRemoval2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageIslandRemoval2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageIslandRemoval2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageIslandRemoval2D_Doc();


static PyObject *
PyvtkImageIslandRemoval2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

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
      tempr = op->vtkImageIslandRemoval2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

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
      tempr = op->vtkImageIslandRemoval2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  vtkImageIslandRemoval2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageIslandRemoval2D::NewInstance();
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
PyvtkImageIslandRemoval2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageIslandRemoval2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageIslandRemoval2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetAreaThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAreaThreshold(temp0);
      }
    else
      {
      op->vtkImageIslandRemoval2D::SetAreaThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetAreaThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAreaThreshold();
      }
    else
      {
      tempr = op->vtkImageIslandRemoval2D::GetAreaThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetSquareNeighborhood(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSquareNeighborhood");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSquareNeighborhood(temp0);
      }
    else
      {
      op->vtkImageIslandRemoval2D::SetSquareNeighborhood(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetSquareNeighborhood(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquareNeighborhood");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSquareNeighborhood();
      }
    else
      {
      tempr = op->vtkImageIslandRemoval2D::GetSquareNeighborhood();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SquareNeighborhoodOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquareNeighborhoodOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SquareNeighborhoodOn();
      }
    else
      {
      op->vtkImageIslandRemoval2D::SquareNeighborhoodOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SquareNeighborhoodOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquareNeighborhoodOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SquareNeighborhoodOff();
      }
    else
      {
      op->vtkImageIslandRemoval2D::SquareNeighborhoodOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetIslandValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIslandValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIslandValue(temp0);
      }
    else
      {
      op->vtkImageIslandRemoval2D::SetIslandValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetIslandValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIslandValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIslandValue();
      }
    else
      {
      tempr = op->vtkImageIslandRemoval2D::GetIslandValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetReplaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceValue(temp0);
      }
    else
      {
      op->vtkImageIslandRemoval2D::SetReplaceValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetReplaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReplaceValue();
      }
    else
      {
      tempr = op->vtkImageIslandRemoval2D::GetReplaceValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageIslandRemoval2D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageIslandRemoval2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstructor: Sets default filter to be identity.\n"},
  {(char*)"IsA", PyvtkImageIslandRemoval2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstructor: Sets default filter to be identity.\n"},
  {(char*)"NewInstance", PyvtkImageIslandRemoval2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageIslandRemoval2D\nC++: vtkImageIslandRemoval2D *NewInstance()\n\nConstructor: Sets default filter to be identity.\n"},
  {(char*)"SafeDownCast", PyvtkImageIslandRemoval2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageIslandRemoval2D\nC++: vtkImageIslandRemoval2D *SafeDownCast(vtkObject* o)\n\nConstructor: Sets default filter to be identity.\n"},
  {(char*)"SetAreaThreshold", PyvtkImageIslandRemoval2D_SetAreaThreshold, 1,
   (char*)"V.SetAreaThreshold(int)\nC++: void SetAreaThreshold(int a)\n\nSet/Get the cutoff area for removal\n"},
  {(char*)"GetAreaThreshold", PyvtkImageIslandRemoval2D_GetAreaThreshold, 1,
   (char*)"V.GetAreaThreshold() -> int\nC++: int GetAreaThreshold()\n\nSet/Get the cutoff area for removal\n"},
  {(char*)"SetSquareNeighborhood", PyvtkImageIslandRemoval2D_SetSquareNeighborhood, 1,
   (char*)"V.SetSquareNeighborhood(int)\nC++: void SetSquareNeighborhood(int a)\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {(char*)"GetSquareNeighborhood", PyvtkImageIslandRemoval2D_GetSquareNeighborhood, 1,
   (char*)"V.GetSquareNeighborhood() -> int\nC++: int GetSquareNeighborhood()\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {(char*)"SquareNeighborhoodOn", PyvtkImageIslandRemoval2D_SquareNeighborhoodOn, 1,
   (char*)"V.SquareNeighborhoodOn()\nC++: void SquareNeighborhoodOn()\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {(char*)"SquareNeighborhoodOff", PyvtkImageIslandRemoval2D_SquareNeighborhoodOff, 1,
   (char*)"V.SquareNeighborhoodOff()\nC++: void SquareNeighborhoodOff()\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {(char*)"SetIslandValue", PyvtkImageIslandRemoval2D_SetIslandValue, 1,
   (char*)"V.SetIslandValue(float)\nC++: void SetIslandValue(double a)\n\nSet/Get the value to remove.\n"},
  {(char*)"GetIslandValue", PyvtkImageIslandRemoval2D_GetIslandValue, 1,
   (char*)"V.GetIslandValue() -> float\nC++: double GetIslandValue()\n\nSet/Get the value to remove.\n"},
  {(char*)"SetReplaceValue", PyvtkImageIslandRemoval2D_SetReplaceValue, 1,
   (char*)"V.SetReplaceValue(float)\nC++: void SetReplaceValue(double a)\n\nSet/Get the value to put in the place of removed pixels.\n"},
  {(char*)"GetReplaceValue", PyvtkImageIslandRemoval2D_GetReplaceValue, 1,
   (char*)"V.GetReplaceValue() -> float\nC++: double GetReplaceValue()\n\nSet/Get the value to put in the place of removed pixels.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageIslandRemoval2D_StaticNew()
{
  return vtkImageIslandRemoval2D::New();
}

PyObject *PyVTKClass_vtkImageIslandRemoval2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageIslandRemoval2D_StaticNew,
    PyvtkImageIslandRemoval2D_Methods,
    "vtkImageIslandRemoval2D", modulename,
    NULL, NULL,
    PyvtkImageIslandRemoval2D_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageIslandRemoval2D_Doc()
{
  static const char *docstring[] = {
    "vtkImageIslandRemoval2D - Removes small clusters in masks.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageIslandRemoval2D computes the area of separate islands in a\nmask image.  It removes any island that has less than AreaThreshold\npixels.  Output has the same ScalarType as input.  It generates the\nwhole 2D output image for any output request.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageIslandRemoval2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageIslandRemoval2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageIslandRemoval2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

