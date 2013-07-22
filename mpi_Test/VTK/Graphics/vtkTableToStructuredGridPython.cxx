// python wrapper for vtkTableToStructuredGrid
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
#include "vtkTableToStructuredGrid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTableToStructuredGrid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTableToStructuredGrid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTableToStructuredGridNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTableToStructuredGridNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkTableToStructuredGrid_Doc();


static PyObject *
PyvtkTableToStructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

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
      tempr = op->vtkTableToStructuredGrid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

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
      tempr = op->vtkTableToStructuredGrid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  vtkTableToStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::NewInstance();
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
PyvtkTableToStructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTableToStructuredGrid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTableToStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkTableToStructuredGrid_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkTableToStructuredGrid_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkTableToStructuredGrid_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeExtent();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXColumn(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetXColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXColumn();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetXColumn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXComponent(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetXComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXComponentMinValue();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetXComponentMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXComponentMaxValue();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetXComponentMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXComponent();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetXComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYColumn(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetYColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYColumn();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetYColumn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYComponent(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetYComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYComponentMinValue();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetYComponentMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYComponentMaxValue();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetYComponentMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYComponent();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetYComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZColumn(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetZColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZColumn();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetZColumn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZComponent(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetZComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZComponentMinValue();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetZComponentMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZComponentMaxValue();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetZComponentMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZComponent();
      }
    else
      {
      tempr = op->vtkTableToStructuredGrid::GetZComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToStructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToStructuredGrid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToStructuredGrid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToStructuredGrid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTableToStructuredGrid\nC++: vtkTableToStructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToStructuredGrid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToStructuredGrid\nC++: vtkTableToStructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkTableToStructuredGrid_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkTableToStructuredGrid_GetWholeExtent, 1,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetXColumn", PyvtkTableToStructuredGrid_SetXColumn, 1,
   (char*)"V.SetXColumn(string)\nC++: void SetXColumn(char *)\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"GetXColumn", PyvtkTableToStructuredGrid_GetXColumn, 1,
   (char*)"V.GetXColumn() -> string\nC++: char *GetXColumn()\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"SetXComponent", PyvtkTableToStructuredGrid_SetXComponent, 1,
   (char*)"V.SetXComponent(int)\nC++: void SetXComponent(int)\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponentMinValue", PyvtkTableToStructuredGrid_GetXComponentMinValue, 1,
   (char*)"V.GetXComponentMinValue() -> int\nC++: int GetXComponentMinValue()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponentMaxValue", PyvtkTableToStructuredGrid_GetXComponentMaxValue, 1,
   (char*)"V.GetXComponentMaxValue() -> int\nC++: int GetXComponentMaxValue()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponent", PyvtkTableToStructuredGrid_GetXComponent, 1,
   (char*)"V.GetXComponent() -> int\nC++: int GetXComponent()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"SetYColumn", PyvtkTableToStructuredGrid_SetYColumn, 1,
   (char*)"V.SetYColumn(string)\nC++: void SetYColumn(char *)\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {(char*)"GetYColumn", PyvtkTableToStructuredGrid_GetYColumn, 1,
   (char*)"V.GetYColumn() -> string\nC++: char *GetYColumn()\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {(char*)"SetYComponent", PyvtkTableToStructuredGrid_SetYComponent, 1,
   (char*)"V.SetYComponent(int)\nC++: void SetYComponent(int)\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponentMinValue", PyvtkTableToStructuredGrid_GetYComponentMinValue, 1,
   (char*)"V.GetYComponentMinValue() -> int\nC++: int GetYComponentMinValue()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponentMaxValue", PyvtkTableToStructuredGrid_GetYComponentMaxValue, 1,
   (char*)"V.GetYComponentMaxValue() -> int\nC++: int GetYComponentMaxValue()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponent", PyvtkTableToStructuredGrid_GetYComponent, 1,
   (char*)"V.GetYComponent() -> int\nC++: int GetYComponent()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"SetZColumn", PyvtkTableToStructuredGrid_SetZColumn, 1,
   (char*)"V.SetZColumn(string)\nC++: void SetZColumn(char *)\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {(char*)"GetZColumn", PyvtkTableToStructuredGrid_GetZColumn, 1,
   (char*)"V.GetZColumn() -> string\nC++: char *GetZColumn()\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {(char*)"SetZComponent", PyvtkTableToStructuredGrid_SetZComponent, 1,
   (char*)"V.SetZComponent(int)\nC++: void SetZComponent(int)\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponentMinValue", PyvtkTableToStructuredGrid_GetZComponentMinValue, 1,
   (char*)"V.GetZComponentMinValue() -> int\nC++: int GetZComponentMinValue()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponentMaxValue", PyvtkTableToStructuredGrid_GetZComponentMaxValue, 1,
   (char*)"V.GetZComponentMaxValue() -> int\nC++: int GetZComponentMaxValue()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponent", PyvtkTableToStructuredGrid_GetZComponent, 1,
   (char*)"V.GetZComponent() -> int\nC++: int GetZComponent()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToStructuredGrid_StaticNew()
{
  return vtkTableToStructuredGrid::New();
}

PyObject *PyVTKClass_vtkTableToStructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToStructuredGrid_StaticNew,
    PyvtkTableToStructuredGrid_Methods,
    "vtkTableToStructuredGrid", modulename,
    NULL, NULL,
    PyvtkTableToStructuredGrid_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToStructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkTableToStructuredGrid - converts vtkTable to a vtkStructuredGrid.\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkTableToStructuredGrid is a filter that converts an input vtkTable\nto a vtkStructuredGrid. It provides API to select columns to use as\npoints in the output structured grid. The specified dimensions of the\noutput (specified using SetWholeExtent()) must match the number of\nrows in the input table.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToStructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToStructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToStructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

