// python wrapper for vtkDelaunay3D
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
#include "vtkDelaunay3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDelaunay3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDelaunay3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDelaunay3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDelaunay3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkDelaunay3D_Doc();


static PyObject *
PyvtkDelaunay3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

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
      tempr = op->vtkDelaunay3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

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
      tempr = op->vtkDelaunay3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  vtkDelaunay3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDelaunay3D::NewInstance();
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
PyvtkDelaunay3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDelaunay3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDelaunay3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlpha(temp0);
      }
    else
      {
      op->vtkDelaunay3D::SetAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlphaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlphaMinValue();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetAlphaMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlphaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlphaMaxValue();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetAlphaMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlpha();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetAlpha();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkDelaunay3D::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkDelaunay3D::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMinValue();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffset();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetBoundingTriangulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundingTriangulation(temp0);
      }
    else
      {
      op->vtkDelaunay3D::SetBoundingTriangulation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetBoundingTriangulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundingTriangulation();
      }
    else
      {
      tempr = op->vtkDelaunay3D::GetBoundingTriangulation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_BoundingTriangulationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundingTriangulationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundingTriangulationOn();
      }
    else
      {
      op->vtkDelaunay3D::BoundingTriangulationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_BoundingTriangulationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundingTriangulationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BoundingTriangulationOff();
      }
    else
      {
      op->vtkDelaunay3D::BoundingTriangulationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

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
      op->vtkDelaunay3D::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

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
      tempr = op->vtkDelaunay3D::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkDelaunay3D::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  vtkIdType temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  vtkIdList *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkIdList"))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->InsertPoint(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkDelaunay3D::InsertPoint(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_EndPointInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPointInsertion();
      }
    else
      {
      op->vtkDelaunay3D::EndPointInsertion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

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
      tempr = op->vtkDelaunay3D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDelaunay3D_Methods[] = {
  {(char*)"GetClassName", PyvtkDelaunay3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDelaunay3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDelaunay3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDelaunay3D\nC++: vtkDelaunay3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDelaunay3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDelaunay3D\nC++: vtkDelaunay3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAlpha", PyvtkDelaunay3D_SetAlpha, 1,
   (char*)"V.SetAlpha(float)\nC++: void SetAlpha(double)\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges, faces, or tetra\ncontained within the circumsphere (of radius alpha) will be\noutput. Otherwise, only tetrahedra will be output.\n"},
  {(char*)"GetAlphaMinValue", PyvtkDelaunay3D_GetAlphaMinValue, 1,
   (char*)"V.GetAlphaMinValue() -> float\nC++: double GetAlphaMinValue()\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges, faces, or tetra\ncontained within the circumsphere (of radius alpha) will be\noutput. Otherwise, only tetrahedra will be output.\n"},
  {(char*)"GetAlphaMaxValue", PyvtkDelaunay3D_GetAlphaMaxValue, 1,
   (char*)"V.GetAlphaMaxValue() -> float\nC++: double GetAlphaMaxValue()\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges, faces, or tetra\ncontained within the circumsphere (of radius alpha) will be\noutput. Otherwise, only tetrahedra will be output.\n"},
  {(char*)"GetAlpha", PyvtkDelaunay3D_GetAlpha, 1,
   (char*)"V.GetAlpha() -> float\nC++: double GetAlpha()\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges, faces, or tetra\ncontained within the circumsphere (of radius alpha) will be\noutput. Otherwise, only tetrahedra will be output.\n"},
  {(char*)"SetTolerance", PyvtkDelaunay3D_SetTolerance, 1,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {(char*)"GetToleranceMinValue", PyvtkDelaunay3D_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkDelaunay3D_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {(char*)"GetTolerance", PyvtkDelaunay3D_GetTolerance, 1,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {(char*)"SetOffset", PyvtkDelaunay3D_SetOffset, 1,
   (char*)"V.SetOffset(float)\nC++: void SetOffset(double)\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {(char*)"GetOffsetMinValue", PyvtkDelaunay3D_GetOffsetMinValue, 1,
   (char*)"V.GetOffsetMinValue() -> float\nC++: double GetOffsetMinValue()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {(char*)"GetOffsetMaxValue", PyvtkDelaunay3D_GetOffsetMaxValue, 1,
   (char*)"V.GetOffsetMaxValue() -> float\nC++: double GetOffsetMaxValue()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {(char*)"GetOffset", PyvtkDelaunay3D_GetOffset, 1,
   (char*)"V.GetOffset() -> float\nC++: double GetOffset()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {(char*)"SetBoundingTriangulation", PyvtkDelaunay3D_SetBoundingTriangulation, 1,
   (char*)"V.SetBoundingTriangulation(int)\nC++: void SetBoundingTriangulation(int a)\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {(char*)"GetBoundingTriangulation", PyvtkDelaunay3D_GetBoundingTriangulation, 1,
   (char*)"V.GetBoundingTriangulation() -> int\nC++: int GetBoundingTriangulation()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {(char*)"BoundingTriangulationOn", PyvtkDelaunay3D_BoundingTriangulationOn, 1,
   (char*)"V.BoundingTriangulationOn()\nC++: void BoundingTriangulationOn()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {(char*)"BoundingTriangulationOff", PyvtkDelaunay3D_BoundingTriangulationOff, 1,
   (char*)"V.BoundingTriangulationOff()\nC++: void BoundingTriangulationOff()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {(char*)"SetLocator", PyvtkDelaunay3D_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkPointLocator is used.\n"},
  {(char*)"GetLocator", PyvtkDelaunay3D_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkPointLocator is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkDelaunay3D_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to eliminate \"coincident\" points.\n"},
  {(char*)"InsertPoint", PyvtkDelaunay3D_InsertPoint, 1,
   (char*)"V.InsertPoint(vtkUnstructuredGrid, vtkPoints, int, [float, float,\n    float], vtkIdList)\nC++: void InsertPoint(vtkUnstructuredGrid *Mesh,\n    vtkPoints *points, vtkIdType id, double x[3],\n    vtkIdList *holeTetras)\n\nThis is a helper method used with InitPointInsertion() to create\ntetrahedronalizations of points. Its purpose is to inject point\nat coordinates specified into tetrahedronalization. The point id\nis an index into the list of points in the mesh structure.  (See\nvtkDelaunay3D::InitPointInsertion() for more information.)  When\nyou have completed inserting points, traverse the mesh structure\nto extract desired tetrahedra (or tetra faces and edges).The\nholeTetras id list lists all the tetrahedra that are deleted\n(invalid) in the mesh structure.\n"},
  {(char*)"EndPointInsertion", PyvtkDelaunay3D_EndPointInsertion, 1,
   (char*)"V.EndPointInsertion()\nC++: void EndPointInsertion()\n\nInvoke this method after all points have been inserted. The\npurpose of the method is to clean up internal data structures.\nNote that the (vtkUnstructuredGrid *)Mesh returned from\nInitPointInsertion() is NOT deleted, you still are responsible\nfor cleaning that up.\n"},
  {(char*)"GetMTime", PyvtkDelaunay3D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDelaunay3D_StaticNew()
{
  return vtkDelaunay3D::New();
}

PyObject *PyVTKClass_vtkDelaunay3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDelaunay3D_StaticNew,
    PyvtkDelaunay3D_Methods,
    "vtkDelaunay3D", modulename,
    NULL, NULL,
    PyvtkDelaunay3D_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDelaunay3D_Doc()
{
  static const char *docstring[] = {
    "vtkDelaunay3D - create 3D Delaunay triangulation of input points\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkDelaunay3D is a filter that constructs a 3D Delaunay triangulation\nfrom a list of input points. These points may be represented by any\ndataset of type vtkPointSet and subclasses. The output of the filter\nis an unstructured grid dataset. Usually the output is a tetrahedral\nmesh, but if a non-zero alpha distance value is specified (called the\n\"alpha\" value), then only tetrahedra, triangles, edges",
    ", and vertices\nlying within the alpha radius are output. In other words, non-zero\nalpha values may result in arbitrary combinations of tetrahedra,\ntriangles, lines, and vertices. (The notion of alpha value is derived\nfrom Edelsbrunner's work on \"alpha shapes\".)\n\nThe 3D Delaunay triangulation is defined as the triangulation that\nsatisfies the Delaunay criterion for n-dimensional simplexes (in this\n",
    "case n=3 and the simplexes are tetrahedra). This criterion states\nthat a circumsphere of each simplex in a triangulation contains only\nthe n+1 defining points of the simplex. (See text for more\ninformation.) While in two dimensions this translates into an\n\"optimal\" triangulation, this is not true in 3D, since a measurement\nfor optimality in 3D is not agreed on.\n\nDelaunay triangulations are used to",
    " build topological structures from\nunorganized (or unstructured) points. The input to this filter is a\nlist of points specified in 3D. (If you wish to create 2D\ntriangulations see vtkDelaunay2D.) The output is an unstructured\ngrid.\n\nThe Delaunay triangulation can be numerically sensitive. To prevent\nproblems, try to avoid injecting points that will result in triangles\nwith bad aspect ratios (1000:",
    "1 or greater). In practice this means\ninserting points that are \"widely dispersed\", and enables smooth\ntransition of triangle sizes throughout the mesh. (You may even want\nto add extra points to create a better point distribution.) If\nnumerical problems are present, you will see a warning message to\nthis effect at the end of the triangulation process.\n\nCaveats:\n\nPoints arranged on a regular lattic",
    "e (termed degenerate cases) can be\ntriangulated in more than one way (at least according to the Delaunay\ncriterion). The choice of triangulation (as implemented by this\nalgorithm) depends on the order of the input points. The first four\npoints will form a tetrahedron; other degenerate points (relative to\nthis initial tetrahedron) will not break it.\n\nPoints that are coincident (or nearly so) may be",
    " discarded by the\nalgorithm.  This is because the Delaunay triangulation requires\nunique input points.  You can control the definition of coincidence\nwith the \"Tolerance\" instance variable.\n\nThe output of the Delaunay triangulation is supposedly a convex hull.\nIn certain cases this implementation may not generate the convex\nhull. This behavior can be controlled by the Offset instance\nvariable. Off",
    "set is a multiplier used to control the size of the\ninitial triangulation. The larger the offset value, the more likely\nyou will generate a convex hull; and the more likely you are to see\nnumerical problems.\n\nThe implementation of this algorithm varies from the 2D Delaunay\nalgorithm (i.e., vtkDelaunay2D) in an important way. When points are\ninjected into the triangulation, the search for the enclo",
    "sing\ntetrahedron is quite different. In the 3D case, the closest\npreviously inserted point point is found, and then the connected\ntetrahedra are searched to find the containing one. (In 2D, a \"walk\"\ntowards the enclosing triangle is performed.) If the triangulation is\nDelaunay, then an enclosing tetrahedron will be found. However, in\ndegenerate cases an enclosing tetrahedron may not be found and t",
    "he\npoint will be rejected.\n\nSee Also:\n\nvtkDelaunay2D vtkGaussianSplatter vtkUnstructuredGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDelaunay3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDelaunay3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDelaunay3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

