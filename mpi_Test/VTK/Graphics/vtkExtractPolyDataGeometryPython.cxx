// python wrapper for vtkExtractPolyDataGeometry
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
#include "vtkExtractPolyDataGeometry.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractPolyDataGeometry(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractPolyDataGeometry(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractPolyDataGeometryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractPolyDataGeometryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkExtractPolyDataGeometry_Doc();


static PyObject *
PyvtkExtractPolyDataGeometry_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

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
      tempr = op->vtkExtractPolyDataGeometry::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

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
      tempr = op->vtkExtractPolyDataGeometry::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  vtkExtractPolyDataGeometry *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractPolyDataGeometry::NewInstance();
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
PyvtkExtractPolyDataGeometry_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractPolyDataGeometry *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractPolyDataGeometry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

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
      tempr = op->vtkExtractPolyDataGeometry::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetImplicitFunction(temp0);
      }
    else
      {
      op->vtkExtractPolyDataGeometry::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImplicitFunction();
      }
    else
      {
      tempr = op->vtkExtractPolyDataGeometry::GetImplicitFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractInside(temp0);
      }
    else
      {
      op->vtkExtractPolyDataGeometry::SetExtractInside(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractInside();
      }
    else
      {
      tempr = op->vtkExtractPolyDataGeometry::GetExtractInside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractInsideOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractInsideOn();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::ExtractInsideOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractInsideOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractInsideOff();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::ExtractInsideOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractBoundaryCells(temp0);
      }
    else
      {
      op->vtkExtractPolyDataGeometry::SetExtractBoundaryCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractBoundaryCells();
      }
    else
      {
      tempr = op->vtkExtractPolyDataGeometry::GetExtractBoundaryCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractBoundaryCellsOn();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::ExtractBoundaryCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractBoundaryCellsOff();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::ExtractBoundaryCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractPolyDataGeometry_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractPolyDataGeometry_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractPolyDataGeometry_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractPolyDataGeometry_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractPolyDataGeometry\nC++: vtkExtractPolyDataGeometry *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractPolyDataGeometry_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractPolyDataGeometry\nC++: vtkExtractPolyDataGeometry *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkExtractPolyDataGeometry_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime taking into account changes to the implicit\nfunction\n"},
  {(char*)"SetImplicitFunction", PyvtkExtractPolyDataGeometry_SetImplicitFunction, 1,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function for inside/outside checks.\n"},
  {(char*)"GetImplicitFunction", PyvtkExtractPolyDataGeometry_GetImplicitFunction, 1,
   (char*)"V.GetImplicitFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function for inside/outside checks.\n"},
  {(char*)"SetExtractInside", PyvtkExtractPolyDataGeometry_SetExtractInside, 1,
   (char*)"V.SetExtractInside(int)\nC++: void SetExtractInside(int a)\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"GetExtractInside", PyvtkExtractPolyDataGeometry_GetExtractInside, 1,
   (char*)"V.GetExtractInside() -> int\nC++: int GetExtractInside()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"ExtractInsideOn", PyvtkExtractPolyDataGeometry_ExtractInsideOn, 1,
   (char*)"V.ExtractInsideOn()\nC++: void ExtractInsideOn()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"ExtractInsideOff", PyvtkExtractPolyDataGeometry_ExtractInsideOff, 1,
   (char*)"V.ExtractInsideOff()\nC++: void ExtractInsideOff()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"SetExtractBoundaryCells", PyvtkExtractPolyDataGeometry_SetExtractBoundaryCells, 1,
   (char*)"V.SetExtractBoundaryCells(int)\nC++: void SetExtractBoundaryCells(int a)\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"GetExtractBoundaryCells", PyvtkExtractPolyDataGeometry_GetExtractBoundaryCells, 1,
   (char*)"V.GetExtractBoundaryCells() -> int\nC++: int GetExtractBoundaryCells()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"ExtractBoundaryCellsOn", PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOn, 1,
   (char*)"V.ExtractBoundaryCellsOn()\nC++: void ExtractBoundaryCellsOn()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"ExtractBoundaryCellsOff", PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOff, 1,
   (char*)"V.ExtractBoundaryCellsOff()\nC++: void ExtractBoundaryCellsOff()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractPolyDataGeometry_StaticNew()
{
  return vtkExtractPolyDataGeometry::New();
}

PyObject *PyVTKClass_vtkExtractPolyDataGeometryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractPolyDataGeometry_StaticNew,
    PyvtkExtractPolyDataGeometry_Methods,
    "vtkExtractPolyDataGeometry", modulename,
    NULL, NULL,
    PyvtkExtractPolyDataGeometry_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractPolyDataGeometry_Doc()
{
  static const char *docstring[] = {
    "vtkExtractPolyDataGeometry - extract vtkPolyData cells that lies\neither entirely inside or outside of a specified implicit function\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkExtractPolyDataGeometry extracts from its input vtkPolyData all\ncells that are either completely inside or outside of a specified\nimplicit function. This filter is specialized to vtkPolyData. On\noutput the filter generates vtkPolyData.\n\nTo use this filter you must specify an implicit function. You must\nalso specify whether to extract cells lying inside or outside of the\nimplicit function. (The ",
    "inside of an implicit function is the\nnegative values region.) An option exists to extract cells that are\nneither inside nor outside (i.e., boundary).\n\nA more general version of this filter is available for arbitrary\nvtkDataSet input (see vtkExtractGeometry).\n\nSee Also:\n\nvtkExtractGeometry vtkClipPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractPolyDataGeometry(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractPolyDataGeometryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractPolyDataGeometry", o) != 0)
    {
    Py_DECREF(o);
    }

}

