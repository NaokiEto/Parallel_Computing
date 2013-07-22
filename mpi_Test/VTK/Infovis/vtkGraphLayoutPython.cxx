// python wrapper for vtkGraphLayout
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
#include "vtkGraphLayout.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphLayout(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphLayout(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphLayoutNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkGraphLayout_Doc();


static PyObject *
PyvtkGraphLayout_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

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
      tempr = op->vtkGraphLayout::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

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
      tempr = op->vtkGraphLayout::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  vtkGraphLayout *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphLayout::NewInstance();
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
PyvtkGraphLayout_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphLayout *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  vtkGraphLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraphLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkGraphLayout::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  vtkGraphLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayoutStrategy();
      }
    else
      {
      tempr = op->vtkGraphLayout::GetLayoutStrategy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLayoutComplete();
      }
    else
      {
      tempr = op->vtkGraphLayout::IsLayoutComplete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

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
      tempr = op->vtkGraphLayout::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetZRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZRange();
      }
    else
      {
      tempr = op->vtkGraphLayout::GetZRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_SetZRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZRange(temp0);
      }
    else
      {
      op->vtkGraphLayout::SetZRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkGraphLayout::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkGraphLayout::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_SetUseTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseTransform(temp0);
      }
    else
      {
      op->vtkGraphLayout::SetUseTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetUseTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseTransform();
      }
    else
      {
      tempr = op->vtkGraphLayout::GetUseTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_UseTransformOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransformOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseTransformOn();
      }
    else
      {
      op->vtkGraphLayout::UseTransformOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayout_UseTransformOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransformOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseTransformOff();
      }
    else
      {
      op->vtkGraphLayout::UseTransformOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphLayout_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphLayout_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphLayout_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphLayout_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphLayout\nC++: vtkGraphLayout *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphLayout_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphLayout\nC++: vtkGraphLayout *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLayoutStrategy", PyvtkGraphLayout_SetLayoutStrategy, 1,
   (char*)"V.SetLayoutStrategy(vtkGraphLayoutStrategy)\nC++: void SetLayoutStrategy(vtkGraphLayoutStrategy *strategy)\n\nThe layout strategy to use during graph layout.\n"},
  {(char*)"GetLayoutStrategy", PyvtkGraphLayout_GetLayoutStrategy, 1,
   (char*)"V.GetLayoutStrategy() -> vtkGraphLayoutStrategy\nC++: vtkGraphLayoutStrategy *GetLayoutStrategy()\n\nThe layout strategy to use during graph layout.\n"},
  {(char*)"IsLayoutComplete", PyvtkGraphLayout_IsLayoutComplete, 1,
   (char*)"V.IsLayoutComplete() -> int\nC++: virtual int IsLayoutComplete()\n\nAsk the layout algorithm if the layout is complete\n"},
  {(char*)"GetMTime", PyvtkGraphLayout_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the modification time of the layout algorithm.\n"},
  {(char*)"GetZRange", PyvtkGraphLayout_GetZRange, 1,
   (char*)"V.GetZRange() -> float\nC++: double GetZRange()\n\nSet the ZRange for the output data. If the initial layout is\nplanar (i.e. all z coordinates are zero), the coordinates will be\nevenly spaced from 0.0 to ZRange. The default is zero, which has\nno effect.\n"},
  {(char*)"SetZRange", PyvtkGraphLayout_SetZRange, 1,
   (char*)"V.SetZRange(float)\nC++: void SetZRange(double a)\n\nSet the ZRange for the output data. If the initial layout is\nplanar (i.e. all z coordinates are zero), the coordinates will be\nevenly spaced from 0.0 to ZRange. The default is zero, which has\nno effect.\n"},
  {(char*)"GetTransform", PyvtkGraphLayout_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransform()\n\nTransform the graph vertices after the layout.\n"},
  {(char*)"SetTransform", PyvtkGraphLayout_SetTransform, 1,
   (char*)"V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *t)\n\nTransform the graph vertices after the layout.\n"},
  {(char*)"SetUseTransform", PyvtkGraphLayout_SetUseTransform, 1,
   (char*)"V.SetUseTransform(bool)\nC++: void SetUseTransform(bool a)\n\nWhether to use the specified transform after layout.\n"},
  {(char*)"GetUseTransform", PyvtkGraphLayout_GetUseTransform, 1,
   (char*)"V.GetUseTransform() -> bool\nC++: bool GetUseTransform()\n\nWhether to use the specified transform after layout.\n"},
  {(char*)"UseTransformOn", PyvtkGraphLayout_UseTransformOn, 1,
   (char*)"V.UseTransformOn()\nC++: void UseTransformOn()\n\nWhether to use the specified transform after layout.\n"},
  {(char*)"UseTransformOff", PyvtkGraphLayout_UseTransformOff, 1,
   (char*)"V.UseTransformOff()\nC++: void UseTransformOff()\n\nWhether to use the specified transform after layout.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphLayout_StaticNew()
{
  return vtkGraphLayout::New();
}

PyObject *PyVTKClass_vtkGraphLayoutNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphLayout_StaticNew,
    PyvtkGraphLayout_Methods,
    "vtkGraphLayout", modulename,
    NULL, NULL,
    PyvtkGraphLayout_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGraphLayout_Doc()
{
  static const char *docstring[] = {
    "vtkGraphLayout - layout a graph in 2 or 3 dimensions\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "This class is a shell for many graph layout strategies which may be\nset using the SetLayoutStrategy() function.  The layout strategies do\nthe actual work.\n\n.SECION Thanks Thanks to Brian Wylie from Sandia National\nLaboratories for adding incremental layout capabilities.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphLayout(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphLayoutNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphLayout", o) != 0)
    {
    Py_DECREF(o);
    }

}

