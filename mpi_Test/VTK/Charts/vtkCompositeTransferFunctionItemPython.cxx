// python wrapper for vtkCompositeTransferFunctionItem
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
#include "vtkCompositeTransferFunctionItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositeTransferFunctionItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositeTransferFunctionItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositeTransferFunctionItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositeTransferFunctionItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkColorTransferFunctionItemNew
extern "C" { PyObject *PyVTKClass_vtkColorTransferFunctionItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkColorTransferFunctionItemNew
#endif

static const char **PyvtkCompositeTransferFunctionItem_Doc();


static PyObject *
PyvtkCompositeTransferFunctionItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

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
      tempr = op->vtkCompositeTransferFunctionItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

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
      tempr = op->vtkCompositeTransferFunctionItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  vtkCompositeTransferFunctionItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositeTransferFunctionItem::NewInstance();
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
PyvtkCompositeTransferFunctionItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositeTransferFunctionItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositeTransferFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

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
      op->vtkCompositeTransferFunctionItem::GetBounds(temp0);
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
PyvtkCompositeTransferFunctionItem_SetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetOpacityFunction(temp0);
      }
    else
      {
      op->vtkCompositeTransferFunctionItem::SetOpacityFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_GetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacityFunction();
      }
    else
      {
      tempr = op->vtkCompositeTransferFunctionItem::GetOpacityFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeTransferFunctionItem_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeTransferFunctionItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeTransferFunctionItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeTransferFunctionItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositeTransferFunctionItem\nC++: vtkCompositeTransferFunctionItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeTransferFunctionItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeTransferFunctionItem\nC++: vtkCompositeTransferFunctionItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkCompositeTransferFunctionItem_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nReimplemented to return the range of the piecewise function\n"},
  {(char*)"SetOpacityFunction", PyvtkCompositeTransferFunctionItem_SetOpacityFunction, 1,
   (char*)"V.SetOpacityFunction(vtkPiecewiseFunction)\nC++: void SetOpacityFunction(vtkPiecewiseFunction *opacity)\n\n"},
  {(char*)"GetOpacityFunction", PyvtkCompositeTransferFunctionItem_GetOpacityFunction, 1,
   (char*)"V.GetOpacityFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetOpacityFunction()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeTransferFunctionItem_StaticNew()
{
  return vtkCompositeTransferFunctionItem::New();
}

PyObject *PyVTKClass_vtkCompositeTransferFunctionItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeTransferFunctionItem_StaticNew,
    PyvtkCompositeTransferFunctionItem_Methods,
    "vtkCompositeTransferFunctionItem", modulename,
    NULL, NULL,
    PyvtkCompositeTransferFunctionItem_Doc(),
    PyVTKClass_vtkColorTransferFunctionItemNew(modulename));
  return cls;
}

const char **PyvtkCompositeTransferFunctionItem_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeTransferFunctionItem - no description provided.\n\n",
    "Superclass: vtkColorTransferFunctionItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeTransferFunctionItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeTransferFunctionItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeTransferFunctionItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

