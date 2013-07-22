// python wrapper for vtkWarpTo
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
#include "vtkWarpTo.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWarpTo(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWarpTo(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWarpToNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWarpToNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkWarpTo_Doc();


static PyObject *
PyvtkWarpTo_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

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
      tempr = op->vtkWarpTo::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

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
      tempr = op->vtkWarpTo::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  vtkWarpTo *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWarpTo::NewInstance();
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
PyvtkWarpTo_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkWarpTo *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkWarpTo::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkWarpTo::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactor();
      }
    else
      {
      tempr = op->vtkWarpTo::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkWarpTo::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWarpTo::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWarpTo_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkWarpTo::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWarpTo_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkWarpTo_SetPosition_s1(self, args);
    case 1:
      return PyvtkWarpTo_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkWarpTo_SetAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsolute(temp0);
      }
    else
      {
      op->vtkWarpTo::SetAbsolute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_GetAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsolute();
      }
    else
      {
      tempr = op->vtkWarpTo::GetAbsolute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_AbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbsoluteOn();
      }
    else
      {
      op->vtkWarpTo::AbsoluteOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpTo_AbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTo *op = static_cast<vtkWarpTo *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbsoluteOff();
      }
    else
      {
      op->vtkWarpTo::AbsoluteOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWarpTo_Methods[] = {
  {(char*)"GetClassName", PyvtkWarpTo_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWarpTo_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWarpTo_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWarpTo\nC++: vtkWarpTo *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWarpTo_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWarpTo\nC++: vtkWarpTo *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScaleFactor", PyvtkWarpTo_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSet/Get the value to scale displacement.\n"},
  {(char*)"GetScaleFactor", PyvtkWarpTo_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSet/Get the value to scale displacement.\n"},
  {(char*)"GetPosition", PyvtkWarpTo_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nSet/Get the position to warp towards.\n"},
  {(char*)"SetPosition", PyvtkWarpTo_SetPosition, 1,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {(char*)"SetAbsolute", PyvtkWarpTo_SetAbsolute, 1,
   (char*)"V.SetAbsolute(int)\nC++: void SetAbsolute(int a)\n\nSet/Get the Absolute ivar. Turning Absolute on causes scale\nfactor of the new position to be one unit away from Position.\n"},
  {(char*)"GetAbsolute", PyvtkWarpTo_GetAbsolute, 1,
   (char*)"V.GetAbsolute() -> int\nC++: int GetAbsolute()\n\nSet/Get the Absolute ivar. Turning Absolute on causes scale\nfactor of the new position to be one unit away from Position.\n"},
  {(char*)"AbsoluteOn", PyvtkWarpTo_AbsoluteOn, 1,
   (char*)"V.AbsoluteOn()\nC++: void AbsoluteOn()\n\nSet/Get the Absolute ivar. Turning Absolute on causes scale\nfactor of the new position to be one unit away from Position.\n"},
  {(char*)"AbsoluteOff", PyvtkWarpTo_AbsoluteOff, 1,
   (char*)"V.AbsoluteOff()\nC++: void AbsoluteOff()\n\nSet/Get the Absolute ivar. Turning Absolute on causes scale\nfactor of the new position to be one unit away from Position.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWarpTo_StaticNew()
{
  return vtkWarpTo::New();
}

PyObject *PyVTKClass_vtkWarpToNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWarpTo_StaticNew,
    PyvtkWarpTo_Methods,
    "vtkWarpTo", modulename,
    NULL, NULL,
    PyvtkWarpTo_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWarpTo_Doc()
{
  static const char *docstring[] = {
    "vtkWarpTo - deform geometry by warping towards a point\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkWarpTo is a filter that modifies point coordinates by moving the\npoints towards a user specified position.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWarpTo(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWarpToNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWarpTo", o) != 0)
    {
    Py_DECREF(o);
    }

}

