// python wrapper for vtkImageNoiseSource
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
#include "vtkImageNoiseSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageNoiseSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageNoiseSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageNoiseSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageNoiseSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageNoiseSource_Doc();


static PyObject *
PyvtkImageNoiseSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

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
      tempr = op->vtkImageNoiseSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNoiseSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

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
      tempr = op->vtkImageNoiseSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNoiseSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

  vtkImageNoiseSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageNoiseSource::NewInstance();
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
PyvtkImageNoiseSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageNoiseSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageNoiseSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNoiseSource_SetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimum(temp0);
      }
    else
      {
      op->vtkImageNoiseSource::SetMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageNoiseSource_GetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimum();
      }
    else
      {
      tempr = op->vtkImageNoiseSource::GetMinimum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNoiseSource_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkImageNoiseSource::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageNoiseSource_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximum();
      }
    else
      {
      tempr = op->vtkImageNoiseSource::GetMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNoiseSource_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageNoiseSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageNoiseSource_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNoiseSource *op = static_cast<vtkImageNoiseSource *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkImageNoiseSource::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageNoiseSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageNoiseSource_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkImageNoiseSource_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}


static PyMethodDef PyvtkImageNoiseSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageNoiseSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageNoiseSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageNoiseSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageNoiseSource\nC++: vtkImageNoiseSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageNoiseSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageNoiseSource\nC++: vtkImageNoiseSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMinimum", PyvtkImageNoiseSource_SetMinimum, 1,
   (char*)"V.SetMinimum(float)\nC++: void SetMinimum(double a)\n\nSet/Get the minimum and maximum values for the generated noise.\n"},
  {(char*)"GetMinimum", PyvtkImageNoiseSource_GetMinimum, 1,
   (char*)"V.GetMinimum() -> float\nC++: double GetMinimum()\n\nSet/Get the minimum and maximum values for the generated noise.\n"},
  {(char*)"SetMaximum", PyvtkImageNoiseSource_SetMaximum, 1,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\nSet/Get the minimum and maximum values for the generated noise.\n"},
  {(char*)"GetMaximum", PyvtkImageNoiseSource_GetMaximum, 1,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nSet/Get the minimum and maximum values for the generated noise.\n"},
  {(char*)"SetWholeExtent", PyvtkImageNoiseSource_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(const int ext[6])\n\nSet how large of an image to generate.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageNoiseSource_StaticNew()
{
  return vtkImageNoiseSource::New();
}

PyObject *PyVTKClass_vtkImageNoiseSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageNoiseSource_StaticNew,
    PyvtkImageNoiseSource_Methods,
    "vtkImageNoiseSource", modulename,
    NULL, NULL,
    PyvtkImageNoiseSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageNoiseSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageNoiseSource - Create an image filled with noise.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageNoiseSource just produces images filled with noise.  The only\noption now is uniform noise specified by a min and a max.  There is\none major problem with this source. Every time it executes, it will\noutput different pixel values.  This has important implications when\na stream requests overlapping regions.  The same pixels will have\ndifferent values on different updates.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageNoiseSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageNoiseSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageNoiseSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

