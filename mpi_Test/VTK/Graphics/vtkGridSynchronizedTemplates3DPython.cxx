// python wrapper for vtkGridSynchronizedTemplates3D
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
#include "vtkGridSynchronizedTemplates3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGridSynchronizedTemplates3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGridSynchronizedTemplates3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGridSynchronizedTemplates3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGridSynchronizedTemplates3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGridSynchronizedTemplates3D_Doc();


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      tempr = op->vtkGridSynchronizedTemplates3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      tempr = op->vtkGridSynchronizedTemplates3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  vtkGridSynchronizedTemplates3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGridSynchronizedTemplates3D::NewInstance();
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
PyvtkGridSynchronizedTemplates3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGridSynchronizedTemplates3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGridSynchronizedTemplates3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

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
      tempr = op->vtkGridSynchronizedTemplates3D::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeNormals();
      }
    else
      {
      tempr = op->vtkGridSynchronizedTemplates3D::GetComputeNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOn();
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::ComputeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOff();
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::ComputeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeGradients(temp0);
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::SetComputeGradients(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeGradients();
      }
    else
      {
      tempr = op->vtkGridSynchronizedTemplates3D::GetComputeGradients();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientsOn();
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::ComputeGradientsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientsOff();
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::ComputeGradientsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeScalars(temp0);
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::SetComputeScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeScalars();
      }
    else
      {
      tempr = op->vtkGridSynchronizedTemplates3D::GetComputeScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOn();
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::ComputeScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeScalarsOff();
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::ComputeScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue(temp0);
      }
    else
      {
      tempr = op->vtkGridSynchronizedTemplates3D::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfContours(temp0);
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::SetNumberOfContours(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfContours();
      }
    else
      {
      tempr = op->vtkGridSynchronizedTemplates3D::GetNumberOfContours();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1);
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::GenerateValues(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGridSynchronizedTemplates3D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GenerateValues(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::GenerateValues(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGridSynchronizedTemplates3D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGridSynchronizedTemplates3D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkGridSynchronizedTemplates3D_GenerateValues_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return NULL;
}



static PyObject *
PyvtkGridSynchronizedTemplates3D_GetExecuteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExecuteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExecuteExtent();
      }
    else
      {
      tempr = op->vtkGridSynchronizedTemplates3D::GetExecuteExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGridSynchronizedTemplates3D_SetInputMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridSynchronizedTemplates3D *op = static_cast<vtkGridSynchronizedTemplates3D *>(vp);

  long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputMemoryLimit(temp0);
      }
    else
      {
      op->vtkGridSynchronizedTemplates3D::SetInputMemoryLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGridSynchronizedTemplates3D_Methods[] = {
  {(char*)"GetClassName", PyvtkGridSynchronizedTemplates3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGridSynchronizedTemplates3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGridSynchronizedTemplates3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGridSynchronizedTemplates3D\nC++: vtkGridSynchronizedTemplates3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGridSynchronizedTemplates3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGridSynchronizedTemplates3D\nC++: vtkGridSynchronizedTemplates3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkGridSynchronizedTemplates3D_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nBecause we delegate to vtkContourValues\n"},
  {(char*)"SetComputeNormals", PyvtkGridSynchronizedTemplates3D_SetComputeNormals, 1,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int a)\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"GetComputeNormals", PyvtkGridSynchronizedTemplates3D_GetComputeNormals, 1,
   (char*)"V.GetComputeNormals() -> int\nC++: int GetComputeNormals()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeNormalsOn", PyvtkGridSynchronizedTemplates3D_ComputeNormalsOn, 1,
   (char*)"V.ComputeNormalsOn()\nC++: void ComputeNormalsOn()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeNormalsOff", PyvtkGridSynchronizedTemplates3D_ComputeNormalsOff, 1,
   (char*)"V.ComputeNormalsOff()\nC++: void ComputeNormalsOff()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {(char*)"SetComputeGradients", PyvtkGridSynchronizedTemplates3D_SetComputeGradients, 1,
   (char*)"V.SetComputeGradients(int)\nC++: void SetComputeGradients(int a)\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"GetComputeGradients", PyvtkGridSynchronizedTemplates3D_GetComputeGradients, 1,
   (char*)"V.GetComputeGradients() -> int\nC++: int GetComputeGradients()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeGradientsOn", PyvtkGridSynchronizedTemplates3D_ComputeGradientsOn, 1,
   (char*)"V.ComputeGradientsOn()\nC++: void ComputeGradientsOn()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"ComputeGradientsOff", PyvtkGridSynchronizedTemplates3D_ComputeGradientsOff, 1,
   (char*)"V.ComputeGradientsOff()\nC++: void ComputeGradientsOff()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {(char*)"SetComputeScalars", PyvtkGridSynchronizedTemplates3D_SetComputeScalars, 1,
   (char*)"V.SetComputeScalars(int)\nC++: void SetComputeScalars(int a)\n\nSet/Get the computation of scalars.\n"},
  {(char*)"GetComputeScalars", PyvtkGridSynchronizedTemplates3D_GetComputeScalars, 1,
   (char*)"V.GetComputeScalars() -> int\nC++: int GetComputeScalars()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"ComputeScalarsOn", PyvtkGridSynchronizedTemplates3D_ComputeScalarsOn, 1,
   (char*)"V.ComputeScalarsOn()\nC++: void ComputeScalarsOn()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"ComputeScalarsOff", PyvtkGridSynchronizedTemplates3D_ComputeScalarsOff, 1,
   (char*)"V.ComputeScalarsOff()\nC++: void ComputeScalarsOff()\n\nSet/Get the computation of scalars.\n"},
  {(char*)"SetValue", PyvtkGridSynchronizedTemplates3D_SetValue, 1,
   (char*)"V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {(char*)"GetValue", PyvtkGridSynchronizedTemplates3D_GetValue, 1,
   (char*)"V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {(char*)"SetNumberOfContours", PyvtkGridSynchronizedTemplates3D_SetNumberOfContours, 1,
   (char*)"V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {(char*)"GetNumberOfContours", PyvtkGridSynchronizedTemplates3D_GetNumberOfContours, 1,
   (char*)"V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {(char*)"GenerateValues", PyvtkGridSynchronizedTemplates3D_GenerateValues, 1,
   (char*)"V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {(char*)"GetExecuteExtent", PyvtkGridSynchronizedTemplates3D_GetExecuteExtent, 1,
   (char*)"V.GetExecuteExtent() -> (int, int, int, int, int, int)\nC++: int *GetExecuteExtent()\n\nNeeded by templated functions.\n"},
  {(char*)"SetInputMemoryLimit", PyvtkGridSynchronizedTemplates3D_SetInputMemoryLimit, 1,
   (char*)"V.SetInputMemoryLimit(int)\nC++: void SetInputMemoryLimit(long limit)\n\nThis filter will initiate streaming so that no piece requested\nfrom the input will be larger than this value (KiloBytes).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGridSynchronizedTemplates3D_StaticNew()
{
  return vtkGridSynchronizedTemplates3D::New();
}

PyObject *PyVTKClass_vtkGridSynchronizedTemplates3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGridSynchronizedTemplates3D_StaticNew,
    PyvtkGridSynchronizedTemplates3D_Methods,
    "vtkGridSynchronizedTemplates3D", modulename,
    NULL, NULL,
    PyvtkGridSynchronizedTemplates3D_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGridSynchronizedTemplates3D_Doc()
{
  static const char *docstring[] = {
    "vtkGridSynchronizedTemplates3D - generate isosurface from structured\ngrids\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkGridSynchronizedTemplates3D is a 3D implementation of the\nsynchronized template algorithm.\n\nCaveats:\n\nThis filter is specialized to 3D grids.\n\nSee Also:\n\nvtkContourFilter vtkSynchronizedTemplates3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGridSynchronizedTemplates3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGridSynchronizedTemplates3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGridSynchronizedTemplates3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

