// python wrapper for vtkRectilinearGridToTetrahedra
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
#include "vtkRectilinearGridToTetrahedra.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectilinearGridToTetrahedra(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectilinearGridToTetrahedra(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectilinearGridToTetrahedraNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridToTetrahedraNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkRectilinearGridToTetrahedra_Doc();


static PyObject *
PyvtkRectilinearGridToTetrahedra_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

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
      tempr = op->vtkRectilinearGridToTetrahedra::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

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
      tempr = op->vtkRectilinearGridToTetrahedra::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  vtkRectilinearGridToTetrahedra *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectilinearGridToTetrahedra::NewInstance();
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
PyvtkRectilinearGridToTetrahedra_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRectilinearGridToTetrahedra *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRectilinearGridToTetrahedra::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCellTo5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetraPerCellTo5();
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCellTo5();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCellTo6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetraPerCellTo6();
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCellTo6();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCellTo12");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetraPerCellTo12();
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCellTo12();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo5And12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCellTo5And12");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetraPerCellTo5And12();
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCellTo5And12();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetTetraPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetraPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTetraPerCell(temp0);
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::SetTetraPerCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_GetTetraPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetraPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTetraPerCell();
      }
    else
      {
      tempr = op->vtkRectilinearGridToTetrahedra::GetTetraPerCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetRememberVoxelId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRememberVoxelId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRememberVoxelId(temp0);
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::SetRememberVoxelId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_GetRememberVoxelId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRememberVoxelId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRememberVoxelId();
      }
    else
      {
      tempr = op->vtkRectilinearGridToTetrahedra::GetRememberVoxelId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_RememberVoxelIdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RememberVoxelIdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RememberVoxelIdOn();
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::RememberVoxelIdOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_RememberVoxelIdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RememberVoxelIdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RememberVoxelIdOff();
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::RememberVoxelIdOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridToTetrahedra_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  const int size1 = 3;
  double temp2 = 0.001;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::SetInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridToTetrahedra_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridToTetrahedra *op = static_cast<vtkRectilinearGridToTetrahedra *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6 = 0.001;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkRectilinearGridToTetrahedra::SetInput(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridToTetrahedra_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return PyvtkRectilinearGridToTetrahedra_SetInput_s1(self, args);
    case 6:
    case 7:
      return PyvtkRectilinearGridToTetrahedra_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}


static PyMethodDef PyvtkRectilinearGridToTetrahedra_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridToTetrahedra_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridToTetrahedra_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridToTetrahedra_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectilinearGridToTetrahedra\nC++: vtkRectilinearGridToTetrahedra *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectilinearGridToTetrahedra_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectilinearGridToTetrahedra\nC++: vtkRectilinearGridToTetrahedra *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTetraPerCellTo5", PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo5, 1,
   (char*)"V.SetTetraPerCellTo5()\nC++: void SetTetraPerCellTo5()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {(char*)"SetTetraPerCellTo6", PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo6, 1,
   (char*)"V.SetTetraPerCellTo6()\nC++: void SetTetraPerCellTo6()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {(char*)"SetTetraPerCellTo12", PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo12, 1,
   (char*)"V.SetTetraPerCellTo12()\nC++: void SetTetraPerCellTo12()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {(char*)"SetTetraPerCellTo5And12", PyvtkRectilinearGridToTetrahedra_SetTetraPerCellTo5And12, 1,
   (char*)"V.SetTetraPerCellTo5And12()\nC++: void SetTetraPerCellTo5And12()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {(char*)"SetTetraPerCell", PyvtkRectilinearGridToTetrahedra_SetTetraPerCell, 1,
   (char*)"V.SetTetraPerCell(int)\nC++: void SetTetraPerCell(int a)\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {(char*)"GetTetraPerCell", PyvtkRectilinearGridToTetrahedra_GetTetraPerCell, 1,
   (char*)"V.GetTetraPerCell() -> int\nC++: int GetTetraPerCell()\n\nSet the method to divide each cell (voxel) in the RectilinearGrid\ninto tetrahedra.\n"},
  {(char*)"SetRememberVoxelId", PyvtkRectilinearGridToTetrahedra_SetRememberVoxelId, 1,
   (char*)"V.SetRememberVoxelId(int)\nC++: void SetRememberVoxelId(int a)\n\nShould the tetrahedra have scalar data indicating which Voxel\nthey came from in the vtkRectilinearGrid?\n"},
  {(char*)"GetRememberVoxelId", PyvtkRectilinearGridToTetrahedra_GetRememberVoxelId, 1,
   (char*)"V.GetRememberVoxelId() -> int\nC++: int GetRememberVoxelId()\n\nShould the tetrahedra have scalar data indicating which Voxel\nthey came from in the vtkRectilinearGrid?\n"},
  {(char*)"RememberVoxelIdOn", PyvtkRectilinearGridToTetrahedra_RememberVoxelIdOn, 1,
   (char*)"V.RememberVoxelIdOn()\nC++: void RememberVoxelIdOn()\n\nShould the tetrahedra have scalar data indicating which Voxel\nthey came from in the vtkRectilinearGrid?\n"},
  {(char*)"RememberVoxelIdOff", PyvtkRectilinearGridToTetrahedra_RememberVoxelIdOff, 1,
   (char*)"V.RememberVoxelIdOff()\nC++: void RememberVoxelIdOff()\n\nShould the tetrahedra have scalar data indicating which Voxel\nthey came from in the vtkRectilinearGrid?\n"},
  {(char*)"SetInput", PyvtkRectilinearGridToTetrahedra_SetInput, 1,
   (char*)"V.SetInput((float, float, float), (float, float, float), float)\nC++: void SetInput(const double Extent[3],\n    const double Spacing[3], const double tol=0.001)\nV.SetInput(float, float, float, float, float, float, float)\nC++: void SetInput(const double ExtentX, const double ExtentY,\n    const double ExtentZ, const double SpacingX,\n    const double SpacingY, const double SpacingZ,\n    const double tol=0.001)\n\nThis function for convenience for creating a Rectilinear Grid If\nSpacing does not fit evenly into extent, the last cell will have\na different width (or height or depth). If Extent[i]/Spacing[i]\nis within tol of an integer, then assume the programmer meant an\ninteger for direction i.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectilinearGridToTetrahedra_StaticNew()
{
  return vtkRectilinearGridToTetrahedra::New();
}

PyObject *PyVTKClass_vtkRectilinearGridToTetrahedraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectilinearGridToTetrahedra_StaticNew,
    PyvtkRectilinearGridToTetrahedra_Methods,
    "vtkRectilinearGridToTetrahedra", modulename,
    NULL, NULL,
    PyvtkRectilinearGridToTetrahedra_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridToTetrahedra_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridToTetrahedra - create a Tetrahedral mesh from a\nRectilinearGrid\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkRectilinearGridToTetrahedra forms a mesh of Tetrahedra from a\nvtkRectilinearGrid.  The tetrahedra can be 5 per cell, 6 per cell, or\na mixture of 5 or 12 per cell. The resulting mesh is consistent,\nmeaning that there are no edge crossings and that each tetrahedron\nface is shared by two tetrahedra, except those tetrahedra on the\nboundary. All tetrahedra are right handed.\n\nNote that 12 tetrahedra ",
    "per cell means adding a point in the center\nof the cell.\n\nIn order to subdivide some cells into 5 and some cells into 12\ntetrahedra: SetTetraPerCellTo5And12(); Set the Scalars of the Input\nRectilinearGrid to be 5 or 12 depending on what you want per cell of\nthe RectilinearGrid.\n\nIf you set RememberVoxelId, the scalars of the tetrahedron will be\nset to the Id of the Cell in the RectilinearGrid from",
    " which the\ntetrahedron came.\n\nThanks:\n\n\n   This class was developed by Samson J. Timoner of the\n   MIT Artificial Intelligence Laboratory\n\nSee Also:\n\n\n   vtkDelaunay3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridToTetrahedra(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridToTetrahedraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridToTetrahedra", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(12);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOXEL_TO_12_TET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOXEL_TO_5_TET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOXEL_TO_6_TET", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(-1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOXEL_TO_5_AND_12_TET", o) != 0)
    {
    Py_DECREF(o);
    }

}

