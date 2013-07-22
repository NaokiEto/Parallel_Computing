// python wrapper for vtkDiskSource
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
#include "vtkDiskSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDiskSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDiskSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDiskSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDiskSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDiskSource_Doc();


static PyObject *
PyvtkDiskSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

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
      tempr = op->vtkDiskSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

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
      tempr = op->vtkDiskSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  vtkDiskSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDiskSource::NewInstance();
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
PyvtkDiskSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDiskSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDiskSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_SetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInnerRadius(temp0);
      }
    else
      {
      op->vtkDiskSource::SetInnerRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetInnerRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInnerRadiusMinValue();
      }
    else
      {
      tempr = op->vtkDiskSource::GetInnerRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetInnerRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInnerRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkDiskSource::GetInnerRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInnerRadius();
      }
    else
      {
      tempr = op->vtkDiskSource::GetInnerRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_SetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOuterRadius(temp0);
      }
    else
      {
      op->vtkDiskSource::SetOuterRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetOuterRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOuterRadiusMinValue();
      }
    else
      {
      tempr = op->vtkDiskSource::GetOuterRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetOuterRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOuterRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkDiskSource::GetOuterRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOuterRadius();
      }
    else
      {
      tempr = op->vtkDiskSource::GetOuterRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_SetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadialResolution(temp0);
      }
    else
      {
      op->vtkDiskSource::SetRadialResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetRadialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialResolutionMinValue();
      }
    else
      {
      tempr = op->vtkDiskSource::GetRadialResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetRadialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkDiskSource::GetRadialResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialResolution();
      }
    else
      {
      tempr = op->vtkDiskSource::GetRadialResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_SetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCircumferentialResolution(temp0);
      }
    else
      {
      op->vtkDiskSource::SetCircumferentialResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolutionMinValue();
      }
    else
      {
      tempr = op->vtkDiskSource::GetCircumferentialResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkDiskSource::GetCircumferentialResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiskSource_GetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiskSource *op = static_cast<vtkDiskSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolution();
      }
    else
      {
      tempr = op->vtkDiskSource::GetCircumferentialResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDiskSource_Methods[] = {
  {(char*)"GetClassName", PyvtkDiskSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDiskSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDiskSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDiskSource\nC++: vtkDiskSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDiskSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDiskSource\nC++: vtkDiskSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInnerRadius", PyvtkDiskSource_SetInnerRadius, 1,
   (char*)"V.SetInnerRadius(float)\nC++: void SetInnerRadius(double)\n\nSpecify inner radius of hole in disc.\n"},
  {(char*)"GetInnerRadiusMinValue", PyvtkDiskSource_GetInnerRadiusMinValue, 1,
   (char*)"V.GetInnerRadiusMinValue() -> float\nC++: double GetInnerRadiusMinValue()\n\nSpecify inner radius of hole in disc.\n"},
  {(char*)"GetInnerRadiusMaxValue", PyvtkDiskSource_GetInnerRadiusMaxValue, 1,
   (char*)"V.GetInnerRadiusMaxValue() -> float\nC++: double GetInnerRadiusMaxValue()\n\nSpecify inner radius of hole in disc.\n"},
  {(char*)"GetInnerRadius", PyvtkDiskSource_GetInnerRadius, 1,
   (char*)"V.GetInnerRadius() -> float\nC++: double GetInnerRadius()\n\nSpecify inner radius of hole in disc.\n"},
  {(char*)"SetOuterRadius", PyvtkDiskSource_SetOuterRadius, 1,
   (char*)"V.SetOuterRadius(float)\nC++: void SetOuterRadius(double)\n\nSpecify outer radius of disc.\n"},
  {(char*)"GetOuterRadiusMinValue", PyvtkDiskSource_GetOuterRadiusMinValue, 1,
   (char*)"V.GetOuterRadiusMinValue() -> float\nC++: double GetOuterRadiusMinValue()\n\nSpecify outer radius of disc.\n"},
  {(char*)"GetOuterRadiusMaxValue", PyvtkDiskSource_GetOuterRadiusMaxValue, 1,
   (char*)"V.GetOuterRadiusMaxValue() -> float\nC++: double GetOuterRadiusMaxValue()\n\nSpecify outer radius of disc.\n"},
  {(char*)"GetOuterRadius", PyvtkDiskSource_GetOuterRadius, 1,
   (char*)"V.GetOuterRadius() -> float\nC++: double GetOuterRadius()\n\nSpecify outer radius of disc.\n"},
  {(char*)"SetRadialResolution", PyvtkDiskSource_SetRadialResolution, 1,
   (char*)"V.SetRadialResolution(int)\nC++: void SetRadialResolution(int)\n\nSet the number of points in radius direction.\n"},
  {(char*)"GetRadialResolutionMinValue", PyvtkDiskSource_GetRadialResolutionMinValue, 1,
   (char*)"V.GetRadialResolutionMinValue() -> int\nC++: int GetRadialResolutionMinValue()\n\nSet the number of points in radius direction.\n"},
  {(char*)"GetRadialResolutionMaxValue", PyvtkDiskSource_GetRadialResolutionMaxValue, 1,
   (char*)"V.GetRadialResolutionMaxValue() -> int\nC++: int GetRadialResolutionMaxValue()\n\nSet the number of points in radius direction.\n"},
  {(char*)"GetRadialResolution", PyvtkDiskSource_GetRadialResolution, 1,
   (char*)"V.GetRadialResolution() -> int\nC++: int GetRadialResolution()\n\nSet the number of points in radius direction.\n"},
  {(char*)"SetCircumferentialResolution", PyvtkDiskSource_SetCircumferentialResolution, 1,
   (char*)"V.SetCircumferentialResolution(int)\nC++: void SetCircumferentialResolution(int)\n\nSet the number of points in circumferential direction.\n"},
  {(char*)"GetCircumferentialResolutionMinValue", PyvtkDiskSource_GetCircumferentialResolutionMinValue, 1,
   (char*)"V.GetCircumferentialResolutionMinValue() -> int\nC++: int GetCircumferentialResolutionMinValue()\n\nSet the number of points in circumferential direction.\n"},
  {(char*)"GetCircumferentialResolutionMaxValue", PyvtkDiskSource_GetCircumferentialResolutionMaxValue, 1,
   (char*)"V.GetCircumferentialResolutionMaxValue() -> int\nC++: int GetCircumferentialResolutionMaxValue()\n\nSet the number of points in circumferential direction.\n"},
  {(char*)"GetCircumferentialResolution", PyvtkDiskSource_GetCircumferentialResolution, 1,
   (char*)"V.GetCircumferentialResolution() -> int\nC++: int GetCircumferentialResolution()\n\nSet the number of points in circumferential direction.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDiskSource_StaticNew()
{
  return vtkDiskSource::New();
}

PyObject *PyVTKClass_vtkDiskSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDiskSource_StaticNew,
    PyvtkDiskSource_Methods,
    "vtkDiskSource", modulename,
    NULL, NULL,
    PyvtkDiskSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDiskSource_Doc()
{
  static const char *docstring[] = {
    "vtkDiskSource - create a disk with hole in center\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkDiskSource creates a polygonal disk with a hole in the center. The\ndisk has zero height. The user can specify the inner and outer radius\nof the disk, and the radial and circumferential resolution of the\npolygonal representation.\n\nSee Also:\n\nvtkLinearExtrusionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDiskSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDiskSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDiskSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

