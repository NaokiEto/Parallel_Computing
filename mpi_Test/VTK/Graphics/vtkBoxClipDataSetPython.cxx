// python wrapper for vtkBoxClipDataSet
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
#include "vtkBoxClipDataSet.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBoxClipDataSet(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBoxClipDataSet(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBoxClipDataSetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBoxClipDataSetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkBoxClipDataSet_Doc();


static PyObject *
PyvtkBoxClipDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

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
      tempr = op->vtkBoxClipDataSet::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

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
      tempr = op->vtkBoxClipDataSet::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkBoxClipDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBoxClipDataSet::NewInstance();
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
PyvtkBoxClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBoxClipDataSet *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBoxClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetBoxClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkBoxClipDataSet::SetBoxClip(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClipScalars(temp0);
      }
    else
      {
      op->vtkBoxClipDataSet::SetGenerateClipScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateClipScalars();
      }
    else
      {
      tempr = op->vtkBoxClipDataSet::GetGenerateClipScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOn();
      }
    else
      {
      op->vtkBoxClipDataSet::GenerateClipScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOff();
      }
    else
      {
      op->vtkBoxClipDataSet::GenerateClipScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClippedOutput(temp0);
      }
    else
      {
      op->vtkBoxClipDataSet::SetGenerateClippedOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateClippedOutput();
      }
    else
      {
      tempr = op->vtkBoxClipDataSet::GetGenerateClippedOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOn();
      }
    else
      {
      op->vtkBoxClipDataSet::GenerateClippedOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOff();
      }
    else
      {
      op->vtkBoxClipDataSet::GenerateClippedOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClippedOutput();
      }
    else
      {
      tempr = op->vtkBoxClipDataSet::GetClippedOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOutputs();
      }
    else
      {
      tempr = op->vtkBoxClipDataSet::GetNumberOfOutputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkBoxClipDataSet::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkBoxClipDataSet::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkBoxClipDataSet::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

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
      tempr = op->vtkBoxClipDataSet::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientation();
      }
    else
      {
      tempr = op->vtkBoxClipDataSet::GetOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkBoxClipDataSet::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_InterpolateEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolateEdge");

  vtkDataSetAttributes *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  double temp4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    vtkBoxClipDataSet::InterpolateEdge(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipHexahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipHexahedron(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipBox2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipBox2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipHexahedron2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipHexahedron2D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipBox1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipBox1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkPoints *temp0 = NULL;
  vtkGenericCell *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkGenericCell") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipHexahedron1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipHexahedron1D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipBox0D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipBox0D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkGenericCell *temp0 = NULL;
  vtkIncrementalPointLocator *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  vtkPointData *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkCellData *temp5 = NULL;
  vtkIdType temp6;
  vtkCellData *temp7 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipBox0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipBox0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxClipDataSet_ClipHexahedron0D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipHexahedron0D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxClipDataSet *op = static_cast<vtkBoxClipDataSet *>(vp);

  vtkGenericCell *temp0 = NULL;
  vtkIncrementalPointLocator *temp1 = NULL;
  vtkCellArray *temp2 = NULL;
  vtkPointData *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkCellData *temp5 = NULL;
  vtkIdType temp6;
  vtkCellData *temp7 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->ClipHexahedron0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkBoxClipDataSet::ClipHexahedron0D(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoxClipDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkBoxClipDataSet_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBoxClipDataSet_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBoxClipDataSet_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBoxClipDataSet\nC++: vtkBoxClipDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBoxClipDataSet_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoxClipDataSet\nC++: vtkBoxClipDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBoxClip", PyvtkBoxClipDataSet_SetBoxClip, 1,
   (char*)"V.SetBoxClip(float, float, float, float, float, float)\nC++: void SetBoxClip(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\n"},
  {(char*)"SetGenerateClipScalars", PyvtkBoxClipDataSet_SetGenerateClipScalars, 1,
   (char*)"V.SetGenerateClipScalars(int)\nC++: void SetGenerateClipScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {(char*)"GetGenerateClipScalars", PyvtkBoxClipDataSet_GetGenerateClipScalars, 1,
   (char*)"V.GetGenerateClipScalars() -> int\nC++: int GetGenerateClipScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {(char*)"GenerateClipScalarsOn", PyvtkBoxClipDataSet_GenerateClipScalarsOn, 1,
   (char*)"V.GenerateClipScalarsOn()\nC++: void GenerateClipScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {(char*)"GenerateClipScalarsOff", PyvtkBoxClipDataSet_GenerateClipScalarsOff, 1,
   (char*)"V.GenerateClipScalarsOff()\nC++: void GenerateClipScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated, and not the input scalar data.\n"},
  {(char*)"SetGenerateClippedOutput", PyvtkBoxClipDataSet_SetGenerateClippedOutput, 1,
   (char*)"V.SetGenerateClippedOutput(int)\nC++: void SetGenerateClippedOutput(int a)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetGenerateClippedOutput", PyvtkBoxClipDataSet_GetGenerateClippedOutput, 1,
   (char*)"V.GetGenerateClippedOutput() -> int\nC++: int GetGenerateClippedOutput()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOn", PyvtkBoxClipDataSet_GenerateClippedOutputOn, 1,
   (char*)"V.GenerateClippedOutputOn()\nC++: void GenerateClippedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOff", PyvtkBoxClipDataSet_GenerateClippedOutputOff, 1,
   (char*)"V.GenerateClippedOutputOff()\nC++: void GenerateClippedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetClippedOutput", PyvtkBoxClipDataSet_GetClippedOutput, 1,
   (char*)"V.GetClippedOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the Clipped output.\n"},
  {(char*)"GetNumberOfOutputs", PyvtkBoxClipDataSet_GetNumberOfOutputs, 1,
   (char*)"V.GetNumberOfOutputs() -> int\nC++: virtual int GetNumberOfOutputs()\n\nReturn the Clipped output.\n"},
  {(char*)"SetLocator", PyvtkBoxClipDataSet_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkBoxClipDataSet_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkBoxClipDataSet_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {(char*)"GetMTime", PyvtkBoxClipDataSet_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the mtime also considering the locator.\n"},
  {(char*)"GetOrientation", PyvtkBoxClipDataSet_GetOrientation, 1,
   (char*)"V.GetOrientation() -> int\nC++: unsigned int GetOrientation()\n\nTells if clipping happens with a box parallel with coordinate\naxis (0) or with an hexahedral box (1). Initial value is 1.\n"},
  {(char*)"SetOrientation", PyvtkBoxClipDataSet_SetOrientation, 1,
   (char*)"V.SetOrientation(int)\nC++: void SetOrientation(unsigned int a)\n\nTells if clipping happens with a box parallel with coordinate\naxis (0) or with an hexahedral box (1). Initial value is 1.\n"},
  {(char*)"InterpolateEdge", PyvtkBoxClipDataSet_InterpolateEdge, 1,
   (char*)"V.InterpolateEdge(vtkDataSetAttributes, int, int, int, float)\nC++: static void InterpolateEdge(vtkDataSetAttributes *attributes,\n     vtkIdType toId, vtkIdType fromId1, vtkIdType fromId2,\n    double t)\n\n"},
  {(char*)"ClipBox", PyvtkBoxClipDataSet_ClipBox, 1,
   (char*)"V.ClipBox(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tets,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipHexahedron", PyvtkBoxClipDataSet_ClipHexahedron, 1,
   (char*)"V.ClipHexahedron(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipBox2D", PyvtkBoxClipDataSet_ClipBox2D, 1,
   (char*)"V.ClipBox2D(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n     vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox2D(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tets,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipHexahedron2D", PyvtkBoxClipDataSet_ClipHexahedron2D, 1,
   (char*)"V.ClipHexahedron2D(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron2D(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipBox1D", PyvtkBoxClipDataSet_ClipBox1D, 1,
   (char*)"V.ClipBox1D(vtkPoints, vtkGenericCell, vtkIncrementalPointLocator,\n     vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox1D(vtkPoints *newPoints, vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *lines,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipHexahedron1D", PyvtkBoxClipDataSet_ClipHexahedron1D, 1,
   (char*)"V.ClipHexahedron1D(vtkPoints, vtkGenericCell,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void ClipHexahedron1D(vtkPoints *newPoints,\n    vtkGenericCell *cell, vtkIncrementalPointLocator *locator,\n    vtkCellArray *lines, vtkPointData *inPD, vtkPointData *outPD,\n    vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipBox0D", PyvtkBoxClipDataSet_ClipBox0D, 1,
   (char*)"V.ClipBox0D(vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipBox0D(vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {(char*)"ClipHexahedron0D", PyvtkBoxClipDataSet_ClipHexahedron0D, 1,
   (char*)"V.ClipHexahedron0D(vtkGenericCell, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData)\nC++: void ClipHexahedron0D(vtkGenericCell *cell,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD,\n    vtkIdType cellId, vtkCellData *outCD)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoxClipDataSet_StaticNew()
{
  return vtkBoxClipDataSet::New();
}

PyObject *PyVTKClass_vtkBoxClipDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoxClipDataSet_StaticNew,
    PyvtkBoxClipDataSet_Methods,
    "vtkBoxClipDataSet", modulename,
    NULL, NULL,
    PyvtkBoxClipDataSet_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBoxClipDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkBoxClipDataSet - clip an unstructured grid\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Clipping means that is actually 'cuts' through the cells of the\ndataset, returning tetrahedral cells inside of the box. The output of\nthis filter is an unstructured grid.\n\nThis filter can be configured to compute a second output. The second\noutput is the part of the cell that is clipped away. Set the\nGenerateClippedData boolean on if you wish to access this output\ndata.\n\nThe vtkBoxClipDataSet will",
    " triangulate all types of 3D cells (i.e,\ncreate tetrahedra). This is necessary to preserve compatibility\nacross face neighbors.\n\nTo use this filter,you can decide if you will be clipping with a box\nor a hexahedral box.\n1) Set orientation if(SetOrientation(0)): box (parallel with\n   coordinate axis) SetBoxClip(xmin,xmax,ymin,ymax,zmin,zmax)\n   if(SetOrientation(1)): hexahedral box (Default)\n   SetB",
    "oxClip(n[0],o[0],n[1],o[1],n[2],o[2],n[3],o[3],n[4],o[4],n[5],o\n   [5]) PlaneNormal[] normal of each plane PlanePoint[] point on the\n   plane\n2) Apply the GenerateClipScalarsOn()\n3) Execute clipping  Update();\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoxClipDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoxClipDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoxClipDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

