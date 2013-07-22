// python wrapper for vtkCompositeControlPointsItem
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
#include "vtkCompositeControlPointsItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositeControlPointsItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositeControlPointsItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositeControlPointsItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositeControlPointsItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkColorTransferControlPointsItemNew
extern "C" { PyObject *PyVTKClass_vtkColorTransferControlPointsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkColorTransferControlPointsItemNew
#endif

static const char **PyvtkCompositeControlPointsItem_Doc();


static PyObject *
PyvtkCompositeControlPointsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

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
      tempr = op->vtkCompositeControlPointsItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

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
      tempr = op->vtkCompositeControlPointsItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkCompositeControlPointsItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositeControlPointsItem::NewInstance();
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
PyvtkCompositeControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositeControlPointsItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositeControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

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
      op->vtkCompositeControlPointsItem::SetColorTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

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
      op->vtkCompositeControlPointsItem::SetOpacityFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

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
      tempr = op->vtkCompositeControlPointsItem::GetOpacityFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeControlPointsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeControlPointsItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeControlPointsItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeControlPointsItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositeControlPointsItem\nC++: vtkCompositeControlPointsItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeControlPointsItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeControlPointsItem\nC++: vtkCompositeControlPointsItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorTransferFunction", PyvtkCompositeControlPointsItem_SetColorTransferFunction, 1,
   (char*)"V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: virtual void SetColorTransferFunction(\n    vtkColorTransferFunction *function)\n\nSet the color transfer function to draw its points\n"},
  {(char*)"SetOpacityFunction", PyvtkCompositeControlPointsItem_SetOpacityFunction, 1,
   (char*)"V.SetOpacityFunction(vtkPiecewiseFunction)\nC++: void SetOpacityFunction(vtkPiecewiseFunction *opacity)\n\n"},
  {(char*)"GetOpacityFunction", PyvtkCompositeControlPointsItem_GetOpacityFunction, 1,
   (char*)"V.GetOpacityFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetOpacityFunction()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeControlPointsItem_StaticNew()
{
  return vtkCompositeControlPointsItem::New();
}

PyObject *PyVTKClass_vtkCompositeControlPointsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeControlPointsItem_StaticNew,
    PyvtkCompositeControlPointsItem_Methods,
    "vtkCompositeControlPointsItem", modulename,
    NULL, NULL,
    PyvtkCompositeControlPointsItem_Doc(),
    PyVTKClass_vtkColorTransferControlPointsItemNew(modulename));
  return cls;
}

const char **PyvtkCompositeControlPointsItem_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeControlPointsItem - Control points for\n\n",
    "Superclass: vtkColorTransferControlPointsItem\n\n",
    "vtkCompositeControlPointsItem draws the control points of a\nvtkPiecewiseFunction and a vtkColorTransferFunction.\n\nSee Also:\n\nvtkControlPointsItem vtkColorTransferControlPointsItem\nvtkCompositeTransferFunctionItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeControlPointsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeControlPointsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeControlPointsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

