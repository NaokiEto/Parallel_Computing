// python wrapper for vtkReverseSense
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
#include "vtkReverseSense.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkReverseSense(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkReverseSense(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkReverseSenseNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkReverseSenseNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkReverseSense_Doc();


static PyObject *
PyvtkReverseSense_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

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
      tempr = op->vtkReverseSense::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

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
      tempr = op->vtkReverseSense::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  vtkReverseSense *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkReverseSense::NewInstance();
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
PyvtkReverseSense_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkReverseSense *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkReverseSense::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_SetReverseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseCells(temp0);
      }
    else
      {
      op->vtkReverseSense::SetReverseCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_GetReverseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseCells();
      }
    else
      {
      tempr = op->vtkReverseSense::GetReverseCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseCellsOn();
      }
    else
      {
      op->vtkReverseSense::ReverseCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseCellsOff();
      }
    else
      {
      op->vtkReverseSense::ReverseCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_SetReverseNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseNormals(temp0);
      }
    else
      {
      op->vtkReverseSense::SetReverseNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_GetReverseNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseNormals();
      }
    else
      {
      tempr = op->vtkReverseSense::GetReverseNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseNormalsOn();
      }
    else
      {
      op->vtkReverseSense::ReverseNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseNormalsOff();
      }
    else
      {
      op->vtkReverseSense::ReverseNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkReverseSense_Methods[] = {
  {(char*)"GetClassName", PyvtkReverseSense_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReverseSense_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReverseSense_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkReverseSense\nC++: vtkReverseSense *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReverseSense_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReverseSense\nC++: vtkReverseSense *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetReverseCells", PyvtkReverseSense_SetReverseCells, 1,
   (char*)"V.SetReverseCells(int)\nC++: void SetReverseCells(int a)\n\nFlag controls whether to reverse cell ordering.\n"},
  {(char*)"GetReverseCells", PyvtkReverseSense_GetReverseCells, 1,
   (char*)"V.GetReverseCells() -> int\nC++: int GetReverseCells()\n\nFlag controls whether to reverse cell ordering.\n"},
  {(char*)"ReverseCellsOn", PyvtkReverseSense_ReverseCellsOn, 1,
   (char*)"V.ReverseCellsOn()\nC++: void ReverseCellsOn()\n\nFlag controls whether to reverse cell ordering.\n"},
  {(char*)"ReverseCellsOff", PyvtkReverseSense_ReverseCellsOff, 1,
   (char*)"V.ReverseCellsOff()\nC++: void ReverseCellsOff()\n\nFlag controls whether to reverse cell ordering.\n"},
  {(char*)"SetReverseNormals", PyvtkReverseSense_SetReverseNormals, 1,
   (char*)"V.SetReverseNormals(int)\nC++: void SetReverseNormals(int a)\n\nFlag controls whether to reverse normal orientation.\n"},
  {(char*)"GetReverseNormals", PyvtkReverseSense_GetReverseNormals, 1,
   (char*)"V.GetReverseNormals() -> int\nC++: int GetReverseNormals()\n\nFlag controls whether to reverse normal orientation.\n"},
  {(char*)"ReverseNormalsOn", PyvtkReverseSense_ReverseNormalsOn, 1,
   (char*)"V.ReverseNormalsOn()\nC++: void ReverseNormalsOn()\n\nFlag controls whether to reverse normal orientation.\n"},
  {(char*)"ReverseNormalsOff", PyvtkReverseSense_ReverseNormalsOff, 1,
   (char*)"V.ReverseNormalsOff()\nC++: void ReverseNormalsOff()\n\nFlag controls whether to reverse normal orientation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReverseSense_StaticNew()
{
  return vtkReverseSense::New();
}

PyObject *PyVTKClass_vtkReverseSenseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReverseSense_StaticNew,
    PyvtkReverseSense_Methods,
    "vtkReverseSense", modulename,
    NULL, NULL,
    PyvtkReverseSense_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkReverseSense_Doc()
{
  static const char *docstring[] = {
    "vtkReverseSense - reverse the ordering of polygonal cells and/or\nvertex normals\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkReverseSense is a filter that reverses the order of polygonal\ncells and/or reverses the direction of point and cell normals. Two\nflags are used to control these operations. Cell reversal means\nreversing the order of indices in the cell connectivity list. Normal\nreversal means multiplying the normal vector by -1 (both point and\ncell normals, if present).\n\nCaveats:\n\nNormals can be operated on onl",
    "y if they are present in the data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReverseSense(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReverseSenseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReverseSense", o) != 0)
    {
    Py_DECREF(o);
    }

}

