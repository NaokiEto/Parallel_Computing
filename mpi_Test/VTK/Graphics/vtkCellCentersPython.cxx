// python wrapper for vtkCellCenters
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
#include "vtkCellCenters.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellCenters(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellCenters(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellCentersNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellCentersNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCellCenters_Doc();


static PyObject *
PyvtkCellCenters_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

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
      tempr = op->vtkCellCenters::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

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
      tempr = op->vtkCellCenters::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  vtkCellCenters *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCellCenters::NewInstance();
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
PyvtkCellCenters_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCellCenters *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCellCenters::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_SetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexCells(temp0);
      }
    else
      {
      op->vtkCellCenters::SetVertexCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_GetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertexCells();
      }
    else
      {
      tempr = op->vtkCellCenters::GetVertexCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_VertexCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexCellsOn();
      }
    else
      {
      op->vtkCellCenters::VertexCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenters_VertexCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenters *op = static_cast<vtkCellCenters *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VertexCellsOff();
      }
    else
      {
      op->vtkCellCenters::VertexCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCellCenters_Methods[] = {
  {(char*)"GetClassName", PyvtkCellCenters_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellCenters_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellCenters_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCellCenters\nC++: vtkCellCenters *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellCenters_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellCenters\nC++: vtkCellCenters *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVertexCells", PyvtkCellCenters_SetVertexCells, 1,
   (char*)"V.SetVertexCells(int)\nC++: void SetVertexCells(int a)\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {(char*)"GetVertexCells", PyvtkCellCenters_GetVertexCells, 1,
   (char*)"V.GetVertexCells() -> int\nC++: int GetVertexCells()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {(char*)"VertexCellsOn", PyvtkCellCenters_VertexCellsOn, 1,
   (char*)"V.VertexCellsOn()\nC++: void VertexCellsOn()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {(char*)"VertexCellsOff", PyvtkCellCenters_VertexCellsOff, 1,
   (char*)"V.VertexCellsOff()\nC++: void VertexCellsOff()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellCenters_StaticNew()
{
  return vtkCellCenters::New();
}

PyObject *PyVTKClass_vtkCellCentersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellCenters_StaticNew,
    PyvtkCellCenters_Methods,
    "vtkCellCenters", modulename,
    NULL, NULL,
    PyvtkCellCenters_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCellCenters_Doc()
{
  static const char *docstring[] = {
    "vtkCellCenters - generate points at center of cells\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCellCenters is a filter that takes as input any dataset and\ngenerates on output points at the center of the cells in the dataset.\nThese points can be used for placing glyphs (vtkGlyph3D) or labeling\n(vtkLabeledDataMapper). (The center is the parametric center of the\ncell, not necessarily the geometric or bounding box center.) The cell\nattributes will be associated with the points on output.\n\nCa",
    "veats:\n\nYou can choose to generate just points or points and vertex cells.\nVertex cells are drawn during rendering; points are not. Use the ivar\nVertexCells to generate cells.\n\nSee Also:\n\nvtkGlyph3D vtkLabeledDataMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellCenters(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellCentersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellCenters", o) != 0)
    {
    Py_DECREF(o);
    }

}

