// python wrapper for vtkColorTransferFunctionItem
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
#include "vtkColorTransferFunctionItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkColorTransferFunctionItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkColorTransferFunctionItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkColorTransferFunctionItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkColorTransferFunctionItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
#endif

static const char **PyvtkColorTransferFunctionItem_Doc();


static PyObject *
PyvtkColorTransferFunctionItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

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
      tempr = op->vtkColorTransferFunctionItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

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
      tempr = op->vtkColorTransferFunctionItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  vtkColorTransferFunctionItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkColorTransferFunctionItem::NewInstance();
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
PyvtkColorTransferFunctionItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkColorTransferFunctionItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkColorTransferFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

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
      op->vtkColorTransferFunctionItem::GetBounds(temp0);
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
PyvtkColorTransferFunctionItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColorTransferFunction(temp0);
      }
    else
      {
      op->vtkColorTransferFunctionItem::SetColorTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  vtkColorTransferFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorTransferFunction();
      }
    else
      {
      tempr = op->vtkColorTransferFunctionItem::GetColorTransferFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkColorTransferFunctionItem_Methods[] = {
  {(char*)"GetClassName", PyvtkColorTransferFunctionItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorTransferFunctionItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorTransferFunctionItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkColorTransferFunctionItem\nC++: vtkColorTransferFunctionItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorTransferFunctionItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorTransferFunctionItem\nC++: vtkColorTransferFunctionItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkColorTransferFunctionItem_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nReimplemented to return the range of the lookup table\n"},
  {(char*)"SetColorTransferFunction", PyvtkColorTransferFunctionItem_SetColorTransferFunction, 1,
   (char*)"V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: void SetColorTransferFunction(vtkColorTransferFunction *t)\n\n"},
  {(char*)"GetColorTransferFunction", PyvtkColorTransferFunctionItem_GetColorTransferFunction, 1,
   (char*)"V.GetColorTransferFunction() -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetColorTransferFunction()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorTransferFunctionItem_StaticNew()
{
  return vtkColorTransferFunctionItem::New();
}

PyObject *PyVTKClass_vtkColorTransferFunctionItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorTransferFunctionItem_StaticNew,
    PyvtkColorTransferFunctionItem_Methods,
    "vtkColorTransferFunctionItem", modulename,
    NULL, NULL,
    PyvtkColorTransferFunctionItem_Doc(),
    PyVTKClass_vtkScalarsToColorsItemNew(modulename));
  return cls;
}

const char **PyvtkColorTransferFunctionItem_Doc()
{
  static const char *docstring[] = {
    "vtkColorTransferFunctionItem - no description provided.\n\n",
    "Superclass: vtkScalarsToColorsItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorTransferFunctionItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorTransferFunctionItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorTransferFunctionItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

