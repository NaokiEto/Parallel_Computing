// python wrapper for vtkPiecewiseFunctionItem
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
#include "vtkPiecewiseFunctionItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPiecewiseFunctionItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPiecewiseFunctionItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPiecewiseFunctionItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPiecewiseFunctionItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
#endif

static const char **PyvtkPiecewiseFunctionItem_Doc();


static PyObject *
PyvtkPiecewiseFunctionItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

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
      tempr = op->vtkPiecewiseFunctionItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

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
      tempr = op->vtkPiecewiseFunctionItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  vtkPiecewiseFunctionItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPiecewiseFunctionItem::NewInstance();
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
PyvtkPiecewiseFunctionItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPiecewiseFunctionItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPiecewiseFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkPiecewiseFunctionItem::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetPiecewiseFunction(temp0);
      }
    else
      {
      op->vtkPiecewiseFunctionItem::SetPiecewiseFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_GetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPiecewiseFunction();
      }
    else
      {
      tempr = op->vtkPiecewiseFunctionItem::GetPiecewiseFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunctionItem_Methods[] = {
  {(char*)"GetClassName", PyvtkPiecewiseFunctionItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPiecewiseFunctionItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPiecewiseFunctionItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPiecewiseFunctionItem\nC++: vtkPiecewiseFunctionItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPiecewiseFunctionItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPiecewiseFunctionItem\nC++: vtkPiecewiseFunctionItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkPiecewiseFunctionItem_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nReimplemented to return the range of the piecewise function\n"},
  {(char*)"SetPiecewiseFunction", PyvtkPiecewiseFunctionItem_SetPiecewiseFunction, 1,
   (char*)"V.SetPiecewiseFunction(vtkPiecewiseFunction)\nC++: void SetPiecewiseFunction(vtkPiecewiseFunction *t)\n\n"},
  {(char*)"GetPiecewiseFunction", PyvtkPiecewiseFunctionItem_GetPiecewiseFunction, 1,
   (char*)"V.GetPiecewiseFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetPiecewiseFunction()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPiecewiseFunctionItem_StaticNew()
{
  return vtkPiecewiseFunctionItem::New();
}

PyObject *PyVTKClass_vtkPiecewiseFunctionItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPiecewiseFunctionItem_StaticNew,
    PyvtkPiecewiseFunctionItem_Methods,
    "vtkPiecewiseFunctionItem", modulename,
    NULL, NULL,
    PyvtkPiecewiseFunctionItem_Doc(),
    PyVTKClass_vtkScalarsToColorsItemNew(modulename));
  return cls;
}

const char **PyvtkPiecewiseFunctionItem_Doc()
{
  static const char *docstring[] = {
    "vtkPiecewiseFunctionItem - no description provided.\n\n",
    "Superclass: vtkScalarsToColorsItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPiecewiseFunctionItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPiecewiseFunctionItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPiecewiseFunctionItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

