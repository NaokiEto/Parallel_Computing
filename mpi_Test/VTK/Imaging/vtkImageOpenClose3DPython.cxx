// python wrapper for vtkImageOpenClose3D
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
#include "vtkImageOpenClose3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageOpenClose3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageOpenClose3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageOpenClose3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageOpenClose3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageOpenClose3D_Doc();


static PyObject *
PyvtkImageOpenClose3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

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
      tempr = op->vtkImageOpenClose3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

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
      tempr = op->vtkImageOpenClose3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  vtkImageOpenClose3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageOpenClose3D::NewInstance();
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
PyvtkImageOpenClose3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageOpenClose3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageOpenClose3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkImageOpenClose3D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_DebugOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DebugOn();
      }
    else
      {
      op->vtkImageOpenClose3D::DebugOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_DebugOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DebugOff();
      }
    else
      {
      op->vtkImageOpenClose3D::DebugOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkImageOpenClose3D::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

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
      op->vtkImageOpenClose3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetOpenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpenValue(temp0);
      }
    else
      {
      op->vtkImageOpenClose3D::SetOpenValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetOpenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpenValue();
      }
    else
      {
      tempr = op->vtkImageOpenClose3D::GetOpenValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetCloseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCloseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCloseValue(temp0);
      }
    else
      {
      op->vtkImageOpenClose3D::SetCloseValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetCloseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCloseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCloseValue();
      }
    else
      {
      tempr = op->vtkImageOpenClose3D::GetCloseValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetFilter0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  vtkImageDilateErode3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilter0();
      }
    else
      {
      tempr = op->vtkImageOpenClose3D::GetFilter0();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetFilter1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  vtkImageDilateErode3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilter1();
      }
    else
      {
      tempr = op->vtkImageOpenClose3D::GetFilter1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageOpenClose3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageOpenClose3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nDefault open value is 0, and default close value is 255.\n"},
  {(char*)"IsA", PyvtkImageOpenClose3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nDefault open value is 0, and default close value is 255.\n"},
  {(char*)"NewInstance", PyvtkImageOpenClose3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageOpenClose3D\nC++: vtkImageOpenClose3D *NewInstance()\n\nDefault open value is 0, and default close value is 255.\n"},
  {(char*)"SafeDownCast", PyvtkImageOpenClose3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageOpenClose3D\nC++: vtkImageOpenClose3D *SafeDownCast(vtkObject* o)\n\nDefault open value is 0, and default close value is 255.\n"},
  {(char*)"GetMTime", PyvtkImageOpenClose3D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nThis method considers the sub filters MTimes when computing this\nobjects modified time.\n"},
  {(char*)"DebugOn", PyvtkImageOpenClose3D_DebugOn, 1,
   (char*)"V.DebugOn()\nC++: void DebugOn()\n\nTurn debugging output on. (in sub filters also)\n"},
  {(char*)"DebugOff", PyvtkImageOpenClose3D_DebugOff, 1,
   (char*)"V.DebugOff()\nC++: void DebugOff()\n\nTurn debugging output on. (in sub filters also)\n"},
  {(char*)"Modified", PyvtkImageOpenClose3D_Modified, 1,
   (char*)"V.Modified()\nC++: void Modified()\n\nPass modified message to sub filters.\n"},
  {(char*)"SetKernelSize", PyvtkImageOpenClose3D_SetKernelSize, 1,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nSelects the size of gaps or objects removed.\n"},
  {(char*)"SetOpenValue", PyvtkImageOpenClose3D_SetOpenValue, 1,
   (char*)"V.SetOpenValue(float)\nC++: void SetOpenValue(double value)\n\nDetermines the value that will opened. Open value is first\neroded, and then dilated.\n"},
  {(char*)"GetOpenValue", PyvtkImageOpenClose3D_GetOpenValue, 1,
   (char*)"V.GetOpenValue() -> float\nC++: double GetOpenValue()\n\nDetermines the value that will opened. Open value is first\neroded, and then dilated.\n"},
  {(char*)"SetCloseValue", PyvtkImageOpenClose3D_SetCloseValue, 1,
   (char*)"V.SetCloseValue(float)\nC++: void SetCloseValue(double value)\n\nDetermines the value that will closed. Close value is first\ndilated, and then eroded\n"},
  {(char*)"GetCloseValue", PyvtkImageOpenClose3D_GetCloseValue, 1,
   (char*)"V.GetCloseValue() -> float\nC++: double GetCloseValue()\n\nDetermines the value that will closed. Close value is first\ndilated, and then eroded\n"},
  {(char*)"GetFilter0", PyvtkImageOpenClose3D_GetFilter0, 1,
   (char*)"V.GetFilter0() -> vtkImageDilateErode3D\nC++: vtkImageDilateErode3D *GetFilter0()\n\nNeeded for Progress functions\n"},
  {(char*)"GetFilter1", PyvtkImageOpenClose3D_GetFilter1, 1,
   (char*)"V.GetFilter1() -> vtkImageDilateErode3D\nC++: vtkImageDilateErode3D *GetFilter1()\n\nNeeded for Progress functions\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageOpenClose3D_StaticNew()
{
  return vtkImageOpenClose3D::New();
}

PyObject *PyVTKClass_vtkImageOpenClose3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageOpenClose3D_StaticNew,
    PyvtkImageOpenClose3D_Methods,
    "vtkImageOpenClose3D", modulename,
    NULL, NULL,
    PyvtkImageOpenClose3D_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageOpenClose3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageOpenClose3D - Will perform opening or closing.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageOpenClose3D performs opening or closing by having two\nvtkImageErodeDilates in series.  The size of operation is determined\nby the method SetKernelSize, and the operator is an ellipse.\nOpenValue and CloseValue determine how the filter behaves.  For\nbinary images Opening and closing behaves as expected. Close value is\nfirst dilated, and then eroded. Open value is first eroded, and then\ndilat",
    "ed. Degenerate two dimensional opening/closing can be achieved\nby setting the one axis the 3D KernelSize to 1. Values other than\nopen value and close value are not touched. This enables the filter\nto processes segmented images containing more than two tags.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageOpenClose3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageOpenClose3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageOpenClose3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

