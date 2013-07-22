// python wrapper for vtkTreeRingToPolyData
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
#include "vtkTreeRingToPolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeRingToPolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeRingToPolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeRingToPolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeRingToPolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTreeRingToPolyData_Doc();


static PyObject *
PyvtkTreeRingToPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingToPolyData *op = static_cast<vtkTreeRingToPolyData *>(vp);

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
      tempr = op->vtkTreeRingToPolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingToPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingToPolyData *op = static_cast<vtkTreeRingToPolyData *>(vp);

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
      tempr = op->vtkTreeRingToPolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingToPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingToPolyData *op = static_cast<vtkTreeRingToPolyData *>(vp);

  vtkTreeRingToPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeRingToPolyData::NewInstance();
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
PyvtkTreeRingToPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeRingToPolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeRingToPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingToPolyData_SetSectorsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSectorsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingToPolyData *op = static_cast<vtkTreeRingToPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSectorsArrayName(temp0);
      }
    else
      {
      op->vtkTreeRingToPolyData::SetSectorsArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingToPolyData_SetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingToPolyData *op = static_cast<vtkTreeRingToPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShrinkPercentage(temp0);
      }
    else
      {
      op->vtkTreeRingToPolyData::SetShrinkPercentage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingToPolyData_GetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingToPolyData *op = static_cast<vtkTreeRingToPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkPercentage();
      }
    else
      {
      tempr = op->vtkTreeRingToPolyData::GetShrinkPercentage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingToPolyData_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingToPolyData *op = static_cast<vtkTreeRingToPolyData *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->FillInputPortInformation(temp0, temp1);
      }
    else
      {
      tempr = op->vtkTreeRingToPolyData::FillInputPortInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeRingToPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeRingToPolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeRingToPolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeRingToPolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeRingToPolyData\nC++: vtkTreeRingToPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeRingToPolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeRingToPolyData\nC++: vtkTreeRingToPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSectorsArrayName", PyvtkTreeRingToPolyData_SetSectorsArrayName, 1,
   (char*)"V.SetSectorsArrayName(string)\nC++: virtual void SetSectorsArrayName(const char *name)\n\nThe field containing quadruples of the form (start angle, end\nangle, inner radius, outer radius) representing the bounds of the\nrectangles for each vertex. This field may be added to the tree\nusing vtkTreeRingLayout. This array must be set.\n"},
  {(char*)"SetShrinkPercentage", PyvtkTreeRingToPolyData_SetShrinkPercentage, 1,
   (char*)"V.SetShrinkPercentage(float)\nC++: void SetShrinkPercentage(double a)\n\nDefine a shrink percentage for each of the sectors.\n"},
  {(char*)"GetShrinkPercentage", PyvtkTreeRingToPolyData_GetShrinkPercentage, 1,
   (char*)"V.GetShrinkPercentage() -> float\nC++: double GetShrinkPercentage()\n\nDefine a shrink percentage for each of the sectors.\n"},
  {(char*)"FillInputPortInformation", PyvtkTreeRingToPolyData_FillInputPortInformation, 1,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeRingToPolyData_StaticNew()
{
  return vtkTreeRingToPolyData::New();
}

PyObject *PyVTKClass_vtkTreeRingToPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeRingToPolyData_StaticNew,
    PyvtkTreeRingToPolyData_Methods,
    "vtkTreeRingToPolyData", modulename,
    NULL, NULL,
    PyvtkTreeRingToPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTreeRingToPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkTreeRingToPolyData - converts a tree to a polygonal data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This algorithm requires that the vtkTreeRingLayout filter has already\nbeen applied to the data in order to create the quadruple array\n(start angle, end angle, inner radius, outer radius) of bounds for\neach vertex of the tree.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeRingToPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeRingToPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeRingToPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

