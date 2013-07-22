// python wrapper for vtkDataSetEdgeSubdivisionCriterion
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
#include "vtkDataSetEdgeSubdivisionCriterion.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetEdgeSubdivisionCriterionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetEdgeSubdivisionCriterionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkEdgeSubdivisionCriterionNew
extern "C" { PyObject *PyVTKClass_vtkEdgeSubdivisionCriterionNew(const char *); }
#define DECLARED_PyVTKClass_vtkEdgeSubdivisionCriterionNew
#endif

static const char **PyvtkDataSetEdgeSubdivisionCriterion_Doc();


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

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
      tempr = op->vtkDataSetEdgeSubdivisionCriterion::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

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
      tempr = op->vtkDataSetEdgeSubdivisionCriterion::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkDataSetEdgeSubdivisionCriterion *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetEdgeSubdivisionCriterion::NewInstance();
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
PyvtkDataSetEdgeSubdivisionCriterion_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataSetEdgeSubdivisionCriterion *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataSetEdgeSubdivisionCriterion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetMesh(temp0);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::SetMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMesh();
      }
    else
      {
      tempr = op->vtkDataSetEdgeSubdivisionCriterion::GetMesh();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellId(temp0);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::SetCellId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkIdType *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = &op->GetCellId();
      }
    else
      {
      tempr = &op->vtkDataSetEdgeSubdivisionCriterion::GetCellId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkCell *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCell();
      }
    else
      {
      tempr = op->vtkDataSetEdgeSubdivisionCriterion::GetCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetChordError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChordError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChordError2(temp0);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::SetChordError2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetChordError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChordError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChordError2();
      }
    else
      {
      tempr = op->vtkDataSetEdgeSubdivisionCriterion::GetChordError2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFieldError2(temp0, temp1);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::SetFieldError2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldError2(temp0);
      }
    else
      {
      tempr = op->vtkDataSetEdgeSubdivisionCriterion::GetFieldError2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_ResetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetFieldError2();
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::ResetFieldError2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetActiveFieldCriteria(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFieldCriteria");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActiveFieldCriteria();
      }
    else
      {
      tempr = op->vtkDataSetEdgeSubdivisionCriterion::GetActiveFieldCriteria();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetEdgeSubdivisionCriterion_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetEdgeSubdivisionCriterion_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetEdgeSubdivisionCriterion_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetEdgeSubdivisionCriterion_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetEdgeSubdivisionCriterion\nC++: vtkDataSetEdgeSubdivisionCriterion *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetEdgeSubdivisionCriterion_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetEdgeSubdivisionCriterion\nC++: vtkDataSetEdgeSubdivisionCriterion *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetMesh", PyvtkDataSetEdgeSubdivisionCriterion_SetMesh, 1,
   (char*)"V.SetMesh(vtkDataSet)\nC++: virtual void SetMesh(vtkDataSet *)\n\n"},
  {(char*)"GetMesh", PyvtkDataSetEdgeSubdivisionCriterion_GetMesh, 1,
   (char*)"V.GetMesh() -> vtkDataSet\nC++: vtkDataSet *GetMesh()\n\n"},
  {(char*)"SetCellId", PyvtkDataSetEdgeSubdivisionCriterion_SetCellId, 1,
   (char*)"V.SetCellId(int)\nC++: virtual void SetCellId(vtkIdType cell)\n\n"},
  {(char*)"GetCellId", PyvtkDataSetEdgeSubdivisionCriterion_GetCellId, 1,
   (char*)"V.GetCellId() -> int\nC++: vtkIdType &GetCellId()\n\n"},
  {(char*)"GetCell", PyvtkDataSetEdgeSubdivisionCriterion_GetCell, 1,
   (char*)"V.GetCell() -> vtkCell\nC++: vtkCell *GetCell()\n\n"},
  {(char*)"SetChordError2", PyvtkDataSetEdgeSubdivisionCriterion_SetChordError2, 1,
   (char*)"V.SetChordError2(float)\nC++: void SetChordError2(double a)\n\nGet/Set the square of the allowable chord error at any edge's\nmidpoint. This value is used by EvaluateEdge.\n"},
  {(char*)"GetChordError2", PyvtkDataSetEdgeSubdivisionCriterion_GetChordError2, 1,
   (char*)"V.GetChordError2() -> float\nC++: double GetChordError2()\n\nGet/Set the square of the allowable chord error at any edge's\nmidpoint. This value is used by EvaluateEdge.\n"},
  {(char*)"SetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_SetFieldError2, 1,
   (char*)"V.SetFieldError2(int, float)\nC++: virtual void SetFieldError2(int s, double err)\n\nGet/Set the square of the allowable error magnitude for the\nscalar field s at any edge's midpoint. A value less than or equal\nto 0 indicates that the field should not be used as a criterion\nfor subdivision.\n"},
  {(char*)"GetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_GetFieldError2, 1,
   (char*)"V.GetFieldError2(int) -> float\nC++: double GetFieldError2(int s)\n\nGet/Set the square of the allowable error magnitude for the\nscalar field s at any edge's midpoint. A value less than or equal\nto 0 indicates that the field should not be used as a criterion\nfor subdivision.\n"},
  {(char*)"ResetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_ResetFieldError2, 1,
   (char*)"V.ResetFieldError2()\nC++: virtual void ResetFieldError2()\n\nTell the subdivider not to use any field values as subdivision\ncriteria. Effectively calls SetFieldError2( a, -1. ) for all\nfields.\n"},
  {(char*)"GetActiveFieldCriteria", PyvtkDataSetEdgeSubdivisionCriterion_GetActiveFieldCriteria, 1,
   (char*)"V.GetActiveFieldCriteria() -> int\nC++: int GetActiveFieldCriteria()\n\nReturn a bitfield specifying which FieldError2 criteria are\npositive (i.e., actively used to decide edge subdivisions). This\nis stored as separate state to make subdivisions go faster.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetEdgeSubdivisionCriterion_StaticNew()
{
  return vtkDataSetEdgeSubdivisionCriterion::New();
}

PyObject *PyVTKClass_vtkDataSetEdgeSubdivisionCriterionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetEdgeSubdivisionCriterion_StaticNew,
    PyvtkDataSetEdgeSubdivisionCriterion_Methods,
    "vtkDataSetEdgeSubdivisionCriterion", modulename,
    NULL, NULL,
    PyvtkDataSetEdgeSubdivisionCriterion_Doc(),
    PyVTKClass_vtkEdgeSubdivisionCriterionNew(modulename));
  return cls;
}

const char **PyvtkDataSetEdgeSubdivisionCriterion_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetEdgeSubdivisionCriterion - a subclass of\nvtkEdgeSubdivisionCriterion for vtkDataSet objects.\n\n",
    "Superclass: vtkEdgeSubdivisionCriterion\n\n",
    "This is a subclass of vtkEdgeSubdivisionCriterion that is used for\ntessellating cells of a vtkDataSet, particularly nonlinear cells.\n\nIt provides functions for setting the current cell being tessellated\nand a convenience routine, EvaluateFields() to evaluate field values\nat a point. You should call EvaluateFields() from inside\nEvaluateEdge() whenever the result of EvaluateEdge() will be true.\nOthe",
    "rwise, do not call EvaluateFields() as the midpoint is about to\nbe discarded. (Implementor's note</i>: This isn't true if\nUGLY_ASPECT_RATIO_HACK has been defined. But in that case, we don't\nwant the exact field values; we need the linearly interpolated ones\nat the midpoint for continuity.)\n\nSee Also:\n\nvtkEdgeSubdivisionCriterion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetEdgeSubdivisionCriterionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetEdgeSubdivisionCriterion", o) != 0)
    {
    Py_DECREF(o);
    }

}

