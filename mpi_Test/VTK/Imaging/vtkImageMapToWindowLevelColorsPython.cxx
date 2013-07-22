// python wrapper for vtkImageMapToWindowLevelColors
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
#include "vtkImageMapToWindowLevelColors.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMapToWindowLevelColors(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMapToWindowLevelColors(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMapToWindowLevelColorsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMapToWindowLevelColorsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageMapToColorsNew
extern "C" { PyObject *PyVTKClass_vtkImageMapToColorsNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageMapToColorsNew
#endif

static const char **PyvtkImageMapToWindowLevelColors_Doc();


static PyObject *
PyvtkImageMapToWindowLevelColors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

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
      tempr = op->vtkImageMapToWindowLevelColors::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

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
      tempr = op->vtkImageMapToWindowLevelColors::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  vtkImageMapToWindowLevelColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMapToWindowLevelColors::NewInstance();
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
PyvtkImageMapToWindowLevelColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMapToWindowLevelColors *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMapToWindowLevelColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindow(temp0);
      }
    else
      {
      op->vtkImageMapToWindowLevelColors::SetWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindow();
      }
    else
      {
      tempr = op->vtkImageMapToWindowLevelColors::GetWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevel(temp0);
      }
    else
      {
      op->vtkImageMapToWindowLevelColors::SetLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToWindowLevelColors_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToWindowLevelColors *op = static_cast<vtkImageMapToWindowLevelColors *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevel();
      }
    else
      {
      tempr = op->vtkImageMapToWindowLevelColors::GetLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMapToWindowLevelColors_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMapToWindowLevelColors_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMapToWindowLevelColors_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMapToWindowLevelColors_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMapToWindowLevelColors_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMapToWindowLevelColors\nC++: vtkImageMapToWindowLevelColors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWindow", PyvtkImageMapToWindowLevelColors_SetWindow, 1,
   (char*)"V.SetWindow(float)\nC++: void SetWindow(double a)\n\nSet / Get the Window to use -> modulation will be performed on\nthe color based on (S - (L - W/2))/W where S is the scalar value,\nL is the level and W is the window.\n"},
  {(char*)"GetWindow", PyvtkImageMapToWindowLevelColors_GetWindow, 1,
   (char*)"V.GetWindow() -> float\nC++: double GetWindow()\n\nSet / Get the Window to use -> modulation will be performed on\nthe color based on (S - (L - W/2))/W where S is the scalar value,\nL is the level and W is the window.\n"},
  {(char*)"SetLevel", PyvtkImageMapToWindowLevelColors_SetLevel, 1,
   (char*)"V.SetLevel(float)\nC++: void SetLevel(double a)\n\nSet / Get the Level to use -> modulation will be performed on the\ncolor based on (S - (L - W/2))/W where S is the scalar value, L\nis the level and W is the window.\n"},
  {(char*)"GetLevel", PyvtkImageMapToWindowLevelColors_GetLevel, 1,
   (char*)"V.GetLevel() -> float\nC++: double GetLevel()\n\nSet / Get the Level to use -> modulation will be performed on the\ncolor based on (S - (L - W/2))/W where S is the scalar value, L\nis the level and W is the window.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMapToWindowLevelColors_StaticNew()
{
  return vtkImageMapToWindowLevelColors::New();
}

PyObject *PyVTKClass_vtkImageMapToWindowLevelColorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMapToWindowLevelColors_StaticNew,
    PyvtkImageMapToWindowLevelColors_Methods,
    "vtkImageMapToWindowLevelColors", modulename,
    NULL, NULL,
    PyvtkImageMapToWindowLevelColors_Doc(),
    PyVTKClass_vtkImageMapToColorsNew(modulename));
  return cls;
}

const char **PyvtkImageMapToWindowLevelColors_Doc()
{
  static const char *docstring[] = {
    "vtkImageMapToWindowLevelColors - map the input image through a lookup\ntable and window / level it\n\n",
    "Superclass: vtkImageMapToColors\n\n",
    "The vtkImageMapToWindowLevelColors filter will take an input image of\nany valid scalar type, and map the first component of the image\nthrough a lookup table.  This resulting color will be modulated with\nvalue obtained by a window / level operation. The result is an image\nof type VTK_UNSIGNED_CHAR. If the lookup table is not set, or is set\nto NULL, then the input data will be passed through if it i",
    "s already\nof type UNSIGNED_CHAR.\n\nSee Also:\n\nvtkLookupTable vtkScalarsToColors\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMapToWindowLevelColors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMapToWindowLevelColorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMapToWindowLevelColors", o) != 0)
    {
    Py_DECREF(o);
    }

}

