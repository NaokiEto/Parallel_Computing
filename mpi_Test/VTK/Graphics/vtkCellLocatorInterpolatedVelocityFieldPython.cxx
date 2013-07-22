// python wrapper for vtkCellLocatorInterpolatedVelocityField
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
#include "vtkCellLocatorInterpolatedVelocityField.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellLocatorInterpolatedVelocityFieldNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellLocatorInterpolatedVelocityFieldNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew
extern "C" { PyObject *PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew
#endif

static const char **PyvtkCellLocatorInterpolatedVelocityField_Doc();


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkCellLocatorInterpolatedVelocityField::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

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
      tempr = op->vtkCellLocatorInterpolatedVelocityField::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkCellLocatorInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCellLocatorInterpolatedVelocityField::NewInstance();
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
PyvtkCellLocatorInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCellLocatorInterpolatedVelocityField *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCellLocatorInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_GetLastCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkAbstractCellLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastCellLocator();
      }
    else
      {
      tempr = op->vtkCellLocatorInterpolatedVelocityField::GetLastCellLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_GetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkAbstractCellLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellLocatorPrototype();
      }
    else
      {
      tempr = op->vtkCellLocatorInterpolatedVelocityField::GetCellLocatorPrototype();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkAbstractCellLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
    {
    if (ap.IsBound())
      {
      op->SetCellLocatorPrototype(temp0);
      }
    else
      {
      op->vtkCellLocatorInterpolatedVelocityField::SetCellLocatorPrototype(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
    {
    if (ap.IsBound())
      {
      op->CopyParameters(temp0);
      }
    else
      {
      op->vtkCellLocatorInterpolatedVelocityField::CopyParameters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->AddDataSet(temp0);
      }
    else
      {
      op->vtkCellLocatorInterpolatedVelocityField::AddDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLastCellId(temp0, temp1);
      }
    else
      {
      op->vtkCellLocatorInterpolatedVelocityField::SetLastCellId(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLastCellId(temp0);
      }
    else
      {
      op->vtkCellLocatorInterpolatedVelocityField::SetLastCellId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 1:
      return PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return NULL;
}


static PyMethodDef PyvtkCellLocatorInterpolatedVelocityField_Methods[] = {
  {(char*)"GetClassName", PyvtkCellLocatorInterpolatedVelocityField_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellLocatorInterpolatedVelocityField_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellLocatorInterpolatedVelocityField_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCellLocatorInterpolatedVelocityField\nC++: vtkCellLocatorInterpolatedVelocityField *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellLocatorInterpolatedVelocityField_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkCellLocatorInterpolatedVelocityField\nC++: vtkCellLocatorInterpolatedVelocityField *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetLastCellLocator", PyvtkCellLocatorInterpolatedVelocityField_GetLastCellLocator, 1,
   (char*)"V.GetLastCellLocator() -> vtkAbstractCellLocator\nC++: vtkAbstractCellLocator *GetLastCellLocator()\n\nGet the cell locator attached to the most recently visited\ndataset.\n"},
  {(char*)"GetCellLocatorPrototype", PyvtkCellLocatorInterpolatedVelocityField_GetCellLocatorPrototype, 1,
   (char*)"V.GetCellLocatorPrototype() -> vtkAbstractCellLocator\nC++: vtkAbstractCellLocator *GetCellLocatorPrototype()\n\nGet the prototype of the cell locator that is used for\ninterpolating the velocity field during integration.\n"},
  {(char*)"SetCellLocatorPrototype", PyvtkCellLocatorInterpolatedVelocityField_SetCellLocatorPrototype, 1,
   (char*)"V.SetCellLocatorPrototype(vtkAbstractCellLocator)\nC++: void SetCellLocatorPrototype(\n    vtkAbstractCellLocator *prototype)\n\nSet a prototype of the cell locator that is used for\ninterpolating the velocity field during integration.\n"},
  {(char*)"CopyParameters", PyvtkCellLocatorInterpolatedVelocityField_CopyParameters, 1,
   (char*)"V.CopyParameters(vtkAbstractInterpolatedVelocityField)\nC++: virtual void CopyParameters(\n    vtkAbstractInterpolatedVelocityField *from)\n\nImport parameters. Sub-classes can add more after chaining.\n"},
  {(char*)"AddDataSet", PyvtkCellLocatorInterpolatedVelocityField_AddDataSet, 1,
   (char*)"V.AddDataSet(vtkDataSet)\nC++: virtual void AddDataSet(vtkDataSet *dataset)\n\nAdd a dataset coupled with a cell locator (of type\nvtkAbstractCellLocator) for vector function evaluation. Note the\nuse of a vtkAbstractCellLocator enables robust cell location. If\nmore than one dataset is added, the evaluation point is searched\nin all until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.\n"},
  {(char*)"SetLastCellId", PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId, 1,
   (char*)"V.SetLastCellId(int, int)\nC++: virtual void SetLastCellId(vtkIdType c, int dataindex)\nV.SetLastCellId(int)\nC++: virtual void SetLastCellId(vtkIdType c)\n\nSet the cell id cached by the last evaluation within a specified\ndataset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellLocatorInterpolatedVelocityField_StaticNew()
{
  return vtkCellLocatorInterpolatedVelocityField::New();
}

PyObject *PyVTKClass_vtkCellLocatorInterpolatedVelocityFieldNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellLocatorInterpolatedVelocityField_StaticNew,
    PyvtkCellLocatorInterpolatedVelocityField_Methods,
    "vtkCellLocatorInterpolatedVelocityField", modulename,
    NULL, NULL,
    PyvtkCellLocatorInterpolatedVelocityField_Doc(),
    PyVTKClass_vtkAbstractInterpolatedVelocityFieldNew(modulename));
  return cls;
}

const char **PyvtkCellLocatorInterpolatedVelocityField_Doc()
{
  static const char *docstring[] = {
    "vtkCellLocatorInterpolatedVelocityField - A concrete class for\n\n",
    "Superclass: vtkAbstractInterpolatedVelocityField\n\n",
    "vtkCellLocatorInterpolatedVelocityField acts as a continuous velocity\n field via cell interpolation on a vtkDataSet,\nNumberOfIndependentVariables\n = 4 (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). As a concrete\nsub-class\n of vtkAbstractInterpolatedVelocityField, it adopts\nvtkAbstractCellLocator's\n sub-classes, e.g., vtkCellLocator and vtkModifiedBSPTree, without\nthe use\n of vtkPointLocator ( employ",
    "ed by vtkDataSet/vtkPointSet::FindCell()\nin\n vtkInterpolatedVelocityField ).\nvtkCellLocatorInterpolatedVelocityField\n adopts one level of cell caching. Specifically, if the next point is\nstill\n within the previous cell, cell location is then simply skipped and\nvtkCell::\n EvaluatePosition() is called to obtain the new parametric\ncoordinates and\n weights that are used to interpolate the velocity fun",
    "ction values\nacross the\n vertices of this cell. Otherwise a global cell (the target\ncontaining the next\n point) location is instead directly invoked, without exploiting the\nclue that\n vtkInterpolatedVelocityField makes use of from the previous cell (an\nimmediate\n neighbor). Although ignoring the neighbor cell may incur a\nrelatively high\n computational cost, vtkCellLocatorInterpolatedVelocityField ",
    "is more\nrobust in\n locating the target cell than its sibling class\nvtkInterpolatedVelocityField.\n\nCaveats:\n\n\n vtkCellLocatorInterpolatedVelocityField is not thread safe. A new\ninstance\n should be created by each thread.\n\nSee Also:\n\n\n vtkAbstractInterpolatedVelocityField vtkInterpolatedVelocityField\n vtkGenericInterpolatedVelocityField\nvtkCachingInterpolatedVelocityField\n vtkTemporalInterpolatedVel",
    "ocityField vtkFunctionSet vtkStreamer\nvtkStreamTracer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellLocatorInterpolatedVelocityFieldNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellLocatorInterpolatedVelocityField", o) != 0)
    {
    Py_DECREF(o);
    }

}

